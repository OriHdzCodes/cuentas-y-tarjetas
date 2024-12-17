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
        Tarjeta(int,std::string,unsigned_int,int,std::string);

        void setcvv(int);

        int getcvv();
        std::string getNombre();
        unsigned_int getNum_tarjeta() const; 
        int getVencimiento();
        std::string getTipo();

        std::string to_string();


};
