#include <stdio.h>

int main(){
	int a[20],size,i,j,pos,neg,zero;
	
	printf("enter the size of array");
	scanf("%d",&size);
	
	for(i = 0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<size;i++){
		
		if(a[i]>0){
			pos++;
		}else if(a[i]<0){
			neg++;
		}else{
			zero++;
		}
		
	}
	
	printf("Positive Numbers = %d\n",pos);
	printf("Negetive Numbers = %d\n",neg);
	printf("Zero Numbers = %d\n",zero);
}
