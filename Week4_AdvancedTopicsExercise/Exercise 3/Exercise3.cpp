#include <iostream>
#include <string>
using namespace std;

//add definitions below this line

struct Student {
    string name = "Amy";
    int age = 18;
    string major = "Physics";
};

//add definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  Student amy;
  cout << amy.name << endl;
  cout << amy.age << endl;
  cout << amy.major << endl;
  
  cout << endl;
  
  Student adam;
  adam.name = "Adam";
  adam.age = 19;
  adam.major = "Computer Science";
  cout << adam.name << endl;
  cout << adam.age << endl;
  cout << adam.major << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}