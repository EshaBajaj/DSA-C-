#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node(int data1, Node* next1){
	data = data1;
	next = next1;
	
	}
};

int main(){
	vector<int> arr = {2,5,6,7,9,10};
	
	Node*y = new Node(arr[0]);
	cout<< y->data <<'\n';

	return 0;
}
