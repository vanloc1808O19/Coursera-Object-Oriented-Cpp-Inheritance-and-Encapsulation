#include <iostream>
using namespace std;

//DO NOT EDIT code below this line

class Person {
  public:
    Person(string n, string a) {
      name = n;
      address = a;
    }
  
    string GetName() {
      return name;
    }

    void SetName(string new_name) {
      name = new_name;
    }

    string GetAddress() {
      return address;
    }

    void SetAddress(string new_address) {
      address = new_address;
    }

    string Info() {
      return name + " lives at " + address + ".\n";
    }
  
  private:
    string name;
    string address;
};

//DO NOT EDIT code above this line

//add class definitions below this line

//DO NOT EDIT/////////////////////////////////////////////////
class CardHolder : public Person {                          //
  public:                                                   //
    CardHolder(string n, string a, int an) : Person(n, a) { //
      account_number = an;                                  //
      balance = 0;                                          //
      credit_limit = 5000;                                  //
    }                                                       //
//////////////////////////////////////////////////////////////
  
private:
    int account_number;
    double balance;
    double credit_limit;

public:
    int GetAccountNumber() {
        return this->account_number;
    }

    double GetBalance() {
        return this->balance;
    }

    double GetCreditLimit() {
        return this->credit_limit;
    }

    void SetAccountNumber(int an) {
        this->account_number = an;
    }

    void SetBalance(double b) {
        this->balance = b;
    }

    void SetCreditLimit(double l) {
        this->credit_limit = l;
    }

    void Sale(double p) {
        this->balance += p;
    }

    void Payment(double a) {
        this->balance -= a;
    }
}; 
  
//DO NOT EDIT/////////////////////////////////////////////////////////////
class PlatinumClient : public CardHolder {                              //
  public:                                                               //
    PlatinumClient(string n, string a, int an) : CardHolder(n, a, an) { //
      cash_back = 0.02;                                                 //
      rewards = 0;                                                      //
    }                                                                   //
//////////////////////////////////////////////////////////////////////////

private:
    double cash_back;
    double rewards;

public:
    double GetCashBack() {
        return this->cash_back;
    }

    double GetRewards() {
        return this->rewards;
    }

    void SetCashBack(double cb) {
        this->cash_back = cb;
    }

    void SetRewards(double r) {
        this->rewards = r;
    }
    
    void Sale(double p) {
        this->rewards += p * this->cash_back;

        double newbalance = this->GetBalance() + p;

        this->SetBalance(newbalance);
    }
}; 
  
//add class definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  PlatinumClient pc("Sarah", "101 Main Street", 123364);
  pc.CardHolder::Sale(100);
  cout << pc.GetRewards() << endl;
  pc.Sale(100);
  cout << pc.GetRewards() << endl;
  cout << pc.GetBalance() << endl;
  pc.Payment(50);
  cout << pc.GetBalance() << endl;
  cout << pc.Info() << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}