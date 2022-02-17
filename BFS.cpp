#include "bits/stdc++.h"
using namespace std;

const int N=1e5+2;
bool vis[N]; // visited array
vector<int> adj[N]; // adjacency list

int main(){

//initialising visited array
    for(int i=0;i<N;i++){
        vis[i]=0;
    }
// taking input of number of nodes and edges
    int n,m;
    cin>>n>>m;

    int x,y; 
// taking input of all the edges
    for(int i=0;i<m;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

// implementing the queue data structure for BFS
    queue<int> q;
// let's say first edge contain 1
    q.push(1);
    vis[1]=true;

    int count = 1 ;

    while (!q.empty())
    {
        int node=q.front();
        q.pop();
        cout<<node<<endl;
        cout<<count++<<" node is visited"<<endl;

// defining iterator to visit the list
        vector<int> :: iterator it;
        for(it=adj[node].begin();it!=adj[node].end();it++){
// if the node is  not visited push it in the queue            
            if(!vis[*it]){
                vis[*it]=1;
                q.push(*it);
            }
        }
    }
    

    return 0;
}