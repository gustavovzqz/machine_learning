#include <Eigen/Dense>
#include <iostream>

int main() {
  Eigen::MatrixXd mat(2, 2);
  mat << 1, 2, 3, 4;

  std::cout << "Matriz:\n" << mat << std::endl;

  Eigen::VectorXd vec(2);
  vec << 5, 6;

  std::cout << "Vetor:\n" << vec << std::endl;

  Eigen::VectorXd result = mat * vec;
  std::cout << "Multiplicação Matriz * Vetor:\n" << result << std::endl;

  return 0;
}
