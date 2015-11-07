/**
*Given an array of integers and an integer k, 
*find out whether there are two distinct indices i and j in the array 
*such that nums[i] = nums[j] and the difference between i and j is at most k.
**/
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(nums.size()==0) return false;
        
        int len=nums.size();
        unordered_map<int,int> dup;
        
        for(int i=0;i<len;i++){
            if(dup.find(nums[i])!=dup.end()){
                //int index=dup.at(nums[i]);
                //int diff=abs(index-i);
                if(abs(dup.at(nums[i])-i)<=k)
                return true;
                else{
                    dup.erase(dup.find(nums[i]));
                    dup.insert(dup.end(),std::pair<int,int>(nums[i],i));
                }
            }else
                dup.insert(dup.end(),std::pair<int,int>(nums[i],i));
        }
        return false;
    }
};
