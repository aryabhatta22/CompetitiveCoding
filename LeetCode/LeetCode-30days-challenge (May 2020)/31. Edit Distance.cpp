/***************************************
Description: Given two words word1 and word2, find the minimum number of operations required to convert word1 to word2.

You have the following 3 operations permitted on a word:

Insert a character
Delete a character
Replace a character
Example 1:

Input: word1 = "horse", word2 = "ros"
Output: 3
Explanation: 
horse -> rorse (replace 'h' with 'r')
rorse -> rose (remove 'r')
rose -> ros (remove 'e')
Example 2:

Input: word1 = "intention", word2 = "execution"
Output: 5
Explanation: 
intention -> inention (remove 't')
inention -> enention (replace 'i' with 'e')
enention -> exention (replace 'n' with 'x')
exention -> exection (replace 'n' with 'c')
exection -> execution (insert 'u')

***************************************/

class Solution {
    void printArr(vector<vector<int>>& arr) {
        for(int i =0; i< arr.size(); i++) {
            for(int j =0; j<arr[i].size(); j++) {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>> mat(word2.size()+1, vector<int>(word1.size()+1, 0));
        int costAdd, costDel, costTrans;
        
        for(int i=0; i<=word2.size(); i++) {
            for(int j =0; j<=word1.size(); j++) {
                costAdd = costDel = costTrans = 1;
                if(i == 0)
                    mat[i][j] = j;
                else if(j == 0)
                    mat[i][j] = i;
                else {
                    if(word2[i-1] == word1[j-1])
                        costTrans = 0;
                    mat[i][j] = min({ mat[i-1][j]+costAdd, mat[i][j-1]+costDel, mat[i-1][j-1]+costTrans});
                }
            }
        }
        
        // printArr(mat);
        return mat[word2.size()][word1.size()];
    }
};