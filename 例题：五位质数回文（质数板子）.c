#include<stdio.h>

int main() {
    int a, b, c = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++) {					//遍历 
        int flag = 1;
        for (int j = 2; j * j <= i && flag; j++) {
            if (i % j) continue;					//判断质数（从2到saqrt（i）试除） 
            flag = 0;
        } 
        if (flag == 0) continue;
        int x = i, y = 0;
        while (x) {							
            y = y * 10 + x % 10;
            x /= 10;								//对三位数回文的判断 
        }
        if (y != i) continue;
        if (c) printf(" ");
        c += printf("%d", i);
    }
    printf("\n");
    return 0;
}
