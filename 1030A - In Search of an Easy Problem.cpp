#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int  i, n, g, a=0, b, c, t;
  cin >> t;
  for(i=0; i<t; i++)
  {
    cin >> g;
    if(g==1)
      a = 1;
  }
  if(a==1)
    cout << "HARD" << endl;
  else
    cout << "EASY" << endl;  
}  
