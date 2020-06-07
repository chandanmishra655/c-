#include <bits/stdc++.h>

using namespace std;

int main(){

    int n=6,e=5;
    vector<int> adj_list[n];
    /* {0,1},{0,2},{0,3},{2,4},{4,1} */

    pair<int,int> edges[] = {{0,1},{0,2},{0,3},{2,4},{4,1}};

    for(int i=0;i<e;i++){
        int st = edges[i].first;
        int en = edges[i].second;

        adj_list[st].push_back(en);
        adj_list[en].push_back(st);
    }

    
    // for printing the adjacency list
   for(int i=0;i<n;i++){
       cout<<"Edges connected to "<<i<<" vertex are"<<endl;
       for(int j=0;j<adj_list[i].size();j++){
           cout<<adj_list[i][j];
       }
       cout<<endl;

   }
    return 0;
}