#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, len;
  long long int a;
  string ch, s ;
  cin >> t;
  while(t--)
  {
    cin >> ch;
    len = ch[0] - '0';
    len = len - 1;
    ch[0] = len + '0';
    a = stoi(ch);
    cout << a << endl;
  }
}
