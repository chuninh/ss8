#include<stdio.h>
int main(){
	int n,i,j;
	printf("moi ban nhap vao 1 so nguyen");
	scanf("%d",&n);
	int numbers[n][n];
	for(i =0;i<n;i++){
		for(j =0;j<n;j++){
			printf("numbers[%d][%d] =\n",i,j);
			scanf("%d",&numbers[i][j]);
			
		}
	}
	
	
	return 0;
	
}
