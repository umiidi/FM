#include<iostream>
using namespace std;
int search(int arr[], int size, int key){
    int index, i = 0,j = size-1;
    while(i <= j){
        index = i + (j-i)/2;
        if(arr[index] == key) return index;
        else if(arr[index] < key) i = index + 1;
        else j = index - 1;
    }
    return -1;
}
int main(){
    int n=7, key;
    cin>>n;
    int arr[n];
    //Input
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Key: ";
    cin>>key;

    int index = search(arr, n, key);
    if(index!=-1) cout<<"index: "<<++index;
    else cout<<"Not in array";
}
