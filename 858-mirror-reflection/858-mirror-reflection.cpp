class Solution {
public:
    int mirrorReflection(int p, int q) {
        int height=q;
        int bounce=1;
        int cnt=0;
        int newH=0;
        while(height!=0 && height!=p){
            cnt++;
           newH= height+q*bounce;
            if(height>p){
                newH=p-(q-(p-height));
                bounce=-bounce;
            }
           if(height<0){
                newH=q-height;
                bounce=-bounce;
            }
            height=newH;
        }
        if(height==0){
            return 0;
        }
        if(cnt%2==0){
            return 1;
        }
        else{
            return 2;
        }
        
    }
};
