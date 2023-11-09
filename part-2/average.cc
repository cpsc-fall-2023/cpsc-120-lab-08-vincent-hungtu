// Vincent Tran
// Vincent21@csu.fullerton.edu
// @CSUFVincent
// Partners:@HungTu555

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (argc <= 1) {
    std::cout << "error: you must suply at least one number";
    return 1;
  }

  double sum{0};
  for (int i = 1; i < argc; i++) {
    sum += std::stod(arguments[i]);
  }

  double sum_average{sum / (argc - 1)};
  std::cout << "average =" << sum_average << ".\n";

  return 0;
}
