#ifndef APAGADOR_HPP
#define APAGADOR_HPP

class Apagador{
private:
    bool encendido;
public:
    Apagador();

    void encender();
    void apagar();
    bool isEncendido();
};

#endif
