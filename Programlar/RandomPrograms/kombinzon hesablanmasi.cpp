#include<iostream>
using namespace std;
int faktorial(int x){
	int p=1;
	for(int i=1;i<=x;i++) p=p*i;
	return p;
}
int main(){
	int n,m;
	cout<<"n,m daxil edin \n";
	cin>>n>>m;
	cout<<endl<<"Cavab:"<<faktorial(n)/faktorial(m);
return 0;
}

//Kombinzonun  hesablanmasý programý
