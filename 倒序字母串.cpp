//字符反转
#include <stdio.h>
#include <string.h>
int main(){
	//核心思路：首尾两头不断对调
	char s[55];
	scanf("%s", s);
	for(int i = 0, j = strlen(s) - 1; i < j;i ++, j --){
		char ch;
		s[i] ^= s[j];
		s[j] ^= s[i];
		s[i] ^= s [j];
	}
	printf("%s", s);
	return 0;
} 
