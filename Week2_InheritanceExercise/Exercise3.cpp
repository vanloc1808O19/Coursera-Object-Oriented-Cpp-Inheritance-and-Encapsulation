#include <iostream>
using namespace std;

//DO NOT EDIT code below this line

class Parent1 {
  public:
    string Identify() {
      return "This function is called from Parent1";
    }
};

class Parent2 : public Parent1 {
  public:
    string Identify() {
      return "This function is called from Parent2";
    }
};

//DO NOT EDIT code above this line

//add class definitions below this line

class Child : public Parent2 {
public:
    string Identify() {
        return "This function is called from Child";
    }    

    string Identify2() {
        return this->Parent2::Identify();
    }

    string Identify3() {
        return this->Parent1::Identify();
    }
};

//add class definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  Child c;
  cout << c.Identify() << endl;
  cout << c.Identify2() << endl;
  cout << c.Identify3() << endl;
  
  //DO NOT EDIT code above this line
  
  return 0;
  
}