//CODED BY SAYEM MD. NAFI
#include <bits/stdc++.h>
     using namespace std;

int main()
{
     int M, N, i;
     long long int FACT1, FACT2;

     while(std::cin >> M >> N) {
          FACT1 = 1;
          FACT2 = 1;

          for(i = M; i > 0; i--) FACT1 *= i;
          for(i = N; i > 0; i--) FACT2 *= i;

          std::cout << FACT1 + FACT2 << '\n';
     }

     return 0;
}
