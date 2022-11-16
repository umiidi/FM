#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
float x,y;
cin>>x>>y;
	if(x<0 and y<0){
		x= sqrt(x*x);
		y=sqrt(y*y);
		cout<<fixed<<setprecision(2)<<x<<" "<<y;
    }else if(x<0 or y<0){
    	x+=0.5;
    	y+=0.5;
    	cout<<fixed<<setprecision(2)<<x<<" "<<y;
	}
	else {
		if(!((x>=0.5 and x<=2) or (x>=0.5 and x<=2))){
			x/=10;
			y/=10;    	
			cout<<fixed<<setprecision(2)<<x<<" "<<y;
		}
		else cout<<fixed<<setprecision(2)<<x<<" "<<y;
	}
return 0;
}

//x ve y heqiqi ededleri verilib, 
//eger her iki eded menfidirse onlarin qiymetlerini oz modullari ile evezleyir, 
//onlardan biri menfidirse her iki qiymeti 0.5 artirir,
//her ikisi musbetdirse ve eded {0.5 - 2.0} araligindadirsa her iki ededi 10 defe azaldir. diger hallarda deyisiklik olmur
