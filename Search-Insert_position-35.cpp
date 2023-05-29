class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int h , l ,mid;
        h=nums.size();
        l=0;
        if(target>nums[h-1]){
            return h;
        }
        while(l<=h){
            mid=(h+l)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return l;
        }
};

//Simple Binary Search
