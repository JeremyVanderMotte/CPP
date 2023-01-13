#include "Perform.hpp"

void	replace(std::string *line, std::string s1, std::string s2)
{
	size_t pos = 0;

	pos = (*line).find(s1);
	while (pos != std::string::npos)
	{
		(*line).erase(pos, s1.length());
		(*line).insert(pos, s2);
		pos = (*line).find(s1);
	}
}

int	perform(std::string file, std::string s1, std::string s2)
{
	std::string	toAdd;
	std::string out_file = file;
	out_file.append(".replace");
	
	std::ifstream ifs(file.c_str());
	if (!ifs.is_open())
	{
		std::cout << "Impossible to open the intput file" << std::endl;
		return (0);
	}
	std::ofstream ofs(out_file.c_str());
	if (!ofs.is_open())
	{
		std::cout << "Impossible to open the output file" << std::endl;
		ifs.close();
		return (0);
	}
	while (std::getline(ifs, toAdd))
	{
		if (s1.compare(s2))
			replace(&toAdd, s1, s2);
		ofs << toAdd;
		if (!ifs.eof())
			ofs << '\n';
	}
	ifs.close();
	ofs.close();
	return (1);
}