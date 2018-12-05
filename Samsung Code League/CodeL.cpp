#include <iostream>
#include "stdio.h"


int main()
{
    unsigned int nStock, mReq, accum;
    unsigned int counter, counter2;

    std::cin >> nStock; 
    unsigned int serNum [nStock];  // array of serial numbers
    for(counter= 0; counter < nStock; counter++)
        std::cin >> serNum[counter];

   std::cin >> mReq; // quatity of requested ser numbers
    unsigned int serNumReq [mReq];
    for(counter= 0; counter < mReq; counter++)
        std::cin >> serNumReq[counter];
    
    for(counter= 0; counter < mReq; counter++){
        accum = 0;
        for(counter2= 0; counter2 < nStock; counter2++)
            if (serNumReq[counter] == serNum[counter2])
                accum++;
        std::cout << accum << ' ';
    }    
    return 0;
}