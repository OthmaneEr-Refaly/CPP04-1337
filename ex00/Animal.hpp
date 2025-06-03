#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

// A virtual function is a function in a base class that can be overridden in a derived class, 
// and when you call it through a pointer or reference to the base, it will call the derived version.

// Polymorphism = "many forms" → In C++, it means that a base class pointer or reference can 
// point to different derived class objects, and automatically call the correct function.

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal &copy);
		virtual ~Animal();//new thing to be untrduced upon 
		Animal& operator= (const Animal &src);
		
		std::string	getType(void) const;
		virtual void	makeSound(void) const;
};


# endif