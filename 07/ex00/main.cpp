#include "whatever.hpp"

int		main()
{
	int a=10,b=10;
	char c='c',d='d';

	std::cout << max<int>(a, b) << std::endl;
	std::cout << min<int>(a, b) << std::endl;
	
	swap<int>(a, b);
	std::cout << a << " " << b << std::endl;

	swap<char>(c, d);
	std::cout << c << " " << d << std::endl;
	return 0;
}

//int main(void) {int a = 2;int b = 3;::swap( a, b );std::cout << "a = " << a << ", b = " << b << std::endl;std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;std::string c = "chaine1";std::string d = "chaine2";::swap(c, d);std::cout << "c = " << c << ", d = " << d << std::endl;std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;return 0;}