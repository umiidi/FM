#include<stdio.h>
int main(){
int n;
bool test = false;
scanf("%3d",&n);
while(n>0){
	if(n%10 == 3){
		test = true;
		break;
	}
	n/=10;
}
if(test) printf("yes");
else printf("no");
return 0;
}

//3reqemli ededin yazilisinda 3 reqeminin olub olmadigini teyin edir
