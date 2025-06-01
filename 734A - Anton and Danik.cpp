#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int  i, n, g, a, b, c, A=0, D=0, t;
  string s;
  vector<int>v;
  cin >> t;
  cin >> s;
  for(i=0; i<t; i++)
  {
    if(s[i] == 'A')
      A++;
    else
      D++;  
  }
  if(A > D)
    cout << "Anton" << endl;
  else if(A < D)
    cout << "Danik" << endl;  
  else
    cout << "Friendship" << endl;   
}  
