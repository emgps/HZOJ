//����char��һЩ˵����ʹ��
#include <stdio.h>

int main(void){
	char g = 'a';
	printf("g = '%c'\n", g);//���ͳ��ַ� 
	printf("g = '%d'\n", g);//���ͳ�int���ݣ�ASCII��
	printf("g = '%c'\n", 99);//99��Ӧ��ASCII�ַ�
	printf("g(%%d) = '%d'\n", g) ;//%%d�Ǹ�ʽ���ַ�����%�Ǹ�ʽ˵��������ʼ�ַ������ʱ %%d ʵ���ϻ���� %d
	return 0;
}
