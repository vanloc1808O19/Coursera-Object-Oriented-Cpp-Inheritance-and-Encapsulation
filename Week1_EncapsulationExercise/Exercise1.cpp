#include <iostream>
#include <string>
using namespace std;

//add class definitions below this line

class Fruit {
private:
    string name;
    string color;

public:
    Fruit() {
        this->name = "";
        this->color = "";
    }

    Fruit(string n, string c) {
        this->name = n;
        this->color = c;
    }

    Fruit(const Fruit& f) {
        this->name = f.name;
        this->color = f.color;
    }

    string GetName() {
        return this->name;
    }

    string GetColor() {
        return this->color;
    }

    void SetName(string n) {
        this->name = n;
    }

    void SetColor(string c) {
        this->color = c;
    }
};

//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  Fruit fruit("apple", "red");
  cout << fruit.GetName() << endl;
  cout << fruit.GetColor() << endl;
  fruit.SetName("orange");
  fruit.SetColor("orange");
  cout << fruit.GetName() << endl;
  cout << fruit.GetColor() << endl;

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}