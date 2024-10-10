#include <stdio.h>
int main(){
	int i,n=6,j,choice=2;
if(choice==1){
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
		printf(" * ");
		}
	printf("\n");
	}
}
else if(choice==2){
	for(i=1; i<=n; i++){
		for(j=i; j<=n; j++){
		printf(" * ");
		}
	printf("\n");
	}
}
else printf("Acces Denied");
return 0;
}
