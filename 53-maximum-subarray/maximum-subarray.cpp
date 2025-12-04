class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int lar = INT_MIN;
        int sum = 0;

        for(int i=0; i<nums.size(); i++){
            sum = sum + nums[i];
            if(sum > lar) lar = sum;
            if(sum<0) sum=0;
        }

        return lar;
        
    }
};