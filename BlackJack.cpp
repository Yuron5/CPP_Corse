// Dp. Eng. Yuriy Tarnopolskiy (c)
//Реализация карточной игры "Очко" или BlackJack.
//Используется функция генерации случайных чисел rand(), которая возвращает число
// от 0 до 65 536. 

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

using namespace std;

short CardValue(short sNumber){
    if (sNumber<3){ 
        return sNumber + 2;
    }
    return sNumber + 3;
}

main(){
    setlocale(LC_ALL, "Rus");

    cout << "Card game BlackJack ver 1. \n"; //Карточная игра
    cout << "Please type any key to continue... \n"; //Нажмите любую клавишу для продолжения
    getch();  // Получить любой символ
    system("cls");
    
    //sMast -масть карты Пика, Крест, Бубна, Черви. = 0...3. 
    //sNumber - порядковый номер карты : от 6 до 10.
    // Валет =3, Дама =4, Король =5, Туз =11. Всего 9 номеров.
    // sAccumulator - сума карт игрока.
    short sMast = 0, sNumber = 1, sAccumulator = 0;  

    srand(time(0)); // генератор случ чисел на основе функции времени

    // массив строк, который содержит названия карт
    string szNames[10] = {" Valet", " Dama", " Korol", " 6", " 7", " 8", " 9", " 10", " Tuz", " Error"};

    // массив строк, который содержит названия мастей 
    string szMast[4] = {" Pika", " Krest", " Bubna", " Cherva"};

    int nExit = 0;
    while(nExit != 78 && nExit != 110 && nExit != 27){ //цикл выполняется до нажатия n, N, <Esc>. 
        while (nExit != 27) {  // 27 - это код <Esc>.
            sNumber = rand()% 9;
            sMast = rand()% 4;

            cout << szNames[sNumber] << szMast [sMast] << ", Card Value = " << CardValue(sNumber) << endl;
            sAccumulator = sAccumulator + CardValue(sNumber);
            cout << "Cards amount = " << sAccumulator;

            if (sAccumulator == 21){ 
                cout << "\n Congratulations!! You are WINNER!! \n"; 
                break;
            }

            if(sAccumulator > 21){
                cout << "\n You are lost your chance.\n";
                break;
            }
            
            cout << "\n Please type <Esc> to exit or any keys to take other card.";
            nExit = getch();
            system("cls");
        }
        cout << "Total amount of cards = " << sAccumulator; 

        cout << "\n Type any key to try again or <Esc> to Exit!!\n";
        nExit = getch();
        system("cls");
        sAccumulator = 0; // Обнуление счетчика для нового цикла       
    }
    return 0;
}
