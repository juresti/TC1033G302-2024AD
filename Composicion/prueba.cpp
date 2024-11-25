#include "Lampara.hpp"
#include "Foco.hpp"
#include "Apagador.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "***** Pruebas de la clase Foco *****\n";
    Foco focoDef {};
    Foco focoComp {100,"Verde"};

    cout << "Datos foco default: " << focoDef.getLuminosidad() <<
        ", " << focoDef.getColor() << endl;

    cout << "Datos foco completo: " << focoComp.getLuminosidad() <<
        ", " << focoComp.getColor() << endl;
            
    cout << "\n***** Pruebas de la clase Apagador ****\n";
    Apagador miApaga {};
    cout << miApaga.isEncendido() << endl;
    miApaga.encender();
    cout << miApaga.isEncendido() << endl;
    miApaga.apagar();
    cout << miApaga.isEncendido() << endl;

    cout << "\n***** Pruebas de la clase Lampara *****\n";
    Lampara lampDef {};
    Lampara lampDos {"Morada",999.99};

    cout << "Lampara default color " << lampDef.getColor() << endl;
    cout << "Lampara dos costo " << lampDos.getCosto() << endl;

    lampDos.setCosto(799.99);
    cout << "Lampara dos costo " << lampDos.getCosto() << endl;

    cout << lampDef.isEncendida() << endl;
    lampDef.encender();
    cout << lampDef.isEncendida() << endl;
    lampDef.apagar();
    cout << lampDef.isEncendida() << endl;

    lampDos.cambiarFoco(5,"Cyan");
    cout << "Lampara dos ahora tiene un foco color " << lampDos.colorFoco() <<
        " y de luminosidad " << lampDos.luminosidadFoco() << endl;


    return 0;
}

