#include <iostream>
#include "Aircrafts.h"
#include "F16.h"
#include "F35.h"
#include "Carrier.h"

int main()
{
    F16 f16a;
    F16 f16b;
    F16 f16c;
    F35 f35a;
    F35 f35b;
    F35 f35c;


    Carrier carrier1(19, 50);
    carrier1.addAircraft(f16a);
    carrier1.addAircraft(f16b);
    carrier1.addAircraft(f35a);
    carrier1.fill();

    Carrier carrier2(40, 50);
    carrier2.addAircraft(f16c);
    carrier2.addAircraft(f35b);
    carrier2.addAircraft(f35c);
    carrier2.fill();

    std::cout << carrier1.getStatus() << std::endl;
    std::cout << carrier2.getStatus() << std::endl;
    carrier2.fight(carrier1);
    carrier1.fight(carrier2);
    std::cout << carrier1.getStatus() << std::endl;
    std::cout << carrier2.getStatus() << std::endl;

    std::cout << f16a.getStatus() << std::endl;

    return 0;
}