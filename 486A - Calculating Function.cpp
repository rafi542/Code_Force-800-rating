#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t;
  cin >> t;
  if(t%2 == 0)
    t /= 2;
  else
  {
    t = ceil(double(t)/ 2);
    t *= -1;
  }  
  cout << t << endl;
}  
