#include "Foco.hpp"
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
            
    return 0;
}

