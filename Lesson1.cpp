//  Практические занятия по Курсу "С++ Базовый" в УЦ АйТи Столица
//  Дата начала: 24 сентября 2018 г.
//  Тема 1 и 2: Циклы, Ссылки, массивы ,строки.
// Дом задание 1: Реализвать калькурятор с операциями *, /, +, -. 

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale>
#include "Fibanacci.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");  
    cout << "Hello world from Yuriy!" << endl;
       
    // Операции над двумя числами fFirst, fTwo, результат хранится в fResult
    float fFirst = 0, fTwo = 0;
    char cOperation;

    cout << "Home work 1. Calculator" << endl;
    cout << "Please input first number:";
    cin >> fFirst;
    cout << "Please input two number:";
    cin >> fTwo;

    cout << "Please imput type of operation: +, -, * or /?";
    cin >> cOperation;
    
    // Реализация вычисления в цикле
    switch(cOperation){
        case '+' : cout << "Result is :" << (fFirst + fTwo) << endl;
        break;

        case '-' : cout << "Result is :" << (fFirst - fTwo) << endl;
        break;

        case '*' : cout << "Result is :" << (fFirst * fTwo) << endl;
        break;

        case '/' : {
            while (fTwo == 0){
                cout << "Error, there is devide at 0!" << endl;
                cout << "Please input other number, which is no = 0 \n";
                cin >> fTwo;
            }
            cout << "Result is :" << (fFirst / fTwo) << endl;
        break;

        default : cout << "You didnt input correct symbol. \n";
        }
    }
    Fibanacci(); // проверка вызова функции Fibanacci() из файла Fibanacci.h
    system ("pause");
    return 0;
}
