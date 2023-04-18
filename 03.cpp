#include <iostream>
#include <cstdint>

class TCar {
  public:
    double x, v, p;
    uint8_t P;
    TCar();
    TCar(double aX, double aV, double aP);
};

TCar::TCar() {
  x = 2;
  v = 5;
  p = 7;
}

TCar::TCar(double aX, double aV, double aP) {
  x = aX;
  v = aV;
  p = aP;
}

int main() 
{
   using namespace std;
   TCar car;
   TCar car2(5, 10, 15);
   std::cout << "car.x = " << car.x << std::endl;
   std::cout << "car.v = " << car.v << std::endl;
   std::cout << "car.p = " << car.p << std::endl;
   std::cout << car2.x << std::endl;
   std::cout << car2.v << std::endl;
   std::cout << car2.p << std::endl;
   return 0;
}
