// g++ -std=c++11 ./main.cpp
#include <cstdio>
#include <cstring>
#include <iostream>
#include <memory>
#include <unistd.h>

int main(void) {
  FILE *gp;
  const std::string filename = "warning1.mp3"; // filename of mp3 file
  std::string message = "mpg321 " + filename;
  char *cstr = new char[message.size() + 1]; // get memory
  std::strcpy(cstr, message.c_str());        // copy
  gp = popen(cstr, "w");
  pclose(gp); // パイプを閉じる
  std::cout << "Finish!" << std::endl;

  return 0;
}
