// Подсчет количества слов в строке
// https://edabit.com/challenge/2RZXNLZMNMnGtS5d5

#include <iostream>
#include <conio.h>
#include <cstdio>
#include <cstring>
using namespace std;

int countWords(std::string str) {
	int count = 1;
	for(char i : str)
		if(i == ' ')
			count++;
	return count;
}

main()
{
    char sNew[] = "";
    char sNew[8] = "Hello!!";
    cout << "Please input new string with spaces \n";
    gets(sNew);
    string str = sNew;
    cout << "\n count of words = " << countWords(str) <<endl; 
    system("pause");
    return 0;
} 