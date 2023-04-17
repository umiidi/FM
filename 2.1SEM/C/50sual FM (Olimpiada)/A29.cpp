#include<stdio.h>
#include<math.h>
int main(){
int n,kubcem;
scanf("%d",&n);
kubcem = pow(n%10,3) + pow(n/10%10,3) + pow(n/100,3);
if(kubcem == n) printf("yes");
else printf("no");
return 0;
}

//3reqemli ededin Armstronq olub olmadigini teyin edir
