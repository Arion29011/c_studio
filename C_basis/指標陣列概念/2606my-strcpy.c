#include <stdio.h>
#include <string.h>

char v[]="test";
char p[5];

main (){
    //deep copy
    int i;
    for(i=0;i<5;i++){
        p[i]=v[i];
    }

    printf("%s\n",p);

    //using strcpy function copy
    //strcpy(char *dest, const char *src);
    //注意char *dest必須有足夠的空間儲存src content，


}