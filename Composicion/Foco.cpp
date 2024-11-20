#include "Foco.hpp"

Foco::Foco() : luminosidad{60},color{"Blanco"} {}
Foco::Foco(int l,std::string c) : luminosidad{l},color{c} {}
    
int Foco::getLuminosidad() {return luminosidad;}
std::string Foco::getColor() {return color;}
