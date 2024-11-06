class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M=matrix.size();
        int N=matrix[0].size();
        int i=0,j=0,dir=0;
        int di[4]={0,1,0,-1};
        int dj[4]={1,0,-1,0};


        vector<int>ans;
        ans.push_back(matrix[i][j]);
        i+=di[dir];
        j+=dj[dir];
        ans.push_back(matrix[i][j]);
        i+=di[dir];
        j+=dj[dir];
        ans.push_back(matrix[i][j]);

        return ans;

    }
};
