class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<m;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        
        reverse(mat.begin(),mat.end());
        
    }
};
