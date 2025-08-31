class Solution {
public:
	vector<int> singleNumber(vector<int>& nums) {
		unordered_map<int,int> mpp;

		for(int i=0; i<nums.size(); i++) {
			mpp[nums[i]]++;
		}

		vector<int>res;
		for(auto a:mpp) {
			if(a.second==1) res.push_back(a.first);
		}
		return res;
	}
};