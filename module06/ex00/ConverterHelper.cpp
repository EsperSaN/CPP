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

bool    ConverterHelper::isSuffix(std::string   &str,    std::string suffix)
{
	std::cout << "check btw " << str << " and  " << suffix << std::endl;
    if(str.length() >= suffix.length())
    {
		if (str.rfind(suffix) == std::string::npos || str.rfind(suffix) != (str.length() - suffix.length()))
        	return (false);
		else
			return (true);
    }
	return (false);
}

bool	ConverterHelper::isNumber(std::string	str)
{
	if (str.empty())
		return (false);
  if (ConverterHelper::isSuffix(str, ".f") == true)
      str = str.substr(0, str.length() - 2);

  std::cout << "check for >> " << str << std::endl;
  for (size_t i = 0; i < str.length(); i++)
  {
    if (false == std::isdigit(str[i]))
        return (false);
  }
  return (true);
		
}
// int ConverterHelper::defineTypeFromString(std::string    str)
// {
    
// }
