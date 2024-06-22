#include<stdio.h>
int main(){
	int num[10]={23,56,43,78,64,37,8,4,2,6},max=num[0],i;
	for(i=1;i<10;i++){
		if (max<num[i]){
			max=num[i];
		}
	}
	printf("Max : %d",max);
}
