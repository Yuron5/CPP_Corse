#include <iostream>
#include "stdio.h"


int main()
{
    unsigned short clientNum, i, j, a; // number of Clients
    std::cin >> clientNum;
    unsigned short stayTime[2][500], arr[2][1]; // time of stay at Shop for each Client
    
    // input array initialization
    for( i = 0; i < clientNum; i++){
        std::cin >> stayTime[0][i];
        std::cin >> stayTime[1][i];
    }

    // elements sorting by staing duration
    for (a = 0; a < clientNum -1; a++){ 
        for( i = (a +1); i <= clientNum; i++){
            if((stayTime[1][i]-stayTime[0][i]) > (stayTime[1][a]-stayTime[0][a])){
                arr[0][0] = stayTime[0][a]; arr[1][0] = stayTime[1][a];
                stayTime[0][a] = stayTime[0][i]; stayTime[1][a] = stayTime[1][i];
                stayTime[0][i] = arr[0][0]; stayTime[1][i] = arr[1][0];
            } 
        }    
    }
    for( i = 0; i < clientNum; i++)
        std::cout << stayTime [1][i] - stayTime [0][i]<< ' '; 
        system("pause");
   return 0; 
}