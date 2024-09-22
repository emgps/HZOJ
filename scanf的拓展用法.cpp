#include <stdio.h>

int main(void) {
    // 格式化读入 
    int a, b, n; 
    printf("format scanf, input %%dabc%%d: ");
    n = scanf("%dabc%d", &a, &b);
    printf("a = %d, b = %d, n = %d\n", a, b, n);
    return 0;
    // 注意：EOF值为-1 
}

