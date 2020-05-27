/***************************************
Description: Given a set of N people (numbered 1, 2, ..., N), we would like to split everyone into two groups of any size.

Each person may dislike some other people, and they should not go into the same group. 

Formally, if dislikes[i] = [a, b], it means it is not allowed to put the people numbered a and b into the same group.

Return true if and only if it is possible to split everyone into two groups in this way.

 

Example 1:

Input: N = 4, dislikes = [[1,2],[1,3],[2,4]]
Output: true
Explanation: group1 [1,4], group2 [2,3]
Example 2:

Input: N = 3, dislikes = [[1,2],[1,3],[2,3]]
Output: false

***************************************/

class Solution {
public:
    
    bool dfs(vector<vector<int>>& adjList, vector<int>& groups, int v, int grp ) {
        if(groups[v] == -1)
            groups[v] = grp;
        else
            return groups[v] == grp;
        
        for(int n: adjList[v]) {
            if(!dfs(adjList, groups, n, 1- grp))
                return false;
        }
        
        return true;
    }
    
    
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        vector<int> groups(N, -1);
        vector<vector<int>> adjList(N, vector<int>());
        
        for(vector<int> _pair: dislikes) {
            adjList[_pair[0] -1].push_back(_pair[1] -1);
            adjList[_pair[1] -1].push_back(_pair[0] -1);
        }
        
        for(int i=0; i< N; i++) {
            if(groups[i] == -1 && !dfs(adjList, groups, i, 0))
                return false;
        }
        
        return true;
    }
};