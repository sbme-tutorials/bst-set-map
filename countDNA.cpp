#include "map.hpp"
#include <map>
#include <iostream>
#include "helpers.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        std::string dna = getFileFirstLine(argv[1]);

        // Replace the `std::map` with your own dictionary that maps chars to integers.
        std::map<char, int> dnaCounter;

        for ( char &c : dna )
        {
            // Use `dnaCounter.value( c )++` instead
            dnaCounter[c]++;
        }

        // Replace the for with `map::printAll( dnaCounter );`
        for (auto &[k, v] : dnaCounter)
            std::cout << k << ":" << v << std::endl;
    }

    return 0;
}