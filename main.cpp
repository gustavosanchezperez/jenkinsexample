#include <iostream>
#include "helloWorld.h"

int main(int argc, char **argv) {
  HelloWorld helloWorld;
  std::string hello = helloWorld.helloWorld();

  std::cout << hello << std::endl;

  return 0;
}