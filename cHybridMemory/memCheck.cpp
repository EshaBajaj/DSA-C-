#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>

#include <iostream>
#include <vector>
#include <chrono>
#include <thread>

using namespace std;

// This function simulates a task that leaks a block of memory
void leakMemoryBlock() {
    // Dynamically allocate a chunk of memory (about 1 MB).
    // The pointer to this memory is *not* stored anywhere that can be freed,
    // and it goes out of scope immediately, causing the leak.
    int* leak_ptr = new int[250000]; // 250,000 integers * 4 bytes/int = 1,000,000 bytes (1 MB)

    // Optional: write a value to the memory to ensure the OS "commits" the allocation
    if (leak_ptr != nullptr) {
        leak_ptr[0] = 123;
    }
    
    // NO 'delete[] leak_ptr;' - This is the leak!
}

int main() {
    // Enable CRT debug heap allocations and automatic leak checking at program exit.
    // Only meaningful when using the MSVC runtime in a debug build.
#if defined(_MSC_VER)
    int dbgFlags = _CrtSetDbgFlag(_CRTDBG_REPORT_FLAG);
    dbgFlags |= _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF;
    _CrtSetDbgFlag(dbgFlags);
#endif

    cout << "--- Starting Memory Leak Test ---" << endl;
    cout << "Open Task Manager/Activity Monitor and find this process." << endl;
    cout << "Watch the memory column. It should increase rapidly." << endl;

    int iteration = 1;
    while (true) {
        leakMemoryBlock();
        cout << "Leak Iteration: " << iteration++ << " (Memory should be climbing...)" << endl;
        
        // Wait for a short time so the leak is visible and not *too* fast
        this_thread::sleep_for(chrono::milliseconds(50)); 
    }

    return 0; // The program will never reach here
}