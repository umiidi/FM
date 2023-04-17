#include<stdio.h>
#include<iomanip>
int main(){
float a,b;
scanf("%f %f",&a,&b);
if(a<=b) a=0;
printf("%0.2f %0.2f",a,b);
return 0;
}

//iki heqiqi eded verilib, birinci eded kicikdirse onu 0-la evezleyin. eks halda hecne etmeyin
