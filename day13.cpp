/*Given a unsorted array arr[] of positive integers having all the numbers occurring 
exactly twice, except for one number which will occur only once. 
Find the number occurring only once.*/
class Solution {
  public:
    int findUnique(vector<int> &arr) {
        // code here
        int sum=0;
        for(int i=0; i<arr.size(); i++){
        sum= sum^arr[i];  
        }
        return sum;
    }
};