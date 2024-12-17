#include <string>

class Tarjeta{
    private:
        int cvv;
        std::string nombre;
        unsigned_int num_tarjeta;
        int vencimiento;
        std::string tipo;

    public:
        Tarjeta();
        Tarjeta(int,std::string,int,int,std::string);

        void setcvv(int);

        int getcvv();
        std::string getNombre();
        int getNum_tarjeta() const; //cambie
        int getVencimiento();
        std::string getTipo();

        std::string to_string();


};
