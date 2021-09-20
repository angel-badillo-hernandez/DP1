//Cerise Wuthrich
//Introduction to Bitwise Operators
#include<iostream>
using namespace std;

int main(){
 
  //initialize some 4-bit numbers
  unsigned short seven = 7;
  unsigned short eight = 8;
  unsigned short zero = 0;
  unsigned short six5535 = 65535;
  unsigned short result;

  //Perform some logical ops
  cout << "Decimal format\n";
  cout << eight << endl;
  cout << seven << endl;
  cout << "Logical AND (&&) and OR (||) and NOT (!)\n";
  result = eight && seven;  cout << result << endl;
  result = eight && zero;  cout << result << endl; 
  result = eight || zero;   cout << result << endl;
  result = !zero;  cout << result << endl;
  
  //Perform some bitwise ops
  cout << "Bitwise AND (&) and OR (|) and XOR\n";
  result = eight & seven;  cout << result << endl;
  result = eight & zero;  cout << result << endl;
  result = eight | seven;   cout << result << endl;
  result = eight ^ seven;  cout << result << endl;
 
  //perform negation
  cout << "Bitwise NOT (~)\n";
  result = ~six5535;
  cout << result << endl;
  result = ~zero;
  cout << result << endl;

  //perform shift operations
  cout << "Shift left and right\n";
  cout << (eight << 2) << endl;
  cout << (24 >> 3) << endl;

  //toggle bits...or mask
  result = 31;
  cout << result << endl;
  cout << "Toggle bit 2 (if rightmost bit is bit 0)\n";
  result = result ^ 1 << 2;
  cout << result << endl;
  cout << "Toggle bit 4 (if rightmost bit is bit 0)\n";
  result = result ^ 16;
  cout << result << endl;

  system("pause");
  return 0;
}