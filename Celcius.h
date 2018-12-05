// This programm converts Temp from Celcius degrees to Fahrenh degrees.
//Fahrenhait = NCelcius * (212-32)/100 + 32

#include <stdio.h>
#include <iostream>
using namespace std;

void Celcius(int nNCelcius) //, char* pszArgs[]
{
    /* Введите темпер в град Цельсия */
    // int nNCelcius;
    // cout << "Please insert Temp in Celcius:";  //Введите темпер в град Цельсия: 
    // cin >> nNCelcius;

    // для этой формулы вычислим преобр Фактор
    const int nNFactor = 212-32;
    
    int nFahrrehneit;
    nFahrrehneit = nNFactor * nNCelcius/100 + 32;

    // вывод результатов
    cout << "Result Temp in Fahrenh: " << nFahrrehneit << endl;
    // system ("pause");

    // return 0;
}
// Old compilation method:
// Compile C++ code by CMD: g++  F:\Users\Navitek\Workspace
// \Hello2\Celcius.cpp -o  F:\Users\Navitek\Workspace\Hello2\a\Celius.exe