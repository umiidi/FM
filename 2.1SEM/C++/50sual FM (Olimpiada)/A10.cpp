#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int cem= n%10 + n/10%10 + n/100;
int hasil = (n%10) * (n/10%10) * (n/100);
cout<<cem<<" "<<hasil;
return 0;
}

//3reqemli ededin cem ve hasilini tapir
