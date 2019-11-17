#include <stdio.h>
#include "Timer.hpp"
#include <iostream>

// long operation to time
int dummyFunction(int n) {
  if (n < 2) {
    return n;
  } else {
    return dummyFunction(n-1) + dummyFunction(n-2);
  }
}

int main() {
  Timer timer(true);
  printf("fib(40) = %d\n",dummyFunction(40));
  timer.stop();

  std::cout << "fib(40) took " << timer.averageTime() << " seconds to run.\n";
}