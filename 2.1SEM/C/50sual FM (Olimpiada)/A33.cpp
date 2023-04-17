#include<stdio.h>
int main(){
int x,y,z;
scanf("%d %d %d",&x,&y,&z);
if(x<=y and x<=z ) printf("%d",x);
else if(y<=x and y<=z) printf("%d",y);
else printf("%d",z);
return 0;
}

//x y z ededleri verilir, kiciyini tapir
