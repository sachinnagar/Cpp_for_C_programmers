#include <iostream>
#include <vector>
using namespace std;

inline void sum(int &p, vector <int> &d)
{
  int n = d.size();
  p = 0;
  for(int i = 0; i < n; ++i)
    p = p + d[i];
}
int main()
{
  int const N = 40;
  int accum = 0;
  vector <int> data(N); //int vector of size N
  for(int i = 0; i < N; ++i)
  {
    data[i] = i;
  }

  sum(accum, data);
  cout << "sum is " << accum << endl;
  return 0;
}
