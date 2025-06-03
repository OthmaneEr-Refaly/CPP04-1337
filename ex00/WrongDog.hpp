#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
    public:
        WrongDog();
        WrongDog(WrongDog const &copy);
        ~WrongDog();

        WrongDog& operator= (const WrongDog &src);
        void	makeSound(void) const;
};

#endif