#include<stdio.h>
#include<math.h>
#include<iomanip>
int main(){
float x,y;
scanf("%f%f",&x,&y);
	if(x<0 and y<0){
		x= sqrt(x*x);
		y=sqrt(y*y);
    }else if(x<0 or y<0){
    	x+=0.5;
    	y+=0.5;
	}
	else {
		if(!((x>=0.5 and x<=2) or (x>=0.5 and x<=2))){
			x/=10;
			y/=10;
		}
	}
	printf("%0.2f %0.2f",x,y);
return 0;
}

//x ve y heqiqi ededleri verilib, 
//eger her iki eded menfidirse onlarin qiymetlerini oz modullari ile evezleyir, 
//onlardan biri menfidirse her iki qiymeti 0.5 artirir,
//her ikisi musbetdirse ve eded {0.5 - 2.0} araligina daxil DEYILSE her iki ededi 10 defe azaldir. diger hallarda deyisiklik olmur
