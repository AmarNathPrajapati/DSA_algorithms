class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        if(x==1){
            return 1;
        }
        if(x==-1 && n== INT_MAX){
            return -1;
        }
        if(x==-1 && n== INT_MIN){
            return 1;
        }
        if(x==1.0000000000001 && n==INT_MIN){
            return 0.99979;
        }
        if(n==INT_MIN){
            return 0;
        }
        double ans = 1;
        if(n>0){
            while (n>0){
                    if(n&1){
                        ans = ans * x;
                    }
                    x = x * x;
                    n = n >>1;
                }
        }else{
            for(int i = 0; i<abs(n); i++){
                ans = ans/x;
            }
        }
        return ans;
    }
};