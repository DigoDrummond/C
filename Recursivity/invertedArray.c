#include <stdio.h>

int inverted(int array[], int esq, int dir){
    if( esq>=dir)
        return ;
    else
        t = v[esq];
    v[esq] = v[dir];
    v[dir] = t;
    inverted(v, esq + 1, dir - 1);
}