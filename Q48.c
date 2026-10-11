#include <stdio.h>

int main(){
	
	int a[10],b[10],c[10],i,n;
	
	printf("size of array a and b");
	scanf("%d",&n);
	
	printf("enter the elements of a");
	
	for(i= 0;i<n;i++){
		
		scanf("%d",&a[i]);
		
	}	
	
	printf("enter the elements of b");
	
	for(i= 0;i<n;i++){
		
		scanf("%d",&b[i]);
		
	}
	
	printf("array a ");
	
	for(i= 0;i<n;i++){
		
		printf("%d,",a[i]);
		
	}		
	
	printf("\narray b \n");
	
	for(i= 0;i<n;i++){
		
		printf("%d,",b[i]);
		
	}		
	
	for(i = 0;i<n;i++){
		
		a[i] = a[i]^b[i];
		b[i] = a[i]^b[i];
		a[i] = a[i]^b[i];
		
	}
	
	printf("array a ");
	
	for(i= 0;i<n;i++){
		
		printf("%d,",a[i]);
		
	}		
	
	printf("\narray b ");
	
	for(i= 0;i<n;i++){
		
		printf("%d,",b[i]);
		
	}			
	
}
