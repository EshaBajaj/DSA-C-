class Solution {
public:
    int DiagonalSum(vector<vector<int>>& matrix) {
        int N = matrix.size();
        int sum = 0;

        for(int i=0; i<N; i++){
            sum+=matrix[i][i];
        }
        int i=0;
        int j=N-1;
        while(i<N && j<=0){
            sum+= matrix[i][N-1-i];
            i++;
            j--;
        }
        if(N%2==1){
            sum-=matrix[N/2][N/2];
        }
    }
    return sum;
}

