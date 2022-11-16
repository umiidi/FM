#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n,kubcem;
cin>>n;
kubcem = pow(n%10,3) + pow(n/10%10,3) + pow(n/100,3);
if(kubcem == n) cout<<"yes";
else cout<<"no";
return 0;
}

//3reqemli ededin Armstronq olub olmadigini teyin edir
