#include<stdio.h>
bool test(int n){
	while(n>=10){
	int temp=n/10;
	while(temp){
		if(n%10 == temp%10){
			return true;
		}
		temp/=10;
	}
	n/=10;
}
return false;
}
int main(){
int n;
scanf("%d",&n);
if(test(n)) printf("YES");
else printf("NO");
	return 0;
}

//n reqemli ededde eyni reqemin olub olmadigini tapan program
