#include <stdio.h>

int main(){
	int a[20],size,i,j,sum,odd = 0,even = 0;
	
	printf("enter the size of array");
	scanf("%d",&size);
	
	for(i = 0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<size;i++){
		if(a[i]%2 == 0){
			even++;
		}else{
			odd++;
		}
	}
	
	printf("ODD numbers %d\n",odd);
	printf("EVEN numbers %d",even);
}
