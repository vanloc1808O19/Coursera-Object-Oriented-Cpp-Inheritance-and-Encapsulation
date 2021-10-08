#include <iostream>
#include <vector>
using namespace std;

//DO NOT EDIT/////////////////////////////////
class Vehicle {                             //
  public:                                   //
    virtual void Distance(double time) = 0; //
};                                          //
//////////////////////////////////////////////

//add class definitions below this line

class Airplane: public Vehicle {
private:
    double speed;

public:
    Airplane(double s) {
        this->speed = s;
    }

    void Distance(double time) {
        cout << speed * time << "\n";
    }
};

//add class definitions above this line

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