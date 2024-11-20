#ifndef FOCO_HPP
#define FOCO_HPP

#include <string>

class Foco{
private:
    int luminosidad;
    std::string color;
public:
    Foco();
    Foco(int l,std::string c);
    
    int getLuminosidad();
    std::string getColor();
};

#endif
