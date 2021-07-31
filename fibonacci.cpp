#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
  int userInput = 0;
  int fb1 = 0;
  int fb2 = 1;
  int after = 0;
  
  cout << "Enter the Fibonacci number you want: ";
  cin >> userInput;
  
  auto start = high_resolution_clock::now();
  for (int i = 1; i <= userInput; ++i) {  
    after = fb1 + fb2;
    fb1 = fb2;
    fb2 = after;
  }
  auto stop = high_resolution_clock::now();
  auto howLong = duration_cast<microseconds>(stop - start);
  cout << "The Fibonacci number for " << userInput << " is " << after << ". It took " << howLong.count() << " mircoseconds to use this algorithm. \n";
  cout << "Want to select another term? ";
  cin >> userInput;
  return 0;
}
