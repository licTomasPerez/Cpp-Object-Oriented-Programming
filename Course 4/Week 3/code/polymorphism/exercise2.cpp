#include <iostream>
#include <vector>
using namespace std;

//DO NOT EDIT/////////////////////////////////
class Vehicle {                             //
  public:                                   //
    virtual void Distance(double time) = 0; //
};                                          //
//////////////////////////////////////////////

class Airplane : public Vehicle {
  public:
    Airplane(double s) {
      speed = s;
    }
  
    void Distance(double t) {
      cout << speed * t << endl;
    }
    
  private:
    double speed;
};


int main() {
  
  //DO NOT EDIT code below this line
  
  Airplane a(550.0);
  a.Distance(2);
  a.Distance(3.15);
  a.Distance(10.63);
  Airplane a2(228.5);
  a2.Distance(2);
  a2.Distance(3.15);
  a2.Distance(10.63);

  //DO NOT EDIT code above this line
  
  return 0;
  
}