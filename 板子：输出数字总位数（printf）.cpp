/*printf("%d", n) 会输出变量 n 的值，并返回输出的字符数。
这个字符数被赋值给 digit，然后 printf("%d", digit) 会输出这个字符数。
因此会输出类似1233这种结果*/
 
#include <stdio.h>

int main(){
	int n, digit;
	scanf("%d", &n);
	digit = printf("%d", n);
	printf("\n%d", digit);
	return  0;
}
 
