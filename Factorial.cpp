#include <stdio.h>
int main() {
    int n, fact=1, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if(n<0){
    	printf("Error! factorial does not exists");
	}else{
		for(i=1;i<=n;i++){
			fact*=i;
		}
		printf("Factorial series of %d is %d",n,fact);	
	}
    printf("\n");
    return 0;
}

