/***************************************

Description: Depth First Search for graph (using stack)

***************************************/

#include <bits/stdc++.h>

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
    
    stack <int> st;
    bool visited[N] = {false};
    
    st.push(source);
    visited[source] = true;
    
    while(!st.empty()) {
        cout<<st.top()+1<<" ";
        int node = st.top();
        st.pop();
        for(int i=0; i<N; i++) {
            if(!visited[i] && adj[node][i] == 1) {
                st.push(i);
                visited[i] = true;
            }
        }
                
        
    }
    
    return 0;
}