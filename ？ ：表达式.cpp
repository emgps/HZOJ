#include<stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%s\n", a % b == 0 ? "YES" : "NO");//运算符级别，表达式为真则返回冒号前面的值，反之返回冒号后的
    return 0;
}
