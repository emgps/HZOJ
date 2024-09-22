//对于char的一些说明和使用
#include <stdio.h>

int main(void){
	char g = 'a';
	printf("g = '%c'\n", g);//解释成字符 
	printf("g = '%d'\n", g);//解释成int数据（ASCII）
	printf("g = '%c'\n", 99);//99对应的ASCII字符
	printf("g(%%d) = '%d'\n", g) ;//%%d是格式化字符串，%是格式说明符的起始字符，输出时 %%d 实际上会输出 %d
	return 0;
}
