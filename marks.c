#include <stdio.h>
#include <string.h>

char* palyndrome( char num[]){
	int i=0, n=strlen(num)-1;
		for (i=0; i<= n/2 ; i++){
			if(num[i]==num[n-i]);
			else {
				return "Not Palyndrome";
				break;
				}
		}
	return "Palyndrome";
}
/*void marks(int mark){
	
}*/
int main (){
	printf("%s",palyndrome("121"));
return 0;
}
