#include <iostream>
#include <stdexcept>
#include <string>
#include <sstream>

/*void error(std::string er){
    throw std::runtime_error(er);
}*/
//have it exit the program after each error

struct Exit : std::runtime_error {
	Exit() : std::runtime_error("Exit") {}
};

// error() simply disguises throws:
inline void error(const std::string& s)
{
	throw std::runtime_error(s);
}

inline void error(const std::string& s, const std::string& s2)
{
	error(s + s2);
}

inline void error(const std::string& s, int i)
{
	std::ostringstream os;
	os << s << ": " << i;
	error(os.str());
}
