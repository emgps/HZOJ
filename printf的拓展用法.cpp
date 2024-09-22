//一些关于printf不常用用法的说明
//printf本质：输出字符的数量 
#include <stdio.h>

int main(void){
	//占用空间测量 ,&lu是32位无符号整数的占位符 
	printf("sizeof(int) = %lu\n", sizeof(int));
	printf("sizeof(long long) = %lu\n", sizeof(long long));
	printf("sizeof() = %lu\n", sizeof(int));
	printf("sizeof(char) = %lu\n", sizeof(char));
	//字符数量，值得注意的是换行符这些也算在字符内 
	printf("Number = %d", printf("Test\n")); 
	return 0;
}
 
