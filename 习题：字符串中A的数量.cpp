#include <stdio.h>
#include <string.h>

int main(){
	char str[105];
	scanf("%s", str);
	int cnt = 0;
	for(int i = 0; str[i]; i ++){
		cnt += (str[i] == 'A');
	}
	printf("%d\n", cnt);
	return 0;
}
