//sscanf��ʹ��-----���ַ����ж������� ,��scanfһ�����Ը�ʽ������ 
//���ʣ�sscanf���ַ�����Ϣת�����������͵���Ϣ��sprintf�෴ 
#include <stdio.h>

int main(){
	char s[100] = "123.456.789";
	int a, b, c;
	sscanf(s, "%d.%d.%d", &a, &b, &c);
	sprintf(s,"%d:%d:%d", a, b, c); 
	return 0;
} 
