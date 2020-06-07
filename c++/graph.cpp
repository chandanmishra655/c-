#include <bits/stdc++.h>

using namespace std;


int recur(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(n>1) return recur(n-2) + recur(n-1);
}

int main(){

    int num = recur(5);

    cout<<num<<endl;

    return 0;
}