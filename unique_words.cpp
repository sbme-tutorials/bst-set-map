#include "set.hpp"
#include "helpers.hpp"


int main( int argc, char **argv )
{
    if( argc == 2 )
    {
        std::vector< std::string > words = getFileWords( argv[1] );
        std::cout << words.size() << std::endl;

        set::BSTNode *wordSet = nullptr;

        for( std::string &word : words )
            set::add( wordSet , word );

        std::cout << set::size( wordSet ) << std::endl;
        set::printAll( wordSet );
    }

    return 0;
}