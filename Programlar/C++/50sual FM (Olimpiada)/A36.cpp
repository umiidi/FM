#include<iostream>
#include<iomanip>
using namespace std;
int main(){
float a,b;
cin>>a>>b;
if(a<=b) a=0;
cout<<fixed<<setprecision(2)<<a<<" "<<b;
return 0;
}

//iki heqiqi eded verilib, birinci eded kicikdirse onu 0-la evezleyin. eks halda hecne etmeyin
