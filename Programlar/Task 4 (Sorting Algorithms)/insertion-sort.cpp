#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];

    //Input
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i;
        while(arr[j-1]>key && j>0){
            arr[j] = arr[j-1];
            j = j-1;
        }
        arr[j] = key;
        cout<<endl;
    }

    //Output
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
