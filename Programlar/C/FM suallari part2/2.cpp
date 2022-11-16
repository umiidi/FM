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
int count;
printf("how many prime numbers to print? ");
scanf("%d",&n);
count=0;
if(n>0){
	for(int i=2;;i++){
   	if(testPrimeNumber(i)){
   		count++;
		if(count==n) {
			printf("%d.prime number: %d",n,i);
        }
	}}}
else printf("enter the correct numbers");
}
//nci sade ededi chap edir
