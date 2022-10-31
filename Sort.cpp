#include <bits/stdc++.h>

using namespace std;

 

typedef long long int lli;

 

const int N = 10e5+5;

int arr[N];

 

int main()

{

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  lli n, m, s, i, j;

  cin>>n>>m>>s;

  lli l[m], r[m], t[m];

  bool ans=true;

  for(i=0;i<m;i++)

  {

    cin>>l[i]>>r[i]>>t[i];

    if(r[i]-l[i]+1<=1)

      ans=false;

  }

  if(ans)

  {

    cout<<"YES"<<'\n';

    if(s==1)

    {

      sort(r, r+m);

      j=0;

      for(i=1;i<=n;i++)

      {

        if(i>r[j])

          j++;

        if(i==r[j])

        {

          cout<<"B";

          j++;

        }

        else

          cout<<"A";

      }

    }

  }

  else 

  {

    cout<<"NO";

  }

  //freopen("diamond.in","r",stdin);

  //freopen("diamond.out","w",stdout);

}
