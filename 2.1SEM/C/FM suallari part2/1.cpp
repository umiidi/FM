#include<stdio.h>
 bool testPrimeNumber(int n){
 	if(n==0 || n==1) return false;
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
 }
 int main(){
 	int n;
 while(true){
 	printf("ededi daxil edin: ");
 	scanf("%d",&n);
 	if(testPrimeNumber) printf("eded sadedir \n\n");
 	else printf("eded sade deyil \n\n");
 	 }	
 }
 
 //n ededinin sade olub olmadigini mueyyen edir
