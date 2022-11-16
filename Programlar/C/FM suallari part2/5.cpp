#include<stdio.h>
int main(){
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	
	if(n>0){
		bool primeNumber[n+1];
	for(int i=2;i<n+1;i++){
		primeNumber[i] = true;
	}

	for(int i=2;i*i<n+1;i++){
		if(primeNumber[i] == true)
			for(int j=i*i;j<n+1;j+=i)
			    primeNumber[j] = false;
		
	}

	for(int i=2;i<n+1;i++){
		if(primeNumber[i] == true) printf("%d ",i);
	}

	}
	else printf("enter the correct numbers");
	
}

//erotosfen xelbiri
