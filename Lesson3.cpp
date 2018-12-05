// Dp. Eng. Yuriy Tarnopolskiy (c)
// Введение в C++ http://cppstudio.com/post/213/
// Практическая работа с указателями

#include <iostream>
#include <time.h>

using namespace std;
 
int main()
{
    srand(time(0));

    int nAlfa = rand()% 255;

    //присваивание значения одного указателя другому

    int *pnAlfa = &nAlfa;
    int *pnBeta;
      
    *pnBeta = rand()% 255;
      
    cout << "\n Value of pointer pnAlfa: " << pnAlfa;  
    cout << "\t Value of pointer pnBeta: " << pnBeta;  
    cout << "\t Value of variable nAlfa: " << nAlfa;  

    pnAlfa++;
    cout << "\n Value of pointer pnAlfa++: " << pnAlfa; 
    cout << "\t Value at pointer pnAlfa: " << *pnAlfa;
    //cout << "Address of pointer pnAlfa: " << &pnAlfa << endl; не работает 
    //cout << "Address of pointer pnBeta: " << &pnBeta << endl; не работает
     
    return 0;
}