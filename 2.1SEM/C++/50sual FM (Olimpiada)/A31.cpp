#include<iostream>
using namespace std;
int main(){
int n,temp;
bool test= true;
cin>>n;
temp = n;
while(temp>0){
	if(n%(temp%10) !=0){
		test = false;
		break;
	}
	temp/=10;
}
if(test) cout<<"yes";
else cout<<"no";
return 0;
}

//4reqemleri ededin oz reqemlerine bolunub bolunmediyini tapin
