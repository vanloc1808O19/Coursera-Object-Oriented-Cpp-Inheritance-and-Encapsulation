#include <iostream>
#include <string>
using namespace std;

//add class definitions below this line

class Watch {
private:
    string manufacturer;

    string model;

    int diameter;

    int water_resistance;

    string material;

public:
    //default constructor
    Watch() {
        this->manufacturer = "";
        this->model = "";
        diameter = 0;
        water_resistance = 0;
        material = "";
    }

    //fully-parameterized constructor
    Watch(string manu, string mo, int d, int wr, string mat) {
        this->manufacturer = manu;
        this->model = mo;
        diameter = d;
        water_resistance = wr;
        material = mat;
    }

    string GetManufacturer() {
        return this->manufacturer;
    }

    string GetModel() {
        return this->model;
    }

    int GetDiameter() {
        return this->diameter;
    }

    int GetWaterResistance() {
        return this->water_resistance;
    }

    string GetMaterial() {
        return this->material;
    }

    void SetManufacturer(string m) {
        this->manufacturer = m;
    }

    void SetModel(string m) {
        this->model = m;
    }

    void SetDiameter(int d) {
        this->diameter = d;
    }

    void SetWaterResistance(int wr) {
        this->water_resistance = wr;
    }

    void SetMaterial(string m) {
        this->material = m;
    }

    void Summary() {
        cout << "Manufacturer: " << this->manufacturer << "\n";
        cout << "Model: " << this->model << "\n";
        cout << "Diameter: " << this->diameter << " mm\n";
        cout << "Water Resistance: " << this->water_resistance << " m\n";
        cout << "Material: " << this->material << "\n";
    }
    
};

//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  Watch my_watch("Omega", "Speedmaster", 42, 50, "steel");
  cout << my_watch.GetManufacturer() << endl;
  cout << my_watch.GetModel() << endl;
  cout << my_watch.GetDiameter() << endl;
  cout << my_watch.GetWaterResistance() << endl;
  cout << my_watch.GetMaterial() << endl;
  my_watch.SetManufacturer("Rolex");
  my_watch.SetModel("Explorer");
  my_watch.SetDiameter(36);
  my_watch.SetWaterResistance(60);
  my_watch.SetMaterial("gold");
  my_watch.Summary();

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}