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
void marks(int mark){
	if(mark <60) printf("Fail");
	else if (mark>=60 && mark<70)printf("Pass");
	else if (mark>=70 && mark<80)printf("Enough Good");
	else if (mark>=80 && mark<90)printf("Good");
	else if (mark>=90 && mark<100)printf("Very Good");
	else printf("Excellent");
}
int main (){
	//printf("%s",palyndrome("121"));
	marks(120);
return 0;
}
