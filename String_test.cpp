// Тест на использование строк и векторов
// https://edabit.com/challenge/WmCeqpu5miZAtLk2z
// А также вывод чисел Фибаначчи для различных чисел
// Проерено подключение файлов xx.cpp xx.h
// В args: добавлено "Fibanacci2.cpp",

#include <iostream>
#include <conio.h>
#include "project/Fibanacci2.h"
using namespace std;

string doubleChar(char *pStr, int nLength) {
    string ret = "";
    cout << "pStr = " << pStr << " nLength" << nLength;
    for(int i= 0; i < nLength; i++)
        ret = ret + *(pStr + i) + *(pStr + i);  	    
    return ret;
}
//void Fibanacci2(int nAlfa, int nBeta, unsigned short nLength);

main()
{
    cout << "You can run next functions: \n";
    cout << "string doubleChar(char *pStr, int nLength) -- 1 \n";
    cout << "Fibanacci numbers row ver 2 -- 2 \n";
    short sChoice = 0;
    cin >> sChoice;
    switch(sChoice){
        case 1 : {
            cout << "Program string doubleChar(string str). \n Please input a string: ";
            string str ="";
            cin >> str;
            int nLen = str.length();
            //char *pStr = str[0];
            cout << "\n Double string is: " << doubleChar(&str[0], nLen) << endl;
        };
        break;

        case 2 : {
            int nAlfa, nBeta, nLength;
            int nExit = 0;
            while(nExit != 78 && nExit != 110 && nExit != 27){
                //cout << "Please input Fibanacci first, two numbers and Length \n";
                //cin >> nAlfa >> nBeta >> nLength;
                //cout << "nAlfa = " << nAlfa << " nBeta = " << nBeta << " nLength = " <<nLength;
                //Fibanacci2(nAlfa, nBeta, nLength);
                //cout << "\n Please type <Esc> to exit or any key to continue.";
                Fibanacci2(1, 2, 12);
                Fibanacci2(4, 6, 12);
                Fibanacci2(7, 11, 12);
                Fibanacci2(9, 15, 12);
                Fibanacci2(12, 19, 12);
                Fibanacci2(14, 23, 12);
                Fibanacci2(17, 28, 12);
                cout << "\n Continue ?";
                nExit = getch();
            }
        } 
        break;
    }
    return 0;
}