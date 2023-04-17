#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;
int main(){
	string binarycode;
	cout<<"Binary kodu daxil edin: \n";
	cin>>binarycode;
int length=binarycode.size(), decimalcode=0;
for(int i=0;i<length;i++){
if(binarycode[i]=='1')
decimalcode+=pow(2,length-1-i);	
}
cout<<"Binary code: "<<binarycode<<endl;
cout<<"Decimal code: "<<decimalcode<<endl;

	return 0;
}

//Ikilik say sisteminde olan reqemleri 10-luq say sistemine keçirden program
