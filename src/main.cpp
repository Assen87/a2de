#include <iostream>

#include "private.hpp"
#include "public.hpp"

int main(int argc, char* argv[]) {
  std::cout << "Integer provided by the game: " << a2de::providedByGame() << std::endl;
  std::cout << "Internal Version: " << a2de::Internal_Version << std::endl;
}
