#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, n, i, j, g;
  long long int sum, pro;
  vector<long long int>v;
  cin >> t;
  while(t--)
  {
    cin >> n;
    sum = 0;
    for(i=0; i<n; i++)
    {
      cin >> g;
      v.push_back(g);
    }
    for(i=0; i<v.size(); i++)
    {
       if(v[i] != 1)
       {
         for(j=0; j<v.size(); j++)
         {
           if(i != j )
           {
             if(v[j] != 1){
              v[i] = v[i] * v[j];
              v[j] = 1;
             } 
           }
         }
       }
    }
    for(i=0; i<v.size(); i++)
      sum += v[i];
    pro = sum * 2022;
    v.clear();
    cout << pro << endl;
  }
}
