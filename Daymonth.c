#include <stdio.h>
int main (){
	int month=2;
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) printf("31");
	else if (month==2)printf("28 || 29");
	else printf("30"); 
return 0;
}
