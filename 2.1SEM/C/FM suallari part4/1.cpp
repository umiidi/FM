#include<stdio.h>
using namespace std;
int main(){
	int numbers[10]={0};
	int n,count=0;
	scanf("%d",&n);
	while(n){
		(numbers[n%10])++;
		n/=10;
	}
	for(int i=0; i<10; i++){
		if(numbers[i]!=0)count++;
	}
	printf("%d",count);
	return 0;
}

//ededde muxtelif reqemlerin sayini tapan program
