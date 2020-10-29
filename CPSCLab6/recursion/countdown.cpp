// Brandon Capparelli
// CPSC 121-03
// Lab 6
// 2020-04-14
// brandon.capparelli@csu.fullerton.edu
//
// Recursive Countdown
//

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void recursive(int input);

void recursive(int input)
{
  if (input >= 0)
  {
    cout << input << endl;
    this_thread::sleep_for(chrono::seconds(1));
    recursive(input - 1);
  }
}

int main(int argc, char * argv[])
{
  const int START = stoi(argv[1]);
  int tempVal = START;
  //
  // For Loop
  //
  for (tempVal = START; tempVal >= 0; tempVal--)
  {
    cout << tempVal << endl;
    this_thread::sleep_for(chrono::seconds(1));
  }
  //
  // While loop
  //
  tempVal = START;
  while (tempVal >= 0)
  {
    cout << tempVal << endl;
    tempVal--;
    this_thread::sleep_for(chrono::seconds(1));
  }
  //
  //Do While Loop
  //
  tempVal = START;
  do
  {
    cout << tempVal << endl;
    tempVal--;
    this_thread::sleep_for(chrono::seconds(1));
  } while (tempVal >= 0);
  //
  // Recursive Function Call
  //
  recursive(START);

  return 0;
}
