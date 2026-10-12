#include <stdio.h>

int main(){
	int i,j,k;
	
	for(i = 1;i <= 8;i++){
		for(j = 0;j <= 8-i;j++){
			printf(" ");
		}
		for(k = 1;k <= i;k++){
			printf("%d",k);
		}
		printf("\n");
	}
	
}
