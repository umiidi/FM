#include<stdio.h>
bool tester(char* s){
	for(int i=0; i<4;i++){
		for(int j=i+1;j<5;j++){
			if(s[i] == s[j])return true;
		}
	}
	return false;
}
int main(){
char n[5];
scanf("%s",n);
if(tester(n))printf("yes");
else printf("no");
return 0;
}

//5reqemli ededin yazilisinda eyni reqem olub olmadigini yoxlayir
