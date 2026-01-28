class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int res=0;
        int st=0, end= n-1;

        while(st<end){
            int width = end-st;
            int high = min(height[st], height[end]);
            int temp = high * width;
            res= max(res, temp);

            if(height[st] < height[end]){
                st++;
            } else end--;
        }
        return res;
    }
};