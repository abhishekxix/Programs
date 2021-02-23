// stringstream::str
#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::stringstream, std::stringbuf

int main () {
  std::stringstream ss;
  ss.str ("abhishek singh");
//   std::string s = ss.str();
  std::cout << ss.str() << '\n';
  return 0;
}

