#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, n;
  double ans;
  string ch;
  cin >> t;
  while(t--)
  {
    cin >> n;
    ans = n/ 2.0;
    long long int c = round(ans);
    cout << c << endl;
  }
}
