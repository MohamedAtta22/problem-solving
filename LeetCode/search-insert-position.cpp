class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // indexes
        int left=0, right=nums.size()-1, mid=-1;
        // binary search
        while(left <= right){
            mid=(left+right)/2;
            if(nums[mid]==target){
                //cout<<"found! "<<endl;
                return mid;
            }
            else if(nums[mid] > target){
                right = mid-1;
            }
            else{ // mid < target
                left = mid+1;
            }
        }
        if(target>nums[mid]){
            return mid+1;
        }
        else{ return mid;
        }
    }
};