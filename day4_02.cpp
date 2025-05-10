#include<iostream>
#include <vector>
using namespace std;

class Solution{
public:
int countPairs(string s) {
int n= s.size();
int count=0;

for (int i=0; i<n; ++i){
    for(int j=i+1; j<n; ++j){
        if(s[i]=='a' && s[j]=='b'){
            count++;
        }
    }
}
return count;
}

};

