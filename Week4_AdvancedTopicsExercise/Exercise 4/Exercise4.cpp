#include <iostream>
using namespace std;

//add definitions below this line

class Person {
public:
    static string name;
    static string GetName() {
        return Person::name;
    }
};

//add definitions above this line

//DO NOT EDIT code below this line

string Person::name = "Name";

int main() {
  
  Person::name = "Peter Parker";
  cout << Person::GetName() << endl;
  Person::name = "Tony Stark";
  cout << Person::GetName() << endl;
  
  return 0;
  
}

//DO NOT EDIT code above this line