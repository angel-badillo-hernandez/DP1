//Cerise Wuthrich
//Determine if numbers are odd and convert letters to lower case
//The purpose of this code is to show the use of
//bitwise AND (&) to examine bits and bitwise OR (|) to set bits.

#include<iostream>
using namespace std;

#define ODD 1
#define LOWER 32

int main(){
  int num = 0;
  char letter = 'A';

  //Enter 4 integers to determine if they are odd or even
  for (int x = 1; x <= 4; x++){
    cout << "Enter an integer.\n";
    cin >> num;
    if (num & ODD) //If the rightmost bit is 1, it's an odd number
      cout << "ODD\n";
    else
      cout << "EVEN\n";
  }

  //Convert letter to a lower case
  //ASCII code for A is 65 and a is 97.  You can't just add 32.
  //Use bitwise OR on any letter with 32
  for (int x = 1; x <= 4; x++){
    cout << "\n\nEnter a letter (uppercase or lowercase).\n";
    cin >> letter;
    letter = letter | LOWER; //Set the 6th bit from the right to a 1
    cout << "The lowercase version of that letter is " << letter;
  }
  
  cout << endl;
  system("pause");
  return 0;
}
