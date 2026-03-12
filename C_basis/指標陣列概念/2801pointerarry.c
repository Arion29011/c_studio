//C 語言入門 | 28 - 01 | 指標的陣列//
#include <stdio.h>
int values[]={1,2,3,4,5};
int *ptrs[]={&values[1],&values[3],&values[0]};  //記憶體位址不一定要連續
int *n=values;

main(){
    int i;
    for(i=0;i<sizeof(ptrs)/sizeof(int*);i++){
        *ptrs[i]=5;  //指標陣列取值要加上*，不然會是記憶體位址，而n不需要加上*，a[i] 等價於 *(a + i)
    }
}

