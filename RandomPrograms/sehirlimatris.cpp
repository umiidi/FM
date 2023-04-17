#include <iostream>
using namespace std;
int main ()
{
int matris[3][3];
int row=0;
int col=1;

for( int i=0;i<3;i++)
	for(int  j=0;j<3;j++)
		matris[i][j] = 0;
		
 matris[row][col] = 1;		
 for(int x=2;x<=9;x++)
 {
 	row--;
 	col--;
 
 	if(row<0){
 		row=row+3;
	 }

	if(col<0){
		col=col+3;
	}
	
	if (matris[row][col]>0){
		row++;					
	}

 	matris[row][col] = x;
 }
 
 
 for(int i = 0; i<3;i++){
 	for(int j = 0; j<3;j++)
 	{
 		cout<<matris[i][j] <<" ";
	 }
	 cout<<endl;
 }
 return 0;
}

//Sehrli matris - istenilen sutun, setir ve ya diaqonalýn cemi beraberdir
