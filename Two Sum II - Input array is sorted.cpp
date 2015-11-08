/**Given an array of integers that is already sorted in ascending order, 
*find two numbers such that they add up to a specific target number.

*The function twoSum should return indices of the two numbers 
*such that they add up to the target, where index1 must be less than index2. 
*Please note that your returned answers (both index1 and index2) are not zero-based.

*You may assume that each input would have exactly one solution.

*Input: numbers={2, 7, 11, 15}, target=9
*Output: index1=1, index2=2**/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //  if(numbers.empty()) return {};
        //  for(int i=0; i<numbers.size()-1; i++) {
        //     int start=i+1, end=numbers.size()-1, gap=target-numbers[i];
        //     while(start <= end) {
        //         int m = start+(end-start)/2;
        //         if(numbers[m] == gap) return {i+1,m+1};
        //         else if(numbers[m] > gap) end=m-1;
        //         else start=m+1;
        //     }
        //  }
        
        vector<int> retVal;
        for (size_t i = 0; i < numbers.size() && retVal.empty(); i++) {
            int tempt = target - numbers[i];
    
            auto itr = lower_bound(numbers.begin()+i+1, numbers.end(), tempt);
            
            if (itr != numbers.end() && *itr == tempt) {
                retVal.push_back(i + 1);
                retVal.push_back((itr - numbers.begin()) + 1);
            }
        }
        return retVal;
    }
};
