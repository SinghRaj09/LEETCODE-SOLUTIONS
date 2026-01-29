class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1;

        sort(nums.begin(), nums.end());

        while(low<=high){
            int mid = (high+low)/2;
            if(nums[mid]==target) return true;
            else if(nums[mid]<target) low = mid+1;
            else high = mid-1;
        }
        return false;
    }
};