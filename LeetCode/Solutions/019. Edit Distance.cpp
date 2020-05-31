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