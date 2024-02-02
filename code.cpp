class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        vector<int>v;
        // code here
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<r;i++){
            if(i%2==0){
                for(int j=0;j<c;j++){
                    v.push_back(matrix[i][j]);
                }
            }
            else{
                for(int j=c-1;j>=0;j--){
                    v.push_back(matrix[i][j]);
                }
            }
        }
        return v;
    }
};
