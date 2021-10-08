#include <iostream>
#include <vector>
using namespace std;

//DO NOT EDIT/////////////////
class VectorAddThree {      //
  public:                   //
    vector<int> Add() {     //
      nums.push_back(num1); //
      nums.push_back(num2); //
      nums.push_back(num3); //
      return nums;          //
    }                       //
                            //
  protected:                //
    int num1 = 1;           //
    int num2 = 2;           //
    int num3 = 3;           //
                            //
  private:                  //
    vector<int> nums;       //
};                          //
//////////////////////////////

//add class definitions below this line

class VectorAddSix : public VectorAddThree {
private:
    vector<int> nums;

protected:
    int num4 = 4;
    int num5 = 5;
    int num6 = 6;

public:
    vector<int> Add() {
        nums = this->VectorAddThree::Add();
        nums.push_back(num4);
        nums.push_back(num5);
        nums.push_back(num6);
        
        return nums;
    }
};

//add class definitions above this line

int main() {
  
  //DO NOT EDIT code below this line
   
  VectorAddSix v6;
  for (int i : v6.Add()) {
    cout << i << endl;
  }

  //DO NOT EDIT code above this line
  
  return 0;
  
}