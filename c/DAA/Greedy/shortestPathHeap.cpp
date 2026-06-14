#include <iostream>
#include <vector>
#include <climits>
#include <queue>
#define INF 1000
using namespace std;
void ShortestPaths(int v, vector<vector<int>>& cost, vector<int>& dist, int n){// v=0
    vector<bool> S(n,false); // vertex selected
    for(int i=0;i<n;i++){ // Initialise dist
        dist[i]=cost[v][i];
    }

    S[v]=true;
    dist[v]=0;

    priority_queue< pair<int,int> ,vector< pair<int,int> > ,greater< pair<int,int> > > pq;
    for(int i=0;i<n;i++){
        if(dist[i]!=0) pq.push({dist[i],i});
    }
    for(int i=1;i<n;i++){ // Relaxation

        int u=pq.top().second;
        pq.pop();

        S[u]=true;

        for(int w=0;w<n;w++){
            if(S[w]==false){
                if(dist[w]>(dist[u]+cost[u][w])) dist[w]=dist[u]+cost[u][w];
            }
        }
    }
}
int main(){
    int n,v;
    cout<<"Enter number of vertices : "<<endl;
    cin>>n;
    cout<<"Enter the source vertex : "<<endl;
    cin>>v;
    // vector<vector<int>> cost(n,vector<int>(n));
    // cout<<"Enter all entries of cost matrix : "<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>cost[i][j];
    //     }
    // }
    vector<vector<int>> cost = {
        {INF, 50,  45,  10,  INF, INF},
        {INF, INF, 10,  15,  INF, INF},
        {INF, INF, INF, INF, 30,  INF},
        {20,  INF, INF, INF, 15,  INF},
        {INF, 20,  35,  INF, INF, INF},
        {INF, INF, INF, INF, 3,   INF}
    };
    vector<int> dist(n);

    ShortestPaths(v,cost,dist,n);

    cout<<"Required shortest paths : "<<endl;
    for(int i=0;i<n;i++){
        if(dist[i]!=INF) cout<<dist[i]<<" ";
        else cout<<"INF"<<" ";
    }
}