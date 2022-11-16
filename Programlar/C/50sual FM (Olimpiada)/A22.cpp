#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
bool test=true;
while(n>=10){
	if(!(n%10 > n/10%10)){
		test=false;
		break;
	}
	n=n/10;
}
if(test) printf("yes");
else printf("no");

return 0;
}

//5reqemli ededin artan sira ile duzulmesini yoxlayir
