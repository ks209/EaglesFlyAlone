class Solution {
public:
    int reverse(int x) {
            long long int k=1;
            if(x>=2147483648  || x<=(-2147483648)){
                    return 0;
            }
            if(x<0){
                x*=(-1);
                k=(-1);
                }
            long long int ans=0;
            long int a;
            while(x>0){
                a=x%10;
                ans=ans*10+a;
                x=x/10;
            }
            
            if(ans>=2147483648  || ans<=(-2147483648)){
                    return 0;
            }else if(k==-1){
                    return ans*k;
            }else
                    return ans;
        
    }
};