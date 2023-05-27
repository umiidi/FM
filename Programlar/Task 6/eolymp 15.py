#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin>>n>>m;
    int A[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>A[i][j];
        }
    }

    for(int i = n-2; i >=0; i--){
        A[i][0] = A[i+1][0] + A[i][0];
    }
    for(int j = 1; j < m; j++){
        A[n-1][j] = A[n-1][j-1] + A[n-1][j];
    }

    for(int i=n-2; i>=0; i--){
        for(int j=1; j<m; j++){
            A[i][j] = max(A[i][j-1], A[i+1][j]) + A[i][j];
        }
    }
    int i=0,j=m-1;
    string result;
    while(true){
        if(i == n-1 && j == 0)break;
        else if(i == n-1){
            result = "R" + result;
            j--;
        }else if(j == 0){
            result = "F" + result;
            i++;
        }else if(A[i+1][j] > A[i][j-1]) {
            result = "F" + result;
            i++;
        }else{
            result = "R" + result;
            j--;
        }
    }
    cout<<result;
    return 0;
}