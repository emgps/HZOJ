//sscanf:���ַ�����Ϣת��Ϊ������Ϣ
//printf����������Ϣת��Ϊ�ַ�����Ϣ
//�����ǽ���192.168.1.245��ת��Ϊ��192��168��1��245��������
#include<stdio.h>

int main(){
    char str[100] = "192.168.1.245";
    int a, b, c, d;
    sscanf(str, "%d.%d.%d.%d", &a, &b, &c, &d);//���ﻹ�õ���scanf�ĸ�ʽ�����뼼��
    sprintf(str, "%d:%d:%d:%d", a, b, c, d);
    printf("str =  %s\n", str);
    return 0;
}
