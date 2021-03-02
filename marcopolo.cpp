// Marco Polo Program
// Project 1
// Operating Systems SP21 CPSC 380-01

#include <iostream>
#include <thread> // thread header
using namespace std;

// Marco Thread Function
void marco() {
  // loop 10 times
  for (int i = 0; i < 10; i++) {
    cout << "Marco"; // print "Marco"
    this_thread::sleep_for(chrono::seconds(1)); // pause for 1 sec
  }
}

// Polo Thread Function
void polo() {
  // loop 10 times
  for (int i = 0; i < 10; i++) {
    cout << "Polo\n"; // print "Polo"
    this_thread::sleep_for(chrono::seconds(1)); // pause for 1 sec
  }
}

// Main Method
int main() {

  // Create Marco/Polo threads
  thread marcoThread(marco);
  thread poloThread(polo);

  // Join threads
  marcoThread.join();
  poloThread.join();

  cout << "That's all folks\n";

  return 0;
}
