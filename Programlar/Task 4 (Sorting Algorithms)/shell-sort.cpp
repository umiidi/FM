#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];

    //Input
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int passes = log2(n);
    while(passes > 0){
        int h = pow(2, passes-1);
        for(int i=h; i<n; i++){
            int key = arr[i];
            int j = i;
            while(arr[j-h] > key && j>=h){
                arr[j] = arr[j-h];
                j-=h;
            }
            arr[j] = key;
        }
        passes--;
    }

    //Output
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
