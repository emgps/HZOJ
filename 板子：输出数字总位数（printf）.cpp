/*printf("%d", n) ��������� n ��ֵ��������������ַ�����
����ַ�������ֵ�� digit��Ȼ�� printf("%d", digit) ���������ַ�����
��˻��������1233���ֽ��*/
 
#include <stdio.h>

int main(){
	int n, digit;
	scanf("%d", &n);
	digit = printf("%d", n);
	printf("\n%d", digit);
	return  0;
}
 
