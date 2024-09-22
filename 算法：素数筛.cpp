//�㷨������ɸ
#include <stdio.h>

int prime[1000] = {0};

void init_prime(int n){
	prime[0] = prime[1] = 1;
	for(int i = 2; i * i <= n; i++){					//�Ż���������sqrt��i������ 
		if(prime[i])continue;
		for(int j = i * i; j <= n; j += i){
			prime[j] = 1;
		}
	}
	return ;
}

int main(){
	init_prime(100);
	int x;
	while(scanf("%d",&x) !=EOF){
		printf("prime[%d] = %d\n", x, prime[x]);
	}
}
