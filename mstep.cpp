#include<bits/stdc++.h>
using namespace std;
int dis(int x1, int x2, int y1, int y2)
{
	int x,y;
	x=x2-x1;
	y=y2-y1;
	if(x<0)
		x*=-1;
	if(y<0)
		y*=-1;
	return x+y;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int s, i, j, sn=1, a=0, r, c;
		cin>>s;
		int mat[s][s];
		vector  <pair <int, pair <int,int> > >  v;
		for(i=0; i<s; i++)
		{
			for(j=0; j<s; j++)
			{
				cin>>mat[i][j];	
				v.push_back(make_pair(mat[i][j],make_pair(i,j)));
			}
		}
		sort(v.begin(),v.end());
		for(i=0; i<(s*s)-1; i++)
		{
		        a+=dis(v[i].second.first,v[i+1].second.first,v[i].second.second,v[i+1].second.second);
		}
		cout<<a<<endl;
	}
	return 0;
}
