#include<stdio.h>
bool tester(char* s){
	for(int i=0; i<4;i++){
		if(s[i]=='3' and s[i+1]=='7')return true;
	}
	return false;
}
int main(){
char n[4];
scanf("%s",n);
if(tester(n))printf("yes");
else printf("no");
return 0;
}

//dord reqemli ededin yazilisinda ardicil olaraq 3 ve 7 reqeminin olub olmadigini teyin edir
