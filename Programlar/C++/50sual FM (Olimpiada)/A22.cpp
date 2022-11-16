#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
bool test=true;
while(n>=10){
	if(!(n%10 > n/10%10)){
		test=false;
		break;
	}
	n=n/10;
}
if(test) cout<<"yes";
else cout<<"no";

return 0;
}

//5reqemli ededin artan sira ile duzulmesini yoxlayir
