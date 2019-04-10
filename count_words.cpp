#include "map.hpp"
#include <map>
#include <iostream>
#include "helpers.hpp"


int main( int argc, char **argv )
{
    if( argc == 2 )
    {
        std::vector< std::string > words = getFileWords( argv[1] );

        // Replace the `std::map` with your own dictionary that maps words to integers.
        std::map< std::string, int > wordMap;

        for( std::string &word : words )
        {
            // Use `workMap.value( word )++` instead
            wordMap[ word ]++;
        }

        // Replace the for with `map::printAll( wordMap );`
        for( auto &[k,v] : wordMap )
            std::cout << k << ":" << v << std::endl;
    }

    return 0;
}