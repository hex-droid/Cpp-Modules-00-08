#include "Fixed.hpp"

/* int		main()
{
	Fixed		a;
	Fixed const	b(10);
	Fixed const c(2.42f);
	Fixed const d(b);
	Fixed const e(3.14f);
	Fixed const f(3.14f);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;  
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;  
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;  
	std::cout << "d is " << d.toInt() << " as integer" << std::endl; 
	std::cout << "a + b: " << a+b << std::endl;
	std::cout << "a + c: " << a+c << std::endl;
	std::cout << "b + d: " << b + d << std::endl; 

	std::cout << "a - b: " << a - b <<std::endl;
	std::cout << "a * b: " << a * b << std::endl;
	std::cout << "(e * c): " << (e * c) << std::endl;//
	std::cout << "(e * c) / b: " << (e * c) / b << std::endl;

	std::cout << "b < a: " << (b < a) << std::endl;
	std::cout << "b > a: " << (b > a) << std::endl;

	std::cout << "e >= f: " << (e >= f) << std::endl;
	std::cout << "c <= f: " << (c <= f) << std::endl; 

	std::cout << "e == f: " << (e == f) << std::endl;
	std::cout << "e != f: " << (e != f) << std::endl;

	std::cout << std::endl << "max(a, b): " << Fixed::max(a, b) << std::endl;
	std::cout << std::endl << "min(a, b): " << Fixed::min(a, b) << std::endl;
	std::cout << std::endl << "min(e, f): " << Fixed::min(e, f) << std::endl;


	return (0);
} */

/* int		main()
{
	Fixed	a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}
 */


int		main()
{
	Fixed a(2.5f);
	Fixed b(2.5f);

	std::cout << (a / b) << std::endl;

	return 0;	
}
