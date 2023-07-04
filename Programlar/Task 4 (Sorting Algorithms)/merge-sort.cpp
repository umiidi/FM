#include<iostream>
#include<cmath>
using namespace std;

int merge(int arr[], int p, int mid, int q){
    int len1 = mid - p + 1;
    int len2 = q - mid;
    int leftArr[len1], rightArr[len2];
    
    for(int i=0; i<len1; i++){
        leftArr[i] = arr[p+i];
    }
    
    for(int j=0; j<len2; j++){
        rightArr[j] = arr[mid+1+j];
    }
    int i, j, k;
    i = 0;
    j = 0;
    k = p;
    
    while(i < len1 && j < len2){
        if(leftArr[i] <= rightArr[j]){
            arr[k] = leftArr[i];
            i++;
        }else{
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while(i < len1){
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    while(j < len2){
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

int merge_sort(int arr[], int p, int q){
    if(p < q){
        int mid = p + (q-p)/2;
        merge_sort(arr, p, mid);
        merge_sort(arr, mid+1, q);
        merge(arr, p, mid, q);
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

    merge_sort(arr, 0, n-1);
    //Output
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
