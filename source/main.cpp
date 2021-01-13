#include <CVector2.hpp>

#include <iostream>
#include <cstdlib>
#include <time.h>


int main()
{
    srand(time(NULL));
    CVector2 v1 = CVector2::getRandom(10, 90);
    
    std::cout << v1.x << "\n";
    std::cout << v1.y << "\n";
    
}
