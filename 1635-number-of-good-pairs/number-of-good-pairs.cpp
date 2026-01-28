class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // int count = 0;

        // for(int i=0; i<nums.size(); i++){
        //     for(int j=0; j<nums.size(); j++){
        //         if(nums[i]==nums[j] && i<j){
        //             count++;
        //         }
        //     }
        // }
        // return count;
        
        unordered_map<int, int> pairs;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (pairs.find(nums[i]) != pairs.end()) {
                count += pairs[nums[i]];
            }
            pairs[nums[i]] = pairs[nums[i]] + 1;
        }

        return count; 
    }
};