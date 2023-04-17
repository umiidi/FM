#include<stdio.h>
int main(){
	int a,b,r,s;
	scanf("%d%d%d%d",&a,&b,&r,&s);
	if(a%b==r or a%b==s)printf("yes");
	else printf("no");
return 0;
}

//a-nin b-ye bolunmesinden alinan qaliq s-e ve ya r-e beraber olmasini teyin edir
