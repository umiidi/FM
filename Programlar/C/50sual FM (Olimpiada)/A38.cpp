#include<stdio.h>
#include<iomanip>
int main(){
float x,y,eorta,hasil;
scanf("%f %f",&x,&y);
eorta = (x+y)/2;
hasil = 2*x*y;
if(x>y){
	y = eorta;
	x = hasil;
}else {
	x = eorta;
	y = hasil;
}
printf("%0.2f %0.2f ",x,y);
return 0;
}

//x ve y ededlerinin ededi ortasini tapir kicik edede menimsedir, ikiqat hasili ise boyuk edede menimsedir
