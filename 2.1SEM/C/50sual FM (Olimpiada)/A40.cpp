#include<stdio.h>
#include<iomanip>
int main(){
float x,y;
scanf("%f %f",&x,&y);
if(x<0){
	if(x>y) printf("%0.2f",x);
	else printf("%0.2f",y);
}
else{
	if(x<y) printf("%0.2f",x);
	else printf("%0.2f",y);
}
return 0;
}

///x ve y ededleri verilir, x menfidirse onlardan boyuyunu capa verir eks halda kiciyini capa verir
