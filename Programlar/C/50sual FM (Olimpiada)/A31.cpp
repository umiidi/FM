#include<stdio.h>
int main(){
int n,temp;
bool test= true;
scanf("%d",&n);
temp = n;
while(temp>0){
	if(n%(temp%10) !=0){
		test = false;
		break;
	}
	temp/=10;
}
if(test) printf("yes");
else printf("no");
return 0;
}

//4reqemleri ededin oz reqemlerine bolunub bolunmediyini tapin
