#include <stdio.h>

int main(){	
	//scanf读入字符串时到空格就会停，格式化即可 
	char s[1000];
	scanf("%[a-z A-Z]", s);//字符串不需要& 
	printf("%s", s);	
	return 0;
} 
