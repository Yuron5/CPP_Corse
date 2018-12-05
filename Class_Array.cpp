
// ******************************************** //

// Dp. Eng. Yuriy Tarnopolskiy (c)
// Введение в C++ http://cppstudio.com/post/213/
// Практическая работа с указателями
// Реализация класса массива, который имеет методы:
// 1. Выведение в консоль массива
// 2. Добавление элемента в начало
// 3. Добавление элемента по индексу
// 4. Удаление элемента по индексу
// 5. Выбор выполняемой операции

// ******************************************** //

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Array{
private:
    
public:
    unsigned short size;
    int ptrarray[20];

    Array(unsigned short siz){ // конструктор класса
        size = 20; //size = siz;
    }
    void set(){
        //int *ptrarray = new int [size]; //динамическое выделение массива
        ptrarray[0] = 1; ptrarray[1] = 1;
        for(unsigned short i = 2; i <size; i++)
            ptrarray[i] = ptrarray[i-1] + ptrarray[i-2]; //инициализация массива числами Фибаначчи
    }
    void output(){
        cout << "Array contents : \n";
        for(unsigned short i = 0; i <size; i++)
            cout << ptrarray[i] << " ";
    }
    void addBegin(int nNew){
        for(unsigned short i = size +1; i > 1; i--)
            ptrarray[i] = ptrarray[i-1];
        ptrarray[0] = nNew;
    }
    void addEnd(int nNew){
        ptrarray[size +1] = nNew;
    }
    void addSymbol(int nNumber, int nNew){
        ptrarray[nNumber] = nNew;
    }
    void delSymbol(int nNumber){
        ptrarray[nNumber] = 0;
    }
    void delArray(){
        //    delete [] ptrarray;
    }
};
 
int main(){
    unsigned short siz;
    cout << "Please input array size more than 2 \n";
    cin >> siz;
    Array newArray = Array(siz); // объявление объекта и инициализация элементов данных
    newArray.set(); //инициализация массива
       
    cout << "This is exaple of Class realization. \n";
    
    int nChoice = 0;  int nNumber = 0; int cBeta = 0;

    cout << "You have next options: \n";
    cout << "1. Print the array \n";
    cout << "2. Add the symbol to the begin of the array \n";
    cout << "3. Add the symbol to the end of the array \n";
    cout << "4. Add the symbol at the nNamber of the array \n";
    cout << "5. Delete the symbol from the nNamber of the array \n";
    nChoice = getch();
    while (nChoice != 27) {
        switch(nChoice){
            case 49: newArray.output();
            break;

            case 50:{
                cout << "Please input the symbol: ";
                cin >> cBeta;
                newArray.addBegin(cBeta);
            }
            break;

            case 51:{
                cout << "Please input the symbol: ";
                cin >> cBeta;
                newArray.addEnd(cBeta);
            }
            break;

            case 52:{
                cout << "Please input the symbol and Number: ";
                cin >> cBeta >> nNumber;  
                newArray.addSymbol(nNumber, cBeta);          
            }
            break;

            case 53:{
                cout << "Please input the Number: ";
                cin >> nNumber;  
                newArray.delSymbol(nNumber);
            }
            break;
        }
        cout << "\n Please enter your choice: \n";
        nChoice = getch();
    }
    newArray.delArray();    
    return 0;
}