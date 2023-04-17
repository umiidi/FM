#include<iostream>
bool tester(int n){
	int x[10]={0};
	while(n>0){
	x[n%10]++;
	n/=10;
}
for(int i=0; i<10;i++){
	if(x[i] == 3){
return true;
	    break;
	}
}
return false;
}
using namespace std;
int main(){
int n;
cin>>n;
if(tester(n)) cout<<"yes";
else cout<<"no";
return 0;
}

//4reqemli tam eded verilib. ededde 3eyni reqem olub olmadini yoxlayan program
