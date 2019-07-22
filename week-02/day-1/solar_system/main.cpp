#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> putSaturn(std::vector<std::string>& planets)
{
    planets.insert(planets.begin()+5, "Saturn");
    return planets;
 //   auto it = planets.insert(planets.begin(), "Uranus");
//planets.insert(5, "Uranus");
}

int main(int argc, char* args[])
{
    std::vector<std::string> planets = {"Mercury","Venus","Earth","Mars","Jupiter","Uranus","Neptune"};

    // Saturn is missing from the planetList
    // Insert it into the correct position
    // Create a method called putSaturn() which has list parameter and returns the correct list.

    // Expected output: Mercury Venus Earth Mars Jupiter Saturn Uranus Neptune
    std::vector<std::string> correctPlanets = putSaturn(planets);

    for(int i = 0; i < correctPlanets.size(); ++i) {
        std::cout << correctPlanets[i] << " ";
    }

    return 0;
}