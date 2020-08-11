#include <iostream>
#include <fstream>
#include <string>
#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

int main()
{
    ofstream outFile;

    vector<string> nombres;
    vector<string> apellidos;
    vector<string> dni;
    vector<string> zona;

    int Nrepartidores = 0;
    int i, j;
    int zona1 = 0;
    int zona2 = 0;
    int zona3 = 0;
    int zona4 = 0;
    int zona5 = 0;
    int zona6 = 0;
    int zonainv = 0;

    cout << "Ingrese el numero de repartidores" << endl;
    cin >> Nrepartidores;

    for (i = 0; i <= Nrepartidores-1; i++)
    {
        string a,b,c,d;

        cout << "Ingrese el nombre del repartidor" << endl;
        cin >> a;
        cout << "Ingrese el apellido del repartidor" << endl;
        cin >> b;
        cout << "Ingrese el dni del repartidor" << endl;
        cin >> c;
        cout << "Ingrese la zona de trabajo del repartidor" << endl;
        cin >> d;

        nombres.push_back(a);
        apellidos.push_back(b);
        dni.push_back(c);
        zona.push_back(d);


    }

        outFile.open("Repartidores.dat", ios::out);

        outFile << "\n" << "Nombre" << " " << "Apellido" << " " << "DNI" << " " << "Zona";

    for(j = 0; j <=  Nrepartidores-1; j++)
    {

        outFile << "\n" << nombres.at(j) << " " << apellidos.at(j) << " " << dni.at(j) << " " << zona.at(j);
        if(zona.at(j) == "1")
        {
            zona1++;
        }
        else if (zona.at(j) == "2")
        {
            zona2++;
        }
        else if (zona.at(j) == "3")
        {
            zona3++;
        }
        else if (zona.at(j) == "4")
        {
            zona4++;
        }
        else if (zona.at(j) == "5")
        {
            zona5++;
        }
        else if (zona.at(j) == "6")
        {
            zona6++;
        }
        else
        {
            zonainv++;
        }
    }
    cout << "Hay " << zona1 << " repartidores en la primer zona, " << zona2 << " en la segunda zona, " << zona3 << " en la tercera zona, " << zona4 << " en la cuarta zona, " << zona5 << " en la zona quinta zona y " << zona6 << " en la sexta zona." << endl;
    if (zona1 == 0)
    { cout << "No se presentaron trabajadores para la primer zona" << endl; }
    if (zona2 == 0)
    {
        cout << "No se presentaron trabajadores para la segunda zona" << endl;
    }
    if (zona3 == 0)
    {
        cout << "No se presentaron trabajadores para la tercer zona" << endl;
    }
    if (zona4 == 0)
    {
        cout << "No se presentaron trabajadores para la cuarta zona" << endl;
    }
    if (zona5 == 0)
    {
        cout << "No se presentaron trabajadores para la quinta zona" << endl;
    }
    if (zona6 == 0)
    {
        cout << "No se presentaron trabajadores para la sexta zona" << endl;
    }
    if(zonainv == 1)
    {
        cout << "Hay un repartidor cuya zona es invalida" << endl;
    }
    if(zonainv > 1)
    {
        cout << "Hay " << zonainv << " repartidores cuyas zona son invalidas" << endl;
    }
    outFile.close();

}
