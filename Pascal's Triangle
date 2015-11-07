/**Given numRows, generate the first numRows of Pascal's triangle.
*
*For example, given numRows = 5,
*Return
*
*[
*     [1],
*    [1,1],
*   [1,2,1],
*  [1,3,3,1],
* [1,4,6,4,1]
*]
**/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > res;
        
        if(numRows<=0)
        return res;
        
        vector<int> r;
        r.push_back(1);
        res.push_back(r);
        
        if(numRows==1)
        return res;
        
        r.push_back(1);
        res.push_back(r);
        
        if(numRows==2)
        return res;
        
        for(int i=3;i<=numRows;i++){
            r.clear();
            //compute each line
            for(int j=0;j<i;j++){
                if(j==0 || j==(i-1))
                r.push_back(1);
                else
                r.push_back(res[i-2][j-1]+res[i-2][j]);
            }
            res.push_back(r);
        }
        return res;
    }
};
