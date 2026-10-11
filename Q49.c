#include<stdio.h>

int main(){
int a[10] = {5,3,4,1,2,2,8,4},i,j,t,min;

for(i=0;i<7;i++){
min = a[i];
for(j=i;j<8;j++){
if(a[j] < min){
min = a[j];
t = j;}}

a[i] = a[t]+a[i];
a[t] = a[i] - a[t];
a[i] = a[i] - a[t];

}
for(i=0;i<8;i++){
printf("%d",a[i]);}
}
