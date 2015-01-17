// op-pattern.cpp
// sat 17 jan 2015
//

#include <iostream>
using std::cin;
using std::cout;

int main(void) {
  for (int row = 1; row <= 5; row++) {
    for (int hashNum = 1; hashNum <= 6 - row; hashNum++) {
      cout << "#";
    }
    cout << "\n";
    //cout << 6 - row << "\n";
  }
}

