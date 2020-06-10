//EJERCICIO

//Se realizó un concurso de tiro al blanco. Por cada participante se ingresa un número que lo
//identifica y el resultado de los disparos efectuados. El ingreso finaliza con un número de
//participante negativo. Cada participante efectúa 5 disparos, registrándose las coordenadas X-Y de
//cada disparo.
//Para determinar el cuadrante utilizar la función cuadrante que reciba las dos coordenadas y
//retorne el cuadrante al cual pertenece (1 a 4) y 0 para indicar un tiro en el centro.
//Para calcular el puntaje utilizar la función puntaje que reciba 5 parámetros que representan la
//cantidad disparos en cada cuadrante y en el centro. La función debe retornar el puntaje obtenido
//según la siguiente escala:
//✓ Cuadrantes 1 y 2: 50 puntos
//✓ Cuadrantes 3 y 4: 40 puntos
//✓ Centro: 100 puntos

//Dato:
//Los disparos sobre el eje X considerarlo en los cuadrantes 1 y 4
//Los disparos sobre el ejes Y considerarlo en los cuadrantes 1 y 2


#include <iostream>
#include <vector>

using namespace std;

//Variavles globales
int participante = 0, puntajeJugador = 0, tirosEnCentroTotales = 0;
int primerCuadrante = 0, segundoCuadrante = 0, tercerCuadrante = 0, cuartoCuadrante = 0, centro = 0;  //variables que se incrementan cuando se realiza un tiro
int numeroMasGrande = 0, participanteGanador; // Para saber el puntaje y el participante ganador
int cuadrante(int ejeX, int ejeY);
void puntaje (int primerCuadrante, int segundoCuadrante, int tercerCuadrante, int cuartoCuadrante, int centro);
void puntajeGanador(int PuntajeParticipante, int participante);

int main()
{

  cout << "Numero de participante: " << endl;
  cin >> participante;

  while (participante >= 0) {
    for (int i = 0; i < 5; i++) {
      //Variable que cambian en cada tiro
      int tiroX, tiroY;

      cout << "Donde fue el tiro en el eje X?" << endl;
      cin >> tiroX;
      cout << "Donde fue el tiro en el eje Y?" << endl;
      cin >> tiroY;
      cout << endl;

      cuadrante(tiroX, tiroY);
      cout << "Proximo tiro" << endl;
    }


    cout << "Ya pasaron los 5 tiros." << endl;

    //Funciones que ceuntan los puntos y decien cual va ganando
    puntaje(primerCuadrante, segundoCuadrante, tercerCuadrante, cuartoCuadrante, centro);
    puntajeGanador(puntajeJugador, participante);

    cout << "El participante numero " << participante << " hizo un total de " << puntajeJugador  << " puntos." <<endl;
    cout << "Realizo " << primerCuadrante << " tiros en el primer cuadrante." <<endl;
    cout << "Realizo " << segundoCuadrante << " tiros en el segundo cuadrante." <<endl;
    cout << "Realizo " << tercerCuadrante << " tiros en el tercer cuadrante." <<endl;
    cout << "Realizo " << cuartoCuadrante << " tiros en el cuarto cuadrante." <<endl;
    cout << "Realizo " << centro << " tiros en centro." << endl;

    cout << "Siguiente participante" << endl << endl;
    cout << "Numero de participante: " << endl;
    cin >> participante;
    // Para que no se acumulen los puntos
    puntajeJugador = 0;
    primerCuadrante = 0;
    segundoCuadrante = 0;
    tercerCuadrante = 0;
    cuartoCuadrante = 0;
    centro = 0;
  }

  cout << "No hay mas participante." << endl;
  cout << "Hubo " << tirosEnCentroTotales << " tiros en el centro.";
  //participanteGanador(todosLosParticipantes);
  cout << endl << "El ganador es el participante numero " << participanteGanador << " con " << numeroMasGrande << " puntos." << endl;

  return 0;

}

int cuadrante(int ejeX, int ejeY)
{
  if (ejeX > 0 && ejeY > 0)
  {
    primerCuadrante++;
  }
  else if(ejeX < 0 && ejeY > 0)
  {
    segundoCuadrante++;
  }
  else if(ejeX < 0 && ejeY < 0)
  {
    tercerCuadrante++;
  }
  else if(ejeX >= 0 && ejeY < 0)
  {
    cuartoCuadrante++;
  }
  else
  {
    tirosEnCentroTotales++;
    centro++;
  }

  //Excepciones cuando Y = 0, X = 0
  if (ejeY == 0) {
    primerCuadrante++;
    segundoCuadrante++;
  }

  if (ejeX == 0) {
    primerCuadrante++;
    cuartoCuadrante++;
  }

  return 0;
}

void puntaje (int primerCuadrante, int segundoCuadrante, int tercerCuadrante, int cuartoCuadrante, int centro)
{
  //Suma de puntos en cada cuadrante por separado
  while (primerCuadrante > 0) {
    primerCuadrante--;
    puntajeJugador += 50;
  }

  while (segundoCuadrante > 0) {
    segundoCuadrante--;
    puntajeJugador += 50;
  }

  while (tercerCuadrante > 0) {
    tercerCuadrante--;
    puntajeJugador += 40;
  }

  while (cuartoCuadrante > 0) {
    cuartoCuadrante--;
    puntajeJugador += 40;
  }

  while (centro > 0) {
    centro--;
    puntajeJugador += 100;
  }


}

void puntajeGanador(int PuntajeParticipante, int participanteActual) {
  if (PuntajeParticipante > numeroMasGrande) {
    numeroMasGrande = PuntajeParticipante;
    participanteGanador = participanteActual;
  }
  else {
    return;
  }
}
