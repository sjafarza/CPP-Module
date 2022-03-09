#include "../inc/ClassStream.hpp"

Stream::Stream(std::string fileName)
{
    this->_fileName = fileName;
}

Stream::~Stream()
{

}

bool    Stream::file_is_exist(std::ifstream& fileName)
{
    if (fileName.is_open())
        return (true);
    return (false);
}

bool    Stream::str_is_empty(std::string s1, std::string s2)
{
    if (s1.empty() || s2.empty())
            return (true);
    return (false);
}

void    Stream::replace(std::string s1, std::string s2)
{
    std::string     newFile = _fileName;
    std::ifstream   filestream(_fileName);
    std::string     line;
    size_t          pos;
    int             i = -1;

       newFile += ".replace";
    std::ofstream   outfile(newFile);
    while (getline(filestream, line))
    {
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();

        }
        pos = 0;
        outfile << line << std::endl;
    }
    outfile.close();
    filestream.close();
}