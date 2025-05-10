#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int first=0;
        int last=s.size()-1;
            while(first<last){
                swap(s[first],s[last]);
                first++;
                last--;
               }   
               return s;
     }
};