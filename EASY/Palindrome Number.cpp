class Solution {
public:
	bool isPalindrome(int x) {
		if(x<0)return false;

		int v = x;
		long result = 0;
		while(v>0) {
			result = result*10 + (v%10);

			v = v/10;
		}
		cout<<result;

		if(x == result) return true;
		else return false;


	}
};