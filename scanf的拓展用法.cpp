#include <stdio.h>

int main(void) {
    // ��ʽ������ 
    int a, b, n; 
    printf("format scanf, input %%dabc%%d: ");
    n = scanf("%dabc%d", &a, &b);
    printf("a = %d, b = %d, n = %d\n", a, b, n);
    return 0;
    // ע�⣺EOFֵΪ-1 
}

