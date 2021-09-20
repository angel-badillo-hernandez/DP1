/*
INTRO TO BITWISE OPERATORS
The purpose of this code is to introduce the use of
bitwise operators to examine particular bits.  
The 4 rightmost bits of an unsignedinteger variable 
are used to represent states of a printer as
indicated in the #defines.

If the number stored in the variable is 13, (bits of 1101)
that would indicate:

Power on
Paper Loaded
Two Sided Printing enabled

*/
#include<iostream>

using namespace std;

#define POWER_ON 8
#define PAPER_LOADED 4
#define COLOR_ENABLED 2
#define TWO_SIDED_PRINTING 1

int main(){
  unsigned int code = 0;
  for (int y = 1; y < 6; y++){ // Test with 5 different integers
    cout << "Enter an integer from 0 to 15 indicating the state of the printer.  ";
    cin >> code;
    if (code & POWER_ON) // If there is a 1 in the 4th bit from the right
      cout << "Printer is on.\n";
    if (code & PAPER_LOADED) // If there is a 1 in the 3rd bit from the right
      cout << "Paper is loaded.\n";
    if (code & COLOR_ENABLED)
      cout << "Color printer\n";
    if (code & TWO_SIDED_PRINTING)
      cout << "Printer can print on both sides.\n";
  }
  system("pause");
  return 0;
}