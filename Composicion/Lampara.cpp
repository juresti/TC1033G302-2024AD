#include "Lampara.hpp"

Lampara::Lampara() : color{"Rosa"}, costo{199.99},
                    foco{Foco{25,"Transparente"}},
                    apagador{Apagador{}} {}

Lampara::Lampara(std::string col,float cos) : color{col},costo{cos},
                                            foco{Foco{}},
                                            apagador{Apagador{}} {}


std::string Lampara::getColor() {return color;}
float Lampara::getCosto() {return costo;}
void Lampara::setCosto(float c){costo = c;}

std::string Lampara::encender(){
    apagador.encender();
    return "La lampara se enciende";
}

std::string Lampara::apagar(){
    if (apagador.isEncendido()){
        apagador.apagar();
        return "La lampara se ha apagado";
    } else {
        return "Ya esta apagada la lampara";
    }
}

bool Lampara::isEncendida(){
    return apagador.isEncendido();
}

std::string Lampara::cambiarFoco(int l,std::string c){
    Foco nuevo{l,c};
    foco = nuevo;
    return "Se cambio el foco";
}

std::string Lampara::colorFoco(){
    return foco.getColor();
}

int Lampara::luminosidadFoco(){
    return foco.getLuminosidad();
}
