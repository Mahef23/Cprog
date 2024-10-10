#include <stdio.h>
int main (){
	int a=10,b=2,choix=5;
	switch (choix){ 
	case 1:printf("%d",a+b);
	break;
	case 2:printf("%d",a-b);
	break;	
	case 3:printf("%d",a*b);
	break;
	case 4:printf("%d",a/b);
	break;
	default:printf("Again");
}
return 0;
}
