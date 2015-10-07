#include <iostream>

using namespace std;

const double hbar = 6.57E-16; /* (eV)*(s) */
const double omega0 = 5.1E14; /* 1/s */

double energy(int n)
{
   return hbar*omega0*(n+0.5);
}

void write(int n)
{
   cout << "level " << n << ": " << energy(n) << " eV" << endl;
}

int main()
{
   cout << "Harmonic oscillator energies: \n"
           "----------------------------- \n"
           "level 0: " << energy(0) << " eV" << endl
        << "level 1: " << energy(1) << " eV" << endl
        << "level 2: " << energy(2) << " eV" << endl;

   int n = 2;
   write(++n);
   write(++n);
   write(n+1);
   write(n+2);
   write(2*n-1);

   write(1 << 3);
   write(75 % 11);
   n *= 3;
   n -= 2;
   write(n);


   double hbar = 0;
   cout << endl << "hbar = " << ::hbar << " eV*s" << endl;

   return 0;
}
