#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=5,e=6;

    int adj_matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            adj_matrix[i][j]=0;
        }
    }
    /*
        {0,1},{0,3},{1,3},{1,2},{2,4},{3,4}
    */ 
    pair<int,int> edge[] = {{0,1},{0,3},{1,3},{1,2},{2,4},{3,4}};
    for(int i=0;i<e;i++){
        int st = edge[i].first;
        int en = edge[i].second;
        adj_matrix[st][en] = adj_matrix[en][st] = 1;
    }

    // printing of matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adj_matrix[i][j];
        }
        cout<<endl;
    }
    return 0;
}