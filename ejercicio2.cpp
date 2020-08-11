#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <conio.h>

using namespace std;

void agregarZonaBebidas (int zona);

int main()
{
	FILE *f;

  //Rubros
  int heladeria = 0, pizzeria = 0, bebidas = 0, parrilla = 0;
  int zona1 = 0, zona2 = 0, zona3 = 0, zona4 = 0, zona5 = 0, zona6 = 0;
  int zonas1[4] = {0,0,0,0};
  int zonas2[4] = {0,0,0,0};
  int zonas3[4] = {0,0,0,0};
  int zonas4[4] = {0,0,0,0};
  int zonas5[4] = {0,0,0,0};
  int zonas6[4] = {0,0,0,0};

  //Ingreso de Datos
    int respuestaZona, respuesta;
    cout << "Ingreso de datos? (1 para si/0 para no): " << endl;
    cin >> respuesta;

    //Vectores para guardar datos de los comercios

		vector <int> zonasBebidas;
    vector <int> zonasHeladeria;
		vector <int> zonasParrilla;
  	vector <int> zonasPizzeria;

		vector <string> nombresBebidas;
    vector <string> nombresHeladeria;
		vector <string> nombresParrilla;
    vector <string> nombresPizzeria;

		//Para saber si estan todos los rubros por zona

  while (respuesta != 0) {
    char nombreComercio[30]="";
    int rubro;

    cout << "Nombre de comercio:" << endl;
    cin.ignore();
    cin.getline (nombreComercio, 50);



    cout << "Seleccionar numero de rubro: 1- heladeria, 2- pizzeria, 3- bebidas, 4- parrilla (si excede los 10 en la zona, no se ingresa el dato):" << endl;
    cin >> rubro;
		while (rubro < 1 || rubro > 4){
        if (rubro < 1 || rubro > 4){
            cout << "Rubro incorrecto"<< endl;
            cout << "Seleccionar numero de rubro: 1- heladeria, 2- pizzeria, 3- bebidas, 4- parrilla (si excede los 10 en la zona, no se ingresa el dato):" << endl;
            cin >> rubro;
        }
    }

    cout << "Especifique la zona (1 - 6)"<< endl;
    cin >> respuestaZona;
    while (respuestaZona < 1 || respuestaZona > 6){
        if (respuestaZona < 1 || respuestaZona > 6){
            cout<< "Zona incorrecta"<< endl;
            cout << "Especifique la zona (1 - 6)"<< endl;
            cin >> respuestaZona;
        }
    }

    if (respuestaZona == 1 && zona1 < 10) {
    	zona1++;
    }
    else if (respuestaZona == 2 && zona2 < 10) {
    	zona2++;
    }
    else if (respuestaZona == 3 && zona3 < 10) {
    	zona3++;
    }
    else if (respuestaZona == 4 && zona4 < 10) {
    	zona4++;
    }
    else if (respuestaZona == 5 && zona5 < 10) {
    	zona5++;
    }
    else if (respuestaZona == 6 && zona6 < 10) {
    	zona6++;
    }
    else {
    	cout << "No hay mas cupo en esta zona" << endl;
    }

    //Para saber si hay todos los rubros por zona
    if (respuestaZona == 1) {
    	switch (rubro){
      case 1:
      			zonas1[0] = 1;
      			break;
      case 2:
        		zonas1[1] = 1;
      			break;
      case 3:
        		zonas1[2] = 1;
        		break;
      case 4:
      			zonas1[3] = 1;
      			break;
      }
    }

    else if (respuestaZona == 2) {
    	switch (rubro){
      case 1:
      			zonas2[0] = 1;
      			break;
      case 2:
        		zonas2[1] = 1;
      			break;
      case 3:
        		zonas2[2] = 1;
        		break;
      case 4:
      			zonas2[3] = 1;
      			break;
      }
    }
    else if (respuestaZona == 3) {
    	switch (rubro){
      case 1:
      			zonas3[0] = 1;
      			break;
      case 2:
        		zonas3[1] = 1;
      			break;
      case 3:
        		zonas3[2] = 1;
        		break;
      case 4:
      			zonas3[3] = 1;
      			break;
      }
    }
    else if (respuestaZona == 4) {
    	switch (rubro){
      case 1:
      			zonas4[0] = 1;
      			break;
      case 2:
        		zonas4[1] = 1;
      			break;
      case 3:
        		zonas4[2] = 1;
        		break;
      case 4:
      			zonas4[3] = 1;
      			break;
      }
    }

   else if (respuestaZona == 5) {
    	switch (rubro){
      case 1:
      			zonas5[0] = 1;
      			break;
      case 2:
        		zonas5[1] = 1;
      			break;
      case 3:
        		zonas5[2] = 1;
        		break;
      case 4:
      			zonas5[3] = 1;
      			break;
      }
    }
    else if (respuestaZona == 6) {
    	switch (rubro){
      case 1:
      			zonas6[0] = 1;
      			break;
      case 2:
        		zonas6[1] = 1;
      			break;
      case 3:
        		zonas6[2] = 1;
        		break;
      case 4:
      			zonas6[3] = 1;
      			break;
      }
    }


    if (rubro == 1) {
     	nombresHeladeria.push_back(nombreComercio);
			zonasHeladeria.push_back(respuestaZona);
      heladeria++;
    }
    else if (rubro == 2 ) {
     	nombresPizzeria.push_back(nombreComercio);
			zonasPizzeria.push_back(respuestaZona);
      pizzeria++;
    }
    else if (rubro == 3) {
    	nombresBebidas.push_back(nombreComercio);
			zonasParrilla.push_back(respuestaZona);
      bebidas++;
			//agregarZonaBebidas(respuestaZona);
    }
    else if (rubro == 4 ) {
      nombresParrilla.push_back(nombreComercio);
			zonasBebidas.push_back(respuestaZona);
      parrilla++;
    }
    else {
      cout << "El rubro especificado no existe" << endl;
    }
    cout << "Ingreso de datos? (1 para si/0 para no): " << endl;
    cin >> respuesta;
  }

  if(zonas1[0] == 1 && zonas1[1] == 1 && zonas1[2] == 1 && zonas1[3] == 1) {
  	cout << "La zona 1 tiene todos los rubros"<< endl;
  }
  else if (zonas1[0] == 0 && zonas1[1] == 0 && zonas1[2] == 0 && zonas1[3] == 0) {
  	cout << "La zona 1 no tiene rubros"<< endl;
  }

  if(zonas2[0] == 1 && zonas2[1] == 1 && zonas2[2] == 1 && zonas2[3] == 1) {
  	cout << "La zona 2 tiene todos los rubros"<< endl;
  }
  else if (zonas2[0] == 0 && zonas2[1] == 0 && zonas2[2] == 0 && zonas2[3] == 0) {
  	cout << "La zona 2 no tiene rubros"<< endl;
  }

  if(zonas3[0] == 1 && zonas3[1] == 1 && zonas3[2] == 1 && zonas3[3] == 1) {
  	cout << "La zona 3 tiene todos los rubros"<< endl;
  }
  else if (zonas3[0] == 0 && zonas3[1] == 0 && zonas3[2] == 0 && zonas3[3] == 0) {
  	cout << "La zona 3 no tiene rubros"<< endl;
  }

 if(zonas4[0] == 1 && zonas4[1] == 1 && zonas4[2] == 1 && zonas4[3] == 1) {
  	cout << "La zona 4 tiene todos los rubros"<< endl;
  }
  else if (zonas4[0] == 0 && zonas4[1] == 0 && zonas4[2] == 0 && zonas4[3] == 0) {
  	cout << "La zona 4 no tiene rubros"<< endl;
  }

  if(zonas5[0] == 1 && zonas5[1] == 1 && zonas5[2] == 1 && zonas5[3] == 1) {
  	cout << "La zona 5 tiene todos los rubros"<< endl;
  }
  else if (zonas5[0] == 0 && zonas5[1] == 0 && zonas5[2] == 0 && zonas5[3] == 0) {
  	cout << "La zona 5 no tiene rubros"<< endl;
  }

  if(zonas6[0] == 1 && zonas6[1] == 1 && zonas6[2] == 1 && zonas6[3] == 1) {
  	cout << "La zona 6 tiene todos los rubros"<< endl;
  }
  else if (zonas6[0] == 0 && zonas6[1] == 0 && zonas6[2] == 0 && zonas6[3] == 0) {
  	cout << "La zona 6 no tiene rubros"<< endl;
  }


	ofstream Bebidas;
	Bebidas.open("Bebidas.dat",ios::out);
	if (bebidas > 0) {
		for (int i = 0; i < nombresBebidas.size(); i++) {
			Bebidas << "Nombre de comercio: " << nombresBebidas[i] << endl;
			Bebidas << "Zona de comercio: " << zonasBebidas[i] << endl;
	}
}
	else {
			Bebidas << "No hay comercio en este rubro" << endl;
	}

	Bebidas.close();

	ofstream Heladeria;
	Heladeria.open("Heladeria.dat",ios::out);

	if (heladeria > 0) {
  for (int i = 0; i < nombresHeladeria.size(); i++) {
		Heladeria << "Nombre de comercio: "<< nombresHeladeria[i] << endl;
		Heladeria << "Zona de comercio: "<< zonasHeladeria[i] << endl;
  }
}
else {
	Heladeria << "No hay comercio en este rubro" << endl;
}

	Heladeria.close();

	ofstream Parrilla;
	Parrilla.open("Parrilla.dat",ios::out);
	if (parrilla > 0) {
  for (int i = 0; i < nombresParrilla.size(); i++) {
		Parrilla << "Nombre de comercio: "<< nombresParrilla[i] <<endl;
		Parrilla << "Zona de comercio: " << zonasParrilla[i] <<endl;
	}
}
else {
	Parrilla << "No hay comercio en este rubro" << endl;
}

	Parrilla.close();

  ofstream Pizzeria;
	Pizzeria.open("Pizzeria.dat",ios::out);

	if (pizzeria > 0) {
  for (int i = 0; i < nombresPizzeria.size(); i++) {
		Pizzeria << "Nombre de comercio: "<< nombresPizzeria[i] << endl;
		Pizzeria << "Zona de comercio: "<< zonasPizzeria[i] << endl;
	}
}
else {
	Pizzeria << "No hay comercio en este rubro" << endl;
}
	Pizzeria.close();
		getch();
    return 0;
  }
