#include <iostream>
#include <cmath>

double my_root(double n, double m)
{
  double x = 1;
  double p = 1e-5;
  while(fabs(pow(x, m) - n) > 0)
    x = ((m - 1) * x + n / pow(x, m - 1)) / m;
  return x;
}

int main()
{
  std::cout << my_root(9, 3) << std::endl;
  return 0;
}
