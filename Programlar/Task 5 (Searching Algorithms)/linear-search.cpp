#include<iostream>
using namespace std;
int search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key) {
            return i;
            break;
        }
    }
    return -1;
}
int main(){
    int n, key;
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
