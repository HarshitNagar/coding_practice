#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long
#define ud unsigned double
#define mp make_pair
using namespace std;

vector<int>dx{-2, -1, 1, 2, 2, 1, -1, -2};
vector<int>dy{-1, -2, -2, -1, 1, 2, 2, 1};

int N;
const int S=8;

struct cell
{
	int x, y;
	int dis;
	cell(){}
	cell(int x, int y, int dis)
	{
		this->x=x;
		this->y=y;
		this->dis=dis;
	}
};

bool inside_the_board(int x, int y)
{
	if(x<N && y<N && x>0 && y>0)
		return true;
	return false;
}

int minsteps(int start[], int target[])
{
	queue<cell>q;
	q.push(cell(start[0], start[1], 0));

	cell t;
	int x, y;
	bool visit[N+1][N+1];

	for(int i=1; i<=N; i++)
	{
		for(int j=1; j<=N; j++)
		{
			visit[i][j]=false;
		}
	}

	visit[start[0]][start[1]]=true;

	while(!q.empty())
	{
		t=q.front();
		q.pop();
		if(t.x==target[0] && t.y==target[1])
			return t.dis;

		for(int i=0; i<S; i++)
		{
			x=t.x + dx[i];
			y=t.y + dy[i];

			if(inside_the_board(x, y) && visit[x][y]==false)
			{
				visit[x][y]=true;
				q.push(cell(x, y, t.dis+1));
			}
		}
	}

}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	ll cases;
	cin>>cases;

	while(cases--)
	{
		cin>>N;
		int startx;
		int starty;
		int targetx;
		int targety;
		cin>>startx>>starty>>targetx>>targety;
		int start[]={startx, starty};
		int target[]={targetx, targety};
		
		cout<<minsteps(start, target)<<endl;
	}	

	return 0;
}