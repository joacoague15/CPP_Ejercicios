#include <stdio.h>

//Este es un ejercicio de HackerRank.com
//El input son 2 numeros enteros
//Me pide devovler en una linea, la suma de los dos enteros
//En la otra linea me pide el modulo de la resta a - b

void update(int *a,int *b)
 {
     int sum, absolute;

     sum = *a + *b;
     absolute = (*a - *b);

     if (absolute < 0)
     {
         absolute = absolute * (-1);
     }

     printf("%d\n%d", sum, absolute);

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}
