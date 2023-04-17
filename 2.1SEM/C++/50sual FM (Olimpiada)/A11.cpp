#include<iostream>
using namespace std;
int main(){
int n,result;
cin>>n;
result = n%10*100 + n/10%10 * 10 + n/100; 
cout<<result;
return 0;
}

//3reqemli ededin sagdan sola oxunmasi ile alinan ededi capa veren program
