/**Given an array of integers, 
*find two numbers such that they add up to a specific target number.

*The function twoSum should return indices of the two numbers 
*such that they add up to the target, where index1 must be less than index2. 
*Please note that your returned answers (both index1 and index2) are not zero-based.

*You may assume that each input would have exactly one solution.

*Input: numbers={2, 7, 11, 15}, target=9
*Output: index1=1, index2=2**/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mapping;  
        vector<int> result;  
        
        for(int i =0; i< nums.size(); i++)  
        mapping.insert(mapping.end(),std::pair<int,int>(nums[i],i));  
        
        for(int i =0; i< nums.size(); i++){  
            int searched = target - nums[i];  
            if((mapping.find(searched) != mapping.end()) && (mapping.at(searched)!=i))  {
                if(mapping[searched]>i){
                    result.push_back(i+1);  
                    result.push_back(mapping[searched]+1); 
                }else{
                    result.push_back(mapping[searched]+1);  
                    result.push_back(i+1); 
                }
                break;  
            }  
        }  
        return result; 
    }
};
