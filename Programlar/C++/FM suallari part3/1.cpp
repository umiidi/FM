#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
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
		}else{
			cemt+=n%10;
			countt++;
		}
		if(n%10 == 2 or n%10 == 3 or n%10 == 5 or n%10 == 7){
			cems+=n%10;
			counts++;
		}
		n/=10;
	}
	
	cout<<"\nreqemleri cemi: "<<cem;
	cout<<"\nreqemleri sayi: "<<countr;
	cout<<"\nmaksimal reqem: "<<max;
	cout<<"\nminimal reqem: "<<min;
	cout<<"\nreqemleri hasili: "<<hasil;
	cout<<"\ncut reqemleri cemi: "<<cemc;
	cout<<"\ncut reqemleri sayi: "<<countc;
	cout<<"\ntek reqemleri cemi: "<<cemt;
	cout<<"\ntek reqemleri sayi: "<<countt;
    cout<<"\nsade reqemleri cemi: "<<cems;
    cout<<"\nsade reqemleri sayi: "<<counts;
	
	return 0;
}

/* 
reqemlerin cemi, hasili ve sayi
maksimum ve minimum reqem
cut reqemlerin cemi ve sayi
tek reqemlerin cemi ve sayi
sade ededlerin cemi sayi
*/
