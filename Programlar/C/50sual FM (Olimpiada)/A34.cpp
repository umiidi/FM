#include<stdio.h>
#include<math.h>
int main(){
float x,y,z;
scanf("%f%f%f",&x,&y,&z);
	if(z>=x and y>=x){
		printf("%0.2f %0.2f %0.2f", x*2 , y*2 , z*2);
	}else{
				printf("%0.2f %0.2f %0.2f", sqrt(x*x), sqrt(y*y) , sqrt(z*z));
	}
return 0;
}

//x y z ededleri verilir. z>=y>=x olarsa ededleri ikiqat artirin, eks halda mutleq qiymetleri ile evezleyin
