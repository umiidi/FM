#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int cem=0,countr=0,max,min,hasil=1,cemc=0,countc=0,cemt=0,countt=0,cems=0,counts=0;
	max=0;
	min=n%10;
	while(n){
		cem+=n%10;
		countr++;
		if(max<n%10) max = n%10;
		if(min>n%10) min = n%10;
		hasil*=n%10;
		if(n%10 % 2 == 0){
			cemc+=n%10;
			countc++;
		}
		if(n%10 % 2 != 0){
			cemt+=n%10;
			countt++;
		}
		if(n%10 == 2 or n%10 == 3 or n%10 == 5 or n%10 == 7){
			cems+=n%10;
			counts++;
		}
		n/=10;
	}
	
	printf("\nreqemleri cemi:  %d",cem);
	printf("\nreqemleri sayi: %d",countr);
	printf("\nmaksimal reqem: %d",max);
	printf("\nminimal reqem: %d",min);
	printf("\nreqemleri hasili: %d",hasil);
	printf("\ncut reqemleri cemi: %d",cemc);
	printf("\ncut reqemleri sayi: %d",countc);
	printf("\ntek reqemleri cemi: %d",cemt);
	printf("\ntek reqemleri sayi: %d",countt);
	printf("\nsade reqemleri cemi: %d",cems);
	printf("\nsade reqemleri sayi: %d",counts);
	return 0;
}

/* 
reqemlerin cemi, hasili ve sayi
maksimum ve minimum reqem
cut reqemlerin cemi ve sayi
tek reqemlerin cemi ve sayi
sade ededlerin cemi sayi
*/
