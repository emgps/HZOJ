//һЩ����printf�������÷���˵��
//printf���ʣ�����ַ������� 
#include <stdio.h>

int main(void){
	//ռ�ÿռ���� ,&lu��32λ�޷���������ռλ�� 
	printf("sizeof(int) = %lu\n", sizeof(int));
	printf("sizeof(long long) = %lu\n", sizeof(long long));
	printf("sizeof() = %lu\n", sizeof(int));
	printf("sizeof(char) = %lu\n", sizeof(char));
	//�ַ�������ֵ��ע����ǻ��з���ЩҲ�����ַ��� 
	printf("Number = %d", printf("Test\n")); 
	return 0;
}
 
