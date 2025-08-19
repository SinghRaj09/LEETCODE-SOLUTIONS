class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

// Brute-Force Solution
        unordered_map<int,int> res;
        vector<int>res1;

        for(int i=0; i<nums.size(); i++){
            res[nums[i]]++;
        }
        for(auto a : res){
            if(a.second >nums.size()/3 ) res1.push_back(a.first);
        }
        return res1;



// Better Solution
        vector<int> res;
        unordered_map<int,int> mpp;
        int min= (nums.size()/3) + 1;

        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;

            if(mpp[nums[i]]==min){
                res.push_back(nums[i]);
            }
        }   
        return res;
    }
};