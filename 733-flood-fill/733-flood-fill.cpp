class Solution {
public:
    void dfs(int i,int j,int initial,int colour,vector<vector<int>>& image )
    {
        int n=image.size();
        int m=image[0].size();
        if(i<0 or j<0){return;}
        if(i>=n or j>=m){return;}
        if(image[i][j]!=initial){return;}
        
        image[i][j]=colour;
        
        
        
         dfs(i+1,j,initial,colour,image);
         dfs(i-1,j,initial,colour,image);
         dfs(i,j+1,initial,colour,image);
         dfs(i,j-1,initial,colour,image);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int colour) {
        int initial=image[sr][sc];
        if(initial!=colour)
        {
        dfs(sr,sc,initial,colour,image);
        }
        return image;
        
        
    }
};