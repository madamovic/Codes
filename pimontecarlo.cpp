
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
 
  srand(time(0));
 
  int in=0;
  int tot=0;

  int TOT=10000000;

  for (int i=0; i<TOT; ++i) {
    long int n = rand();
    double x = (0.0+n)/(0.0+RAND_MAX);
    long int m = rand();
    double y = (0.0+m)/(0.0+RAND_MAX);

    const double z = x*x+y*y;

    if (z<=1) {
      in = in+1;
    }
    tot = tot+1;

  }
  std::cout << 4.*in/tot << std::endl;
}
