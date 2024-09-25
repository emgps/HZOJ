#include <stdio.h>
/*int fibonacci(int n){
	if(n == 1 || n == 2)return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(){
	int i = 1, cnt = 0;
	while(fibonacci(i) < 4000000){
		i ++;
	}
	printf("%d\n", i);
	for(int k = 1; k < i; k ++){
		if(fibonacci(k) % 2 == 0){
			cnt += fibonacci(k);
		}
	}
	printf("%d", cnt);
	}*/
//优化成o1——滑动数组
#include <stdio.h>
#define MAX_N 4000000
int fib[3] = {0, 1, 2};
 
