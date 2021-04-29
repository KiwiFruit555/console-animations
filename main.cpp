#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

void kiwisleep(const args) {
  chrono_literals::sleep_for(args);
}

int loading() {
  kiwisleep(1000ms);
  cout << "Loading... ";
  cout << "hi";
  cout << "e";
  return 0;
}
int main() {
  loading();
  return 0;
}
