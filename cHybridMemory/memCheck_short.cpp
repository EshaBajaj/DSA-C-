// Short version of memCheck: runs N iterations, leaks memory, then exits so CRT leak report is printed.
#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void leakMemoryBlock() {
    int* leak_ptr = new int[250000]; // ~1 MB
    if (leak_ptr) leak_ptr[0] = 123;
    // intentionally not deleting to simulate a leak
}

int main() {
#if defined(_MSC_VER)
    // Enable leak check at program exit
    int dbgFlags = _CrtSetDbgFlag(_CRTDBG_REPORT_FLAG);
    dbgFlags |= _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF;
    _CrtSetDbgFlag(dbgFlags);
#endif

    const int N = 5; // number of leak iterations before exit
    cout << "Running " << N << " leak iterations..." << endl;
    for (int i = 0; i < N; ++i) {
        leakMemoryBlock();
        cout << "Iteration " << (i+1) << " done" << endl;
        this_thread::sleep_for(chrono::milliseconds(200));
    }

    cout << "Done. Exiting so CRT leak report (if any) is printed." << endl;
    return 0;
}
