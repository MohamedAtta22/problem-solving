class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size() - 1;
        int res = 0;
        int maxRes = 0;
    
        while(left < right){
            res = min(heights[left], heights[right]) * (right - left);
            maxRes = max(res, maxRes);
            if(heights[left] <= heights[right] ){
                left++;
            }
            else right--;
        }
        return maxRes;
    }
};
