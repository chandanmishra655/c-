#include <bits/stdc++.h>

using namespace std;

// number of nodes and edges



int main(){
    int n = 6;
    int e = 5;

    int adj_matrix[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            adj_matrix[i][j] = 0;
        }
    }

    /* {0,1},{0,2},{0,3},{2,4},{1,4} */ 

    pair<int,int> edge[] = {{0,1},{0,2},{0,3},{2,4},{1,4}};

    for(int i=0;i<e;i++){
        int st = edge[i].first;
        int en = edge[i].second;
        adj_matrix[st][en] = adj_matrix[en][st] = 1;
    }

    // matrix output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adj_matrix[i][j];
        }
        cout<<endl
    }




    return 0;
}