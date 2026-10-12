#include <stdio.h>

int main(){
	int num[5] = {0,0,0,0,0},i,j;
	
	for(i = 0;i <= 4;i++){
		num[i] = 1;
		for(j = 0;j<=4;j++){
			printf("%d",num[j]);
		}
		printf("\n");
		num[i] = 0;
	}
}
