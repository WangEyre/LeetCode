/**Given an array S of n integers, 
*are there elements a, b, c, and d in S such that a + b + c + d = target? 
*Find all unique quadruplets in the array which gives the sum of target.

*Note:
*Elements in a quadruplet (a,b,c,d) must be in non-descending order. (ie, a ≤ b ≤ c ≤ d)
*The solution set must not contain duplicate quadruplets.
*For example, given array S = {1 0 -1 0 -2 2}, and target = 0.
*A solution set is:
*(-1,  0, 0, 1)
*(-2, -1, 1, 2)
*(-2,  0, 0, 2)**/
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> allSol;
        vector<int> sol;
        sort(nums.begin(),nums.end());
        kSum(nums, 0, nums.size()-1, target, 4, sol, allSol);
        return allSol;
    }
    void kSum(vector<int> &num, int start, int end, int target, int k, 
              vector<int> &sol, vector<vector<int>> &allSol) {
        if(k<=0) return;
        if(k==1) {
            for(int i=start; i<=end; i++) {
                if(num[i]==target) {
                    sol.push_back(target);
                    allSol.push_back(sol);
                    sol.pop_back();
                    return;
                }
            }
        } 
        
        if(k==2) {
            twoSum(num, start, end, target, sol, allSol);
            return;
        }
    
        for(int i=start; i<=end-k+1; i++) {
            if(i>start && num[i]==num[i-1]) continue;
            sol.push_back(num[i]);
            kSum(num, i+1, end, target-num[i], k-1, sol, allSol);
            sol.pop_back();
        }
    }
    void twoSum(vector<int> &num, int start, int end, int target, 
                vector<int> &sol, vector<vector<int>> &allSol) {
        while(start<end) {
            int sum = num[start]+num[end];
            if(sum==target) {
                sol.push_back(num[start]);
                sol.push_back(num[end]);
                allSol.push_back(sol);
                sol.pop_back();
                sol.pop_back();
                start++;
                end--;
                while(num[start]==num[start-1]) start++;
                while(num[end]==num[end+1]) end--;
            }
            else if(sum<target)
                start++;
            else
                end--;
        }
    }
};
