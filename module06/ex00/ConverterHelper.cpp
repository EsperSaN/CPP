#include "ConverterHelper.hpp"

std::string ConverterHelper::stringTrim(std::string str)
{
	std::string toTrim;
	std::size_t frontTrimIndex;
	std::size_t backTrimIndex;
	std::string trimmedString;
	
	toTrim.assign(" \t");
	frontTrimIndex = str.find_first_not_of(toTrim);
	backTrimIndex = str.find_last_not_of(toTrim);
	if (frontTrimIndex == std::string::npos || backTrimIndex == std::string::npos)
		return ("");
	trimmedString = str.substr(frontTrimIndex, (backTrimIndex - frontTrimIndex) + 1);
	return (trimmedString);
}

bool    ConverterHelper::isSuffix(std::string   &str,    std::string &suffix)
{
    if(str.length() >= suffix.length())
    {
        return ()
    }
}

int ConverterHelper::defineTypeFromString(std::string    str)
{
    
}
