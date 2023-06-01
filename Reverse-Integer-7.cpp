class Solution {
public:
    int reverse(int x) {
        bool negative= false;
        if (x == INT_MIN) {
            return 0; 
        }
        if (x<0){
           negative=true;
           x=-x;
        }
        cout<<x;
        long long int res=0 ;
        while(x>0){
           res = res*10 + x%10;
           x=x/10;
        }
         if (res >INT_MAX) {
            return 0;
        }
        
        if(negative){
            return -res;
        }else
        {
            return res;
        }
    }
};

//You must look for the INT_MIN & INT_MAX to get it accepted
