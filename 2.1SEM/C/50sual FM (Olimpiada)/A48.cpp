#include<stdio.h>
int main(){
	int n;
	bool test=false;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	if(i*i == n){
		test = true;
		break;
	}
	if(test)printf("yes");
	else printf("no");
	
return 0;
}

//ededin hansisa natural ededin kvadrati olub-olmadigini mueyyen eden program
