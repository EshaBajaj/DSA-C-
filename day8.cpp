class Matrix(int m, int n){
  int m = mat.size(), n = mat[0].size();
    vector<vector<int>> res(n, vector<int>(m));
    for(int i=0; i<m; i++){
        for(int i=0; i<n ; ++j){
            cout<< matrix[i][j]<<" ";
        }
        cout << endl;
    }
}

//
void rotate90(vector<vector<int>>& mat) {
    int n = mat.size();
    // Step 1: Transpose
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            swap(mat[i][j], mat[j][i]);
    // Step 2: Reverse each row
    for (int i = 0; i < n; i++)
        reverse(mat[i].begin(), mat[i].end());  // Replace with manual reversal if needed
}