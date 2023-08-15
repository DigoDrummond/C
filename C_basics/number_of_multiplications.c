#include <stdio.h>

int main(){
    int n = 22, a = 1;
    for (int i = n; i > 0;i /=2){
        a *= 2;
        printf("%d\n", a);
    }
}
/*
i=256 2
i=128 4
i=64  8
i=32  16
i=16  32
i=8   6
i=4   128
i=2   256
i=1   512
9 multiplications

lg n + 1 multiplications
*/