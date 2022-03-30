class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
	//CREATED TEMPERARY 1D VECTOR 
        vector<int>tempvec;
	//TEMP VARIABLE	
        int temp;
		
	//IN THIS LOOP I HAVE PUSH ALL THE ELEMENTS OF 2D ARRAY TO 1D ARRAY
        for (int i=0;i< matrix.size();i++)
        {
            for(int j=0;j < matrix[i].size();j++)
            {
                temp=matrix[i][j];
                tempvec.push_back(temp);
    
            }
        }
        
        int s=0;
        int e=tempvec.size()-1;
        int mid;
		
	// HERE I HAVE USED THE SIMPLE BINARY SEARCH ON 1D ARRAY
        while(s<=e)
        {
            mid=(s+e)/2;
            
            if(tempvec[mid]==target)
            {
                return true;
            }
            
            else if(tempvec[mid]<target)
            {
                s=mid+1;
                
            }
            else
            {
                e=mid-1;
            }
        }
        
        
        return false;
    }
};