class Solution {
public:
    bool isHappy(int n) {
        for(int i=0; i<n; i++){
            int sum=0;
            while(n>0){
                int dig=n%10;
                sum += dig*dig;
                n/=10;
            }
            if(sum == 1) return true;
            n = sum;
        }
        return false;
    }
};