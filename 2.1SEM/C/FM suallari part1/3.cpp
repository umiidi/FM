#include <stdio.h>
int main(){
 
 int m, n;
 printf("m= ");   scanf("%d", &m);
  printf("n= ");   scanf("%d", &n);
 
 for(int s= 1; s<= m*n; s++){
 if(s% m== 0 && s% n == 0){
 printf("EKOB= %d", s);
 break;
 }
 }
 
 int r;
 if(m > n) r = m;
 if(n > m) r = n;
 for(; r > 0; r--){
 if(m % r == 0 && n % r == 0){
 printf("\nEBOB= %d", r);
 break;
 }
 
}
 return 0;
}

//ekob ve ebob hesablayan program
