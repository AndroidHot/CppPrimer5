#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
  std::fstream f("copyOut.txt",
                 std::fstream::ate | std::fstream::in | std::fstream::out);

  if (!f) {
    std::cerr << "Unable to open file!" << std::endl;
    return EXIT_FAILURE;
  }

  auto end = f.tellg();
  f.seekg(0, std::fstream::beg);
  std::string s;
  int cnt = 0;
  while (f && f.tellg() != end && getline(f, s)) {
    cnt += s.size() + 1;
    auto mark = f.tellg();
    f.seekp(0, std::fstream::end);
    f << cnt;
    if (mark != end) {
      f << " ";
    }
    f.seekg(mark, std::fstream::beg);
  }
  f.seekp(0, std::fstream::end);
  f << "\n";

  return 0;
}
