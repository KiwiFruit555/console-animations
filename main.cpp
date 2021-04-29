#include <iostream>
#include <chrono>
#include <thread>

using namespace std;


int main(string args) {
  cout << "This is a wait function!";
  chrono_literals::std::this_thread::sleep_for(2000ms);
  cout << " hehehe";
  return 0;
}
