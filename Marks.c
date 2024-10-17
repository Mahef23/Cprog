#include <stdio.h>
#include <string.h>
int main (){
	int a[5]={1,2,3,5,6};
	int n=sizeof(a)/4,i,j;
	for(i=0; i<n ; i++){
	printf("%d -",a[i]);
	if (i== (n-1)) a[i] = a[i];
	else a[i]=a[i]+a[i+1];
	printf("%d \n" ,a[i]);
	}
	for(i=0 ; i<n ; i++){
		for (j=i+1; j<n ; j++){
			
		}
	}
return 0;
}
