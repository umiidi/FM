#include <iostream>
using namespace std;
int main(){
 int m, n;
 cout<<"m= ";
 cin>>m;
 cout<<"n = ";
 cin>>n;
 
 for(int s= 1; s<= m*n; s++){
 if(s% m== 0 && s% n == 0){
 cout<<"EKOB= "<<s<<endl;
 break;
 }
 }
 
 int r;
 if(m > n) r = m;
 if(n > m) r = n;
 for(; r > 0; r--){
 if(m % r == 0 && n % r == 0){
 cout<<"EBOB= "<<r;
 break;
 }
 
}
 return 0;
}

//ekob ve ebob hesablayan program
