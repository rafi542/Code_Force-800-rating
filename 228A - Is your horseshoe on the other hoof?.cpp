#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int s4, s1, s2, i, j, s3, cn=0;
  vector<long long int>v;
  long long int ar[1000];
  cin >> s1 >> s2 >> s3 >> s4;
  v.push_back(s1);
  v.push_back(s2);
  v.push_back(s3);
  v.push_back(s4);
  for(i=0; i<4; i++)
  {
    for(j=1+i; j<4; j++)
    {
      if(ar[j]==j)
        continue;
      if(v[i] == v[j]){
        cn++;
        ar[j] = j;
      }  
    }
    if(cn==3)
      break;
  }
  cout << cn << endl;
}  
