/**Given a list of words and two words word1 and word2, 
*return the shortest distance between these two words in the list.
*
*For example,
*Assume that words = ["practice", "makes", "perfect", "coding", "makes"].
*
*Given word1 = “coding”, word2 = “practice”, return 3.
*Given word1 = "makes", word2 = "coding", return 1.
*
*Note:
*You may assume that word1 does not equal to word2, and word1 and word2 are both in the list.**/
class Solution {
public:
    int shortestDistance(vector<string>& words, string word1, string word2) {
        int len=words.size();
        int dis=len+1;
        int start=0;
        int end=0;
        bool flag_s=false;
        bool flag_e=false;
        for(int i=0;i<len;i++){
            if(words[i]==word1) {
                start=i;
                flag_s=true;
            }else if(words[i]==word2){
                end=i;
                flag_e=true;
            }
            if(flag_s && flag_e) dis=min(dis,abs(start-end));
        }
        return dis;
    }
};
