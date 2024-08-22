//sscanf:将字符串信息转换为其他信息
//printf：将其他信息转换为字符串信息
//下面是将“192.168.1.245”转化为“192：168：1：245”的例子
#include<stdio.h>

int main(){
    char str[100] = "192.168.1.245";
    int a, b, c, d;
    sscanf(str, "%d.%d.%d.%d", &a, &b, &c, &d);//这里还用到了scanf的格式化读入技巧
    sprintf(str, "%d:%d:%d:%d", a, b, c, d);
    printf("str =  %s\n", str);
    return 0;
}
