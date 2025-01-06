#include <stdio.h>
#include "headera.h"
#define ANDEIREVY(age) if (age>=21)\
                        printf("Mahazo elah")

int main(){
        manisa(5);
        printf("Nocompilena tam %s %s\n",__DATE__,__TIME__);
        ANDEIREVY(18);
    return 0;
}
