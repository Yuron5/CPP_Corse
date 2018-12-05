//  Практические занятия по Курсу "С++ Базовый" в УЦ АйТи Столица
//  Дата начала: 24 сентября 2018 г.
//  Тема 1 и 2: Циклы, Ссылки, массивы ,строки.
//  Доиашнее задание 2: РАсчет чисел Фибоначчи

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <clocale>

void Fibanacci(void)
{
    using namespace std;
    
    int nSize = 0;
    int nFibanacci[50]; // массив из 50 элементов
    cout << "Please input size of Fibonacci array less then 50!!: ";
    cin >> nSize;

    // Заполнение массива
    
    nFibanacci[0] = 1;
    nFibanacci[1] = 1;

    for(int i = 2; i < nSize; i++)
        nFibanacci[i] = nFibanacci[i-1] + nFibanacci [i-2];
        
    // Вывод на экран последовательности

    for(int i = 0; i < nSize; i++)
        cout << nFibanacci[i] << "\t";
    cout << endl;   
}