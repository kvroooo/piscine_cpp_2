#include "Base.hpp"

Base *	generate(void)
{
	Base *b = NULL;;
	std::srand(std::time(0));
	int	r = std::rand() % 3;

	switch (r)
	{
	case 0:
		b = new A;
		std::cout << "A" << std::endl;
		break;
	case 1:
		b = new B;
		std::cout << "B" << std::endl;
		break;
	case 2:
		b = new C;
		std::cout << "C" << std::endl;
		break;
	default :
		std::cout << "huh ._." << std::endl;
	}
	return b;
}

void 	identify(Base *p)
{
	A * a = dynamic_cast<A *>(p);
	B * b = dynamic_cast<B *>(p);
	C * c = dynamic_cast<C *>(p);

	if (a)
		std::cout << "object type = A" << std::endl;
	else if (b)
		std::cout << "object type = B" << std::endl;
	else if (c)
		std::cout << "object type = C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A &test = dynamic_cast<A &>(p);
		(void)test;
		std::cout << "object type : A" << std::endl;
		return ;		
	}catch(std::exception & e){}

	try
	{
		B &test = dynamic_cast<B &>(p);
		(void)test;
		std::cout << "object type : B" << std::endl;
		return ;		
	}catch(std::exception & e){}

	try
	{
		C &test = dynamic_cast<C &>(p);
		(void)test;
		std::cout << "object type : C" << std::endl;
		return ;		
	}catch(std::exception & e){}
}
int	main(void)
{
	Base *a = generate();
	identify(a);
	delete a;

	// Base *b = generate();
	// identify(*b);
	// delete b;
	return (0);
}
