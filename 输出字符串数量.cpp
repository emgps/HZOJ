//读入一个行字符串（可能包含空格），输出这个字符串中字符的数量
#include<stdio.h>

int main(){
    char s[100];//这个最多容纳99位，因为最后会有一位\0作为结束，因此正常的三位实际上占据了四位
    scanf("%[^\n]", s);//以下是经典的利用printf读取字符数量操作
    int n;
    n = printf("%s", s);
    printf(" :%d\n", n);
    return 0;
}//关于&符号使用的说明：https://blog.csdn.net/qq_43290288/article/details/108760945

