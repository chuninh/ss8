#include<stdio.h>
int main(){
	int numbers[2][3] = {{1,2,3},{4,5,6}};
	int i,j;
	int max = numbers[0][0];
	for(i =0;i<2;i++){
		for(j =0;j<3;j++){
			if(numbers[i][j] >max){
				max = numbers[i][j];
			}
			
		}
	}
	printf("max =%d",max);
	
	return 0;
	
}  
