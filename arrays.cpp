#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


//Ejercicio de HackerRank.com
//El input son dos lineas:
//la primera son la cantidad de numeros pasados
//la segunda son los numeros a tener en cuenta
//Me piden mostrar la cadena de numeros en sentido inverso

int main()
{
    int howMany;
    scanf("%d\n", &howMany);
    int num[howMany];

    for (int i = 0; i < howMany; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = howMany - 1; i >= 0; i--)
    {
        cout << num[i] << " ";
    }



    return 0;
}
