#ifndef CLASSSTREAM_HPP
# define CLASSSTREAM_HPP

# include <iostream>
# include <fstream>
# include <string> 

class Stream
{
    private:
            std::string _fileName;

    public:
            Stream(std::string fileName);
            ~Stream();

            bool    file_is_exist(std::string fileName);
            bool    str_is_empty(std::string s1, std::string s2);
            bool    replace(std::string s1, std::string s2);


};

#endif