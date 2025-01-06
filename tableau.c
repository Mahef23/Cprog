#include <stdio.h>
#include <string.h>
int main(){
	int tab[]={3,2,9,7,5};
	int n=(sizeof(tab)/4);
	printf("%d",n);
	for (int i=0 ; i<n ; i++){
	printf("%d",tab[i]);
	}
return 0;
}
