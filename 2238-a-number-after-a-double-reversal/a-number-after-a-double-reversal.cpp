class Solution {
public:
    bool isSameAfterReversals(int num) {
        
        int original = num;
        int rev = 0;
        int rev1 = 0;

        while(num!=0){

            int dig = num % 10;
            rev = rev * 10 + dig;

            num = num/10;
        }

        while(rev!=0){

            int dig = rev % 10;
            rev1 = rev1 * 10 + dig;

            rev = rev/10;
        }

        return original == rev1;
    }
};