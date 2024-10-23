#include <stdio.h>
#include <string.h>
#include <math.h>
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
	if(mark <60) printf("Fail git ");
	else if (mark>=60 && mark<70)printf("Pass");
	else if (mark>=70 && mark<80)printf("Enough Good");
	else if (mark>=80 && mark<90)printf("Good");
	else if (mark>=90 && mark<100)printf("Very Good");
	else printf("Excellent");
}
void reverse(char mot[]){
	for(int i=strlen(mot)-1; i>=0 ; i--){
	printf("%c",mot[i]);
	}
}
void prime(int number){
	int n, val=sqrt(number);

	for(int i=2; i<=val; i++){
	if(number%i ==0) n++;
	}
	if (n!=0) printf("Not Prime");
	else printf("Prime");
}
int main (){
	//printf("%s",palyndrome("121"));
	//marks(120);
	//reverse("Paul");
	prime(23);
return 0;
}
