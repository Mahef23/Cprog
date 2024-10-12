#include <stdio.h>
#include <string.h>

int main (){
	char num[]="122251";
	int i=0, n=strlen(num)-1;
		for (i=0; i<= n/2 ; i++){
			if(num[i]==num[n-i]);
			else {
				printf("Not");
				break;
				}
		}
	printf("palyndrome");
return 0;
}
