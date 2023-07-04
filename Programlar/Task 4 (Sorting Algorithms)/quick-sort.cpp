#include<iostream>
using namespace std;

int partition(int arr[], int sol, int sag){
    int pivot = arr[sag];
    int i = sol;
    for(int j = sol; j< sag; j++){
        if(arr[j] <= pivot){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }
    int temp = arr[i];
    arr[i] = arr[sag];
    arr[sag] = temp;
    return i;
}

void quicksort(int arr[], int sol, int sag){
    if(sol < sag){
        int p = partition(arr, sol, sag);
        quicksort(arr, sol, p-1);
        quicksort(arr, p+1, sag);
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];

    //Input
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    quicksort(arr, 0, n);
  

    //Output
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}