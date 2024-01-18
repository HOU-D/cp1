#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class   Zombie
{
    private:

        std::string  name;

    public:

        Zombie();
        void    announce( void );
        Zombie* zombieHorde( int N, std::string name );
        ~Zombie();
};
#endif