#include<stdio.h>
int main(){
int X,Y;
scanf("%d",&X);
scanf("%d",&Y);
if(X>Y){
	printf("%d %d",X,Y);
}
else {
Y=X+Y;
X=Y-X;
Y=Y-X;
	printf("%d %d",X,Y);
}
return 0;
}


//X ve Y yerlerini X en boyuyu Y en kiciyi olmaqla deyismek
