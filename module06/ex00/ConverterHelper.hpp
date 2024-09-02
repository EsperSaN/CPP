#ifndef CONVERTERHELPER_H
#define CONVERTERHELPER_H

#include    <iostream>
#include    <cctype>
enum    type {
    CHAR    = 0,
    INT,
    STR,
    FLOAT,
    DOUBLE,
    INFF,
    INF,
    NAN
};

class   ConverterHelper{
    public :
        //static  int defineTypeFromString(std::string   str);
        static  bool        isNumber(std::string    str);
        static  std::string stringTrim(std::string  str);
        static  bool        isSuffix(std::string    &str,    std::string suffix);
};
#endif
