class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
    vector<int>ans(deck.size(),-1);
        int count=deck.size();
        int n=deck.size();
        int flag=1;
        int j=0,i=0;
        
        while(j<n)
        {
            
            if(ans[i%n]==-1 and flag==1)
            {
                ans[i%n]=deck[j];
               
                j++;
                flag=0;
            }
           else if(ans[i%n]==-1 and flag==0)
            {
               flag=1;
            }
            i++;
            
            
            
            
        }
        return ans;
    }
};