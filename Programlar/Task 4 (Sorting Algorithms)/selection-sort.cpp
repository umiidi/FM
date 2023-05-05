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

    for(int i=0; i<n-1; i++){
        int max = arr[0];
        int index = 0;

        for(int j=0; j< n-i-1; j++){
            if(arr[j]>max){
                max = arr[j];
                index = j;
            }
        }

        int temp = arr[n-i-1];
        arr[n-i-1] = max;
        arr[index] = temp;
    }

    //Output
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
