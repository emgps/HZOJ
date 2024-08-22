#include<stdio.h>

int main(){
    int y, m;
    if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
        switch(m){
            case 2 : 29; break;
            case 1, 3, 5, 7, 8, 10, 12 : 31; break;
            case 4, 6, 9, 11 : 30; break;
        }

    }else{switch(m){
            case 2 : 28; break;
            case 1, 3, 5, 7, 8, 10, 12 : 31; break;
            case 4, 6, 9, 11 : 30; break;
        }
        
    }
    return 0;
}
