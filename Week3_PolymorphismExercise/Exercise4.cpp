#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//add class definitions below this line

class Median {
public:
    double CalculateMedian(int a1, int a2, int a3, int a4, int a5) {
        vector<int> arr;
        arr.push_back(a1);
        arr.push_back(a2);
        arr.push_back(a3);
        arr.push_back(a4);
        arr.push_back(a5);

        sort(arr.begin(), arr.end());

        return arr[2];
    }

    double CalculateMedian(int a1, int a2, int a3, int a4) {
        vector<int> arr;
        arr.push_back(a1);
        arr.push_back(a2);
        arr.push_back(a3);
        arr.push_back(a4);

        sort(arr.begin(), arr.end());

        return 1.00 * (arr[1] + arr[2]) / 2;
    }

    double CalculateMedian(int a1, int a2, int a3) {
        vector<int> arr;
        arr.push_back(a1);
        arr.push_back(a2);
        arr.push_back(a3);

        sort(arr.begin(), arr.end());

        return arr[1];
    }

    double CalculateMedian(int a1, int a2) {
        vector<int> arr;
        arr.push_back(a1);
        arr.push_back(a2);

        return 1.00 * (arr[0] + arr[1]) / 2;
    }
};

//add class definitions above this line


int main() {
  
  //DO NOT EDIT code below this line
   
  Median m;
  cout << m.CalculateMedian(3, 5, 1, 4, 2) << endl;
  cout << m.CalculateMedian(8, 6, 4, 2) << endl;
  cout << m.CalculateMedian(9, 3, 7) << endl;
  cout << m.CalculateMedian(5, 2) << endl;
  Median m2;
  cout << m2.CalculateMedian(24, 22, 21, 23, 20) << endl;
  cout << m2.CalculateMedian(12, 18, 9, 3) << endl;
  cout << m2.CalculateMedian(0, 1, 0) << endl;
  cout << m2.CalculateMedian(5, 3) << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}
