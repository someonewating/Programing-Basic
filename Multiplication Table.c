#include <stdio.h>
int main() {
    int i,j;  // i, j控制行或列 
    for(i=1;i<=9;i++) {
        for(j=1;j<=9;j++)
            // %2d 控制宽度为两个字符，且右对齐；如果改为 %-2d 则为左对齐
            // \t为tab缩进
            printf("%d*%d=%2d\t", i, j, i*j);
        printf("\n");
    }
    return 0;
}