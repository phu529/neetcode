class Solution {
public:
    int mySqrt(int x) {
        if(x==0)return 0;
        int l=1,r=x/2+1;
        int res=0;
        while(l<=r){
            int mid = l + (r - l) / 2;
            if(mid==x/mid){
                return mid;
            }
            if(mid<x/mid){
                l=mid+1;
                res=mid;
            }
            else{
                r=mid-1;
            }
        }
        return res;
    }
};