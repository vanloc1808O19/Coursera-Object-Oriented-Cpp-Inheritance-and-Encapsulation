#include <iostream>
#include <vector>
using namespace std;

//DO NOT EDIT///////////////////////////////////////////
class Words {                                         //
  public:                                             //
    Words(string s1) {                                //
      original = s1;                                  //
    }                                                 //
                                                      //
    string SubstituteChar() {                         //
      string sub;                                     //
      if (original.length() < 3) {                    //
        return "Not enough characters";               //
      }                                               //
      else {                                          //
        for (int i = 0; i < original.length(); i++) { //
          if (i == 2) {                               //
            sub += "HELLO";                           //
          }                                           //
          else {                                      //
            sub += original.at(i);                    //
          }                                           //
        }                                             //
      }                                               //
      return sub;                                     //
    }                                                 //
                                                      //
  private:                                            //
    string original;                                  //
};                                                    //
////////////////////////////////////////////////////////

//add class definitions below this line

class Substitute : public Words {
private:
    string input_string;

public:
    Substitute(string s) : Words(s) {
        this->input_string = s;
    }

    string SubstituteChar() {
        if (input_string.length() < 5) {
            return "Not enough characters";
        }

        string res = "";

        for (int i = 0; i < input_string.length(); i++) {
            if (i == 4) {
                res += "HELLO";
            } else {
                res += input_string[i];
            }
        }
        
        return res;
    }
};

//add class definitions above this line


int main() {
  
  //DO NOT EDIT code below this line
  
  Substitute s1("dog");
  cout << s1.SubstituteChar() << endl;
  Substitute s2("string");
  cout << s2.SubstituteChar() << endl;
  Words w("string");
  cout << w.SubstituteChar() << endl;
  
  //DO NOT EDIT code above this line
  
  return 0;
  
}