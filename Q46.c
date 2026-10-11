#include <stdio.h>

int main(){
	int a[20],size,i,j;
	
	printf("enter the size of array");
	scanf("%d",&size);
	
	for(i = 0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
	int max = a[0],smax = a[0];
	
	for(i=0;i<size;i++){
		
		if(a[i]>max){
			smax = max;
			max = a[i];
		}else if(a[i] >smax && a[i] < max){
			smax = a[i];
		}
		
	}
	
	printf("Maximum = %d\n",max);
	printf("Second maximum = %d",smax);
	
}
