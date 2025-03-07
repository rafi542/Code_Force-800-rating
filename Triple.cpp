#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, i, j=0, k, h, g, c=0, f=0, R1, R2, end, m;
  long long int n, a[200007] = {0};
  vector<int>v;
  cin >> t;
  while(t--)
  {
    end = 0;
    cin >> n;
    for(i=0; i<n; i++)
    { 
      cin >> g;
      v.push_back(g);
      a[g]++;
    }
    sort(v.begin(),v.end());
    for(i=0; i<n-1; i++)  
    {
      R1 = v[i];
      R2 = v[i+1];
      if((a[R1] > a[R2]) && (a[R1]>=3)){
        f = 1;
        g = R1;
        if(g>c)
        c = g;
      }  
      else if((a[R2] > a[R1]) && (a[R2]>=3)){
        f = 1;
        g = R2;
        if(g>c)
        c = g;
      }  
      else if(a[R2]==a[R1] && (a[R1]>=3 && a[R2]>=3))  
      {
        f = 1;
        g = R1;
        if(g>c){
        if(R1 > R2)
          g = R1;
        else if(R1 < R2)
          g = R2; 
        else if(R1==R2) 
          g = R1; 
        }   
      }
      
    }
    if(f==0)
      cout << -1 << endl;
    else
      cout << g << endl;  
    f = 0; 
    c = 0; 
    while(end < n)
    {
      m = v[end];
      a[m] = 0;
      end++;
    }
    v.clear();
  }
}
