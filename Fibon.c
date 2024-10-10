#include <stdio.h>

int main (){
	int i,t1=0,t2=1,fib,n=6;
if(n==1) printf("0");
else if(n==2) printf("0,1");
else{
printf("0,1");
	for(i=3;i<=n;i++){
	fib=t1+t2;
	printf(",%d",fib);
	t1=t2;
	t2=fib;

}

}
return 0;
}
