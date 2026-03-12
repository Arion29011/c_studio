#include <stdio.h>

//int *n 指向的是陣列的第一個元素 example int *n[3]=v 開三格空間
 //int (*n)[array_number] 指向的是整個陣列 int(*n)[3] 只有一格

void print(int (*q)[3]){
    int i;
    for (i = 0;i < 3;i++){
        printf("%d "(*q)[i]); //取出q
    }
    printf("\n");
}

int main(){
    int v[3] = {1, 2, 3};
    print(&v);
    return 0;
}