#include "Class.hpp"

void	Class::parseLine(void)
{
	std::ifstream	ifs(_filename.c_str());
	std::string		buffer;
	while (std::getline(ifs, buffer))
	{
		line.append(buffer);
		line.append("\n");
	}
	if (line.length() > 0)
		line.erase(line.length() - 1, 1);//
	ifs.close();
}

void	Class::searchReplace(void)
{
	for (int i = 0; line[i]; i++)
	{
		if (line[i] == _s1[0])
		{
			if (!_s1.compare(line.substr(i, _s1.length())))
			{
				std::string	tmp1 = line.substr(0, i);
				std::string	tmp2 = line.substr(i + _s1.length(), line.length());
				tmp1.append(_s2);
				tmp1.append(tmp2);
				line.clear();
				line = tmp1;
			}
		}
	}
}
void	Class::ofsWrite(void)
{
	std::ofstream ofs(_filename.c_str());
	ofs << line;
	ofs.close();
}