#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
n = n%10 + n/100 *10 + n/10%10 *100;
cout<<n;
return 0;
}

//3reqemli ededin yuzluk ve onluqlarinin yerini deyisin.
