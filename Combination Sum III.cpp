/**Find all possible combinations of k numbers that add up to a number n, 
*given that only numbers from 1 to 9 can be used and each combination should be a unique set of numbers.

*Ensure that numbers within the set are sorted in ascending order.

*Example 1:
*Input: k = 3, n = 7
*Output:
*[[1,2,4]]

*Example 2:
*Input: k = 3, n = 9
*Output:
*[[1,2,6], [1,3,5], [2,3,4]]**/
class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> path;
        backtrack(result, path, 1, k, n);
        return result;
    }
    void backtrack(vector<vector<int>> &result, vector<int> &path, 
                   int start, int k, int target){
        if(target==0 && k==0){
            result.push_back(path);
            return;
        }
        for(int i=start;i<=10-k&&i<=target;i++){
            path.push_back(i);
            backtrack(result,path,i+1,k-1,target-i);
            path.pop_back();
        }
    }
};
