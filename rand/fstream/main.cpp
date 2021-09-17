#include <iostream>
#include <fstream>

int		main()
{
	std::ifstream	ifs("inFile");
	std::string		buffer;

	std::getline(ifs, buffer);
	std::cout << "buffer: " << buffer << std::endl;
 	ifs.close();

	std::ofstream	ofs("Output.txt");
	ofs << "Writng to output.txt" << std::endl;
	ofs.close();
}