#include<stdio.h>
#include<math.h>
int main(){
	int n,result;
	scanf("%d", &n);
	int temp = sqrt(n);
	result = 4 + (temp-1)*3*2  + (temp-1)*(temp-1)*2;
	int x = n-(temp*temp);
	if (x!=0){
		int a = x/(temp+1)+1;
		int b = x-a;
		result+=a*3 + b*2;
	}
	printf("%d", result);
	return 0;
}
