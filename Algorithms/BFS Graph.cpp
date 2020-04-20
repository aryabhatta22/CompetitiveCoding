/***************************************

Description: Breadth First Search for graph (using queue)


***************************************/

#include <bits/stdc++. h>

using namespace std;

const int N = 6;

int main() {
    
    int source = 0;
    
    int adj[N][N] = {
        {0,1,1,0,0,0},
        {1,0,0,1,0,0},
        {1,0,0,1,1,0},
        {0,1,1,0,0,1},
        {0,0,1,0,0,1},
        {0,0,0,1,1,0}
    };
    
    queue <int> q;
    bool visited[N] = {false};
    
    q.push(source);
    visited[source] = true;
    
    while(!q.empty()) {
        cout<<q.front()<<" ";
        int node = q.front();
        for(int i=0; i<N; i++) {
            if(!visited[i] && adj[node][i] == 1) {
                q.push(i);
                visited[i] = true;
            }
        }
                q.pop();
        
    }
    
    return 0;
}