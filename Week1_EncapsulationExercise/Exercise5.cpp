#include <iostream>
using namespace std;

//add class definitions below this line

class CardBinder {
private:
  int gold_card;
  int silver_card;

public:
  CardBinder() {
    this->gold_card = 0;
    this->silver_card = 0;
  }

  int GetGold() {
    return this->gold_card;
  }

  int GetSilver() {
    return this->silver_card;
  }

  int GetTotal() {
    return this->gold_card + this->silver_card;
  }

  void AddGold(int g) {
    if (g <= 0) {
      cout << "You cannot add a negative or 0 amount of cards.\n";
    } else {
      if (this->gold_card + this->silver_card + g > 20) {
        cout << "You do not have enough binder room.\n";
      } else {
        this->gold_card += g;
      }
    }
  }

  void AddSilver(int s) {
    if (s <= 0) {
      cout << "You cannot add a negative or 0 amount of cards.\n";
    } else {
      if (this->gold_card + this->silver_card + s > 20) {
        cout << "You do not have enough binder room.\n";
      } else {
        this->silver_card += s;
      }
    }
  }

  void RemoveGold(int g) {
    if (g <= 0) {
      cout << "You cannot remove a negative or 0 amount of cards.\n";
    } else {
      if (this->gold_card < g) {
        cout << "You do not have enough gold cards to remove.\n";
      } else {
        this->gold_card -= g;
      }
    }
  }

  void RemoveSilver(int s) {
    if (s <= 0) {
      cout << "You cannot remove a negative or 0 amount of cards.\n";
    } else {
      if (this->silver_card < s) {
        cout << "You do not have enough silver cards to remove.\n";
      } else {
        this->silver_card -= s;
      }
    }
  }
};

//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  CardBinder cb;
  cb.AddGold(21);
  cb.AddGold(11);
  cb.AddSilver(-4);
  cb.AddSilver(8);
  cb.RemoveGold(12);
  cb.RemoveGold(4);
  cb.RemoveSilver(-2);
  cb.RemoveSilver(6);
  cout << cb.GetGold() << endl;
  cout << cb.GetSilver() << endl;
  cout << cb.GetTotal() << endl;
  

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}