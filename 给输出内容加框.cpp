//����������ݼ���һ��Ư���Ŀ�
#include<stdio.h>

int main(){
    char s[100], t[100];
    scanf("%[^\n]", s);
    int n;
    n = sprintf(t, "| %s |", s);
    for (int i = 0; i < n; i++)printf("-");
    printf("\n");
    printf("| %s |\n", s);
    for (int i = 0; i < n; i++)printf("-");
    return 0;
}
