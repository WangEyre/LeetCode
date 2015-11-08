/**Given an array S of n integers, 
*find three integers in S such that 
*the sum is closest to a given number, target. 
*Return the sum of the three integers. 
*You may assume that each input would have exactly one solution.
*For example, given array S = {-1 2 1 -4}, and target = 1.
*The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).**/
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int len=nums.size();
        if(len<3) return 0;
        
        sort(nums.begin(),nums.end());
        
        int minV = INT_MAX, record;  
        for(int i =0; i< len; i++){        
            int start = i+1, end =len-1;             
            while(start<end){  
                int sum = nums[i] + nums[start] + nums[end];  
                if(sum == target){   
                    minV = 0;  
                    record = sum;  
                    break;  
                }  
                if(sum < target){  
                    if(target-sum < minV){  
                        minV = target-sum;  
                        record = sum;  
                    }  
                    start++;            
                }else{  
                    if(sum-target < minV){  
                        minV = sum - target;  
                        record = sum;  
                    }  
                    end--;  
                }  
            }        
            while(i<len-1 && nums[i] == nums[i+1]) i++;
        }  
        return record;
    }
};
