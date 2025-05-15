#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> a = {1, 2, 3, 4, 5}; 
vector<vector<int>> Q = {{0, 2}, {1, 4}};
for(int i=0; i<Q.size(); ++i){
    int s= Q[i][0];
    int e= Q[i][1];
    long sum=0;
    for(int j=s; j<e; ++j){
        sum=sum+a[j];
    }

cout<<"The sum is :" << s << "to" << e << "is"<< sum << endl;
}
}