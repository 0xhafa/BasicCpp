

#include <iostream>
#include <ctime>
#include <string>

int main()
{
    ///*
    unsigned int start = clock();
    std::cout << "waiting for keyhit";
    std::cin.ignore();
    double timeTaken = clock() - start;
    std::cout << "Time taken in secs: " << timeTaken / 1000;
    return 0;
    //*/
}
