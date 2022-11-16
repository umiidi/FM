#include<stdio.h>
bool tester(char* s){
	for(int i=0; i<3;i++){
		for(int j=i+1;j<4;j++){
			if(s[i] == s[j])return true;
		}
	}
	return false;
}
int main(){
char n[4];
scanf("%s",n);
if(tester(n))printf("no");
else printf("yes");
return 0;
}

//4reqemli ededin butun reqemlerinin ferqli olub olmadigini teyin edir
