#include <iostream>
#include <vector>
#include <string>
#include "Printer.h"
#include "Printer2D.h"
#include "Printer3D.h"
#include "Scanner.h"
#include "Copier.h"

int main(int argc, char *args[])
{
    std::vector<Printer *> printers;
    Printer2D printer2D1(10, 10);
    Printer2D printer2D2(20, 10);
    Printer2D printer2D3(30, 20);
    Printer3D printer3D1(10, 10, 10);
    Printer3D printer3D2(20, 10, 10);
    Copier copier1(10, 10, 10);
    printers.push_back(&printer2D1);
    printers.push_back(&printer2D2);
    printers.push_back(&printer2D3);
    printers.push_back(&printer3D1);
    printers.push_back(&printer3D2);
    printers.push_back(&copier1);
    for (int i = 0; i < printers.size(); ++i) {
        printers[i]->print();
    }

    std::cout << std::endl;
    std::vector<Scanner *> scanners;
    Scanner scanner1(10);
    Scanner scanner2(20);
    Copier copier2(10, 10, 10);
    Copier copier3(20, 20, 20);
    scanners.push_back(&scanner1);
    scanners.push_back(&scanner2);
    scanners.push_back(&copier2);
    scanners.push_back(&copier3);
    for (int j = 0; j < scanners.size(); ++j) {
        scanners[j]->scan();
    }

    // Create a vector that holds Printer* objects
    // Fill the vector with 3 Printer2D, 2 Printer3D and 1 copier.
    // Iterate through the vector and invoke print function on all of them.

    // Create a vector that holds Scanner* objects
    // Fill the vector with 2 Scanner and 2 Copier objects.
    // Iterate through the vector and invoke scan function on all of them

    // Create a Copier object and invoke copy function on it.
}