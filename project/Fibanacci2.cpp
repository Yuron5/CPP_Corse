//  Практические занятия по Курсу "С++ Базовый" в УЦ АйТи Столица
//  Дата начала: 24 сентября 2018 г.
//  Тема 1 и 2: Циклы, Ссылки, массивы ,строки.
//  Доиашнее задание 2: РАсчет чисел Фибоначчи

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <clocale>

void Fibanacci2(int nAlfa, int nBeta, int nLength)
{
    using namespace std;
    
    int nGamma; //Следующее число после nAlfa nBeta
    // Вывод ряда чисел Фибоначчи
    
    cout << "\n" << nAlfa << "\t" << nBeta << "\t"; //"\n Fibanacci numbers row  \n" << 
    
    for(int i = 2; i < nLength; i++){
        nGamma = nAlfa + nBeta; //Следующее число после nAlfa nBeta
        cout << nGamma << "\t";
        nAlfa = nBeta;
        nBeta = nGamma;
    }
    // Вывод на экран последовательности  
}