#include "tarjeta.cpp"

class Cuenta{
    private:
        std::string servicio;
        std::string usuario;
        std::string contra;
        Tarjeta tarjeta;

    public:
        Cuenta();
        Cuenta(std::string, std::string,std::string, Tarjeta);

        void setServicio (std::string);
        void setUsuario(std::string);
        void setContra(std::string);
        void setTarjeta (Tarjeta);

        std::string getUsuario();
        std::string getContra();
        Tarjeta getTarjeta();

        std::string to_string();

};