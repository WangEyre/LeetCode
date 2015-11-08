/**Suppose a sorted array is rotated at some pivot unknown to you beforehand.

*(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

*Find the minimum element.

*You may assume no duplicate exists in the array.**/
class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        
        int start=0;
        int end=nums.size()-1;
        int mid;
        
        while(start<end){
            mid=(end+start)/2;
            if(nums[mid]>nums[mid+1]) return nums[mid+1];
            else if(nums[mid]>=nums[start] && nums[mid]>=nums[end]) start=mid;
            else if(nums[mid]<nums[start] && nums[mid]<nums[end]) end=mid;
            else return nums[0];
        }
    }
};
