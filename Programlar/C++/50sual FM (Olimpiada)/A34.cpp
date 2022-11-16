#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
float x,y,z;
cin>>x>>y>>z;
	if(z>=x and y>=x){
	cout<<fixed<<setprecision(2)<<x*2<<" "<<y*2<<" "<<z*2;	
	}else{
		cout<<fixed<<setprecision(2)<<sqrt(x*x)<<" "<<sqrt(y*y)<<" "<<sqrt(z*z);
	}
return 0;
}

//x y z ededleri verilir. z>=y>=x olarsa ededleri ikiqat artirin, eks halda mutleq qiymetleri ile evezleyin
