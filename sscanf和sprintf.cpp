//sscanf的使用-----从字符串中读入数据 ,和scanf一样可以格式化读入 
//本质：sscanf将字符串信息转换成其他类型的信息，sprintf相反 
#include <stdio.h>

int main(){
	char s[100] = "123.456.789";
	int a, b, c;
	sscanf(s, "%d.%d.%d", &a, &b, &c);
	sprintf(s,"%d:%d:%d", a, b, c); 
	return 0;
} 
