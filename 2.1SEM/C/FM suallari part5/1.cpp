#include<stdio.h>
int main(){
int n,m,i,j,c;
printf("size of chessboard: \n");
scanf("%d%d",&n,&m);
printf("coordinate: \n");
scanf("%d%d",&n,&m);
printf("black(1) or white(0) ? \n");
scanf("%d",&c);
int first= c==0?1:0;
if((i-1)%2 == (j-1)%2)first=c;
if(m%2==0) printf("equals");
else if(n%2==0) printf("equals");
else {
	if(first==1)printf("black");
	else printf("white");
}
return 0;
}

//sahmat meselesi. hansisa xanaya teyin edilmis renge gore qurulmus sahmat taxtasinda hansi rengli xana daha coxdur?
