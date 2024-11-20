#include "Lampara.hpp"

Lampara::Lampara() : color{"Rosa"}, costo{199.99},
                    foco{Foco{25,"Transparente"}},
                    apagador{Apagador{}} {}

Lampara::Lampara(std::string col,float cos) : color{col},costo{cos},
                                            foco{Foco{}},
                                            apagador{Apagador{}} {}


    std::string getColor();
    float getCosto();
    void setCosto(float c);

    std::string Lampara::encender(){
        apagador.encender();
        return "La lampara se enciende";
    }

    std::string apagar();
    bool Lampara::isEncendida(){
        return apagador.isEncendido();
    }

    std::string Lampara::cambiarFoco(int l,std::string c){
        Foco nuevo{l,c};
        foco = nuevo;
        return "Se cambio el foco";
    }
    std::string colorFoco();
    int luminosidadFoco();