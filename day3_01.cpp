#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
    public:
      vector<int> leaders(vector<int>& a) {
          int n = a.size();
          int maxi = a[n - 1];
          vector<int> ans;
          ans.push_back(maxi);
  
          for (int i = n - 2; i >= 0; i--) {
              if (a[i] >= maxi) {
                  ans.push_back(a[i]);
                  maxi = a[i];
              }
          }
  
          reverse(ans.begin(), ans.end());
          return ans;
      }
  };
  