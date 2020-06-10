#include <iostream>
using namespace std;

//PPROGRAMA QUE TRADUCE UN NUMERO ENTERO A BINARIO

//declaracion de funciones
int aBinario(int);

int main()
{
  int numero, numeroBinario;
  cout << "Ingresa el numero entero" <<endl;
  cin >> numero;
  aBinario(numero); //funcion que lo traduce a binario
  numeroBinario = aBinario(numero);
  cout << "Este numero en binario es " << numeroBinario <<endl;
  return numeroBinario;
}

int aBinario(int numero)
{
  int binario = 0, i = 1; //i sera la posicion binaria, siendo multiplos de 10

  while (numero > 0)
  {
    binario += (numero % 2) * i;
    numero = numero / 2;
    i *= 10; //cambio de posicion
  }

  return binario;
}
