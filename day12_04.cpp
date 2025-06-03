class Solution {
  public:
    vector<int> rowSum(vector<vector<int>>& mat) {
        vector<int>result;
        
        for(int i=0; i<mat.size(); ++i){
            int sum=0;
            for(int j=0; j<mat[i].size(); j++){
                sum+=mat[i][j];
            }
            result.push_back(sum);
        }
        return result;
    }
};