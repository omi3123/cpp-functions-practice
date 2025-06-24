//1
#include <iostream>
using namespace std;
void myFunction(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}
int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}

//2
#include <iostream>
using namespace std;
int doubleGame(int x) {
  return x * 2;
}

int main() {
  for (int i = 1; i <= 5; i++) {
    cout << "Double of " << i << " is " << doubleGame(i) << endl;
  }
  return 0;
}

//3
#include <iostream>
using namespace std;
void modifyStr(string &str) {
  str += " World!";
}
int main() {
  string greeting = "Hello";
  modifyStr(greeting);
  cout << greeting;
  return 0;
}

//4
#include <iostream>
using namespace std;
void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
}
int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
}

//5
#include <iostream>
using namespace std;
struct Car {
  string brand;
  int year;
void updateYear(Car& c) {
  c.year++;
}
int main() {
  Car myCar = {"Toyota", 2020};
  updateYear(myCar);
  cout << "The " << myCar.brand << " is now from year " << myCar.year << ".\n";
  return 0;
}

//6
#include <iostream>
using namespace std;
int plusFuncInt(int x, int y) {
  return x + y;
}
double plusFuncDouble(double x, double y) {
  return x + y;
}
int main() {
  int myNum1 = plusFuncInt(8, 5);
  double myNum2 = plusFuncDouble(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}

//7
#include <iostream>
using namespace std;
int factorial(int n) {
  if (n > 1) {
    return n * factorial(n - 1);
  } else {
    return 1;
  }
}
int main() {
  cout << "Factorial of 5 is " << factorial(5);
  return 0;
}