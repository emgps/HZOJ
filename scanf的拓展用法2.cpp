#include <stdio.h>

int main(){	
	//scanf�����ַ���ʱ���ո�ͻ�ͣ����ʽ������ 
	char s[1000];
	scanf("%[a-z A-Z]", s);//�ַ�������Ҫ& 
	printf("%s", s);	
	return 0;
} 
