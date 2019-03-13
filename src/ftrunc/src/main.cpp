#include <fstream>
#include <iostream>

void process_line(std::string const& line, size_t length = 72)
{
  if (line.size() < length) {
    std::cout << line << '\n';
  } else {
    auto pos = 0;
    while (pos < line.size()) {
      auto sub = line.substr(pos, length);

      if (pos != 0) {
        std::cout << "     $";
      }
      std::cout << sub << '\n';

      pos += length;
    }
  }
}

int main(int argc, char** argv)
{
  auto filename = argv[1];
  auto infile = std::ifstream(filename);

  auto line = std::string{};
  while (std::getline(infile, line)) {
    process_line(line);
  }
}
