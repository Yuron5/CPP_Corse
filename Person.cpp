
// ******************************************** //

// Dp. Eng. Yuriy Tarnopolskiy (c)
// Введение в C++ http://cppstudio.com/post/213/
// Практическая работа с указателями
// Реализация класса массива Person, который описывает персоны.
// Свойства персоны: имя и возраст.

//  методы:
// 1. Выведение в консоль имени
// 2. Добавление символа в начало имени
// 3. Добавление элемента по индексу в имени
// 4. Удаление элемента по индексу в имени
// 5. Выбор выполняемой операции

// ******************************************** //


#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    int day, // день
        month, // месяц
        year; // год
public:
    string name;
    int age;

    Person(string nam, int ag){ // конструктор класса
        name = nam; age = ag;
    }

    void output(){
        cout << name << endl;
    }
    void addBegin(char cNew){
        name = cNew + name;
        cout << name << endl;
    }
    void addEnd(char cNew){
        name = name + cNew;
        cout << name << endl;
    }
    void addSymbol(int nNumber, char cNew){
        name[nNumber] = cNew;
        cout << name << endl;
    }
    void delSymbol(int nNumber){
        name[nNumber] = ' ';
        cout << name << endl;
    }
    void setDate(int date_day, int date_month, int date_year) // установка даты в формате дд.мм.гг
    {
        day   = date_day; // инициализация день
        month = date_month; // инициализация месяц
        year  = date_year; // инициализация год
    }
    void getDate() // отобразить текущую дату
    {
        cout << "Date: " << day << "." << month << "." << year << endl;
    }
};
 
int main(){
    Person student = Person("First", 18); // объявление объекта и инициализация элементов данных
    
    cout << "This is exaple of Class realization. \n" << "Please input the Name: ";
    cin >> student.name;
    student.age = 42;
    int nChoice;
    int nNumber;
    char cBeta;
    cout << "You have next options: \n";
    cout << "1. Print the name \n";
    cout << "2. Add the symbol to the begin of name \n";
    cout << "3. Add the symbol to the end of name \n";
    cout << "4. Add the symbol at the nNamber of name \n";
    cout << "5. Delete the symbol from the nNamber of name \n";
    cin >> nChoice;
    switch(nChoice){
        case 1: student.output();
        break;

        case 2:{
            cout << "Please input the symbol: ";
            cin >> cBeta;
            student.addBegin(cBeta);
        }
        break;

        case 3:{
            cout << "Please input the symbol: ";
            cin >> cBeta;
            student.addEnd(cBeta);
        }
        break;

        case 4:{
            cout << "Please input the symbol and Number: ";
            cin >> cBeta >> nNumber;  
            student.addSymbol(nNumber, cBeta);          
        }
        break;

        case 5:{
            cout << "Please input the Number: ";
            cin >> nNumber;  
            student.delSymbol(nNumber);
        }
        break;
    }    
    return 0;
}