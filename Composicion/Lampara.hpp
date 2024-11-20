#ifndef LAMPARA_HPP
#define LAMPARA_HPP

#include "Foco.hpp"
#include "Apagador.hpp"
#include <string>

class Lampara{
private:
    std::string color;
    float costo;
    Foco foco;
    Apagador apagador;
public:
    Lampara();
    Lampara(std::string col,float cos);

    std::string getColor();
    float getCosto();
    void setCosto(float c);

    std::string encender();
    std::string apagar();
    bool isEncendida();

    std::string cambiarFoco(int l,std::string c);
    std::string colorFoco();
    int luminosidadFoco();
};

#endif
