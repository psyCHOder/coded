#include<bits/stdc++.h>
using namespace std;
char str[5000005];
int z[5000005];
int main()
{
	int t,l,i;
	
	scanf("%s",str);
	l=strlen(str);
	int L = 0, R = 0;
	for (int i = 1; i < l; i++) 
	{
  		if (i > R) 
  		{
    			L = R = i;
   			while (R < l && str[R-L] == str[R]) R++;
    			z[i] = R-L; 
    			R--;
  		}
  		else 
  		{
    			int k = i-L;
    			if (z[k] < R-i+1) 
    				z[i] = z[k];
    			else 
    			{
			      L = i;
			      while (R < l && str[R-L] == str[R]) R++;
			      z[i] = R-L; R--;
			}
		}
	}
	scanf("%d",&t);
	while(t--)
	{
		int q;
		scanf("%d",&q);
		printf("%d\n",min(q,z[q]));
	}
	return 0;
}
