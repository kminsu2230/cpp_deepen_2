# include <iostream>
 
using namespace std;
 
 
int n,m;
int x,y;
int arr[101][101]={0, };
int mine_x[9]={-1,-1,-1,0,0,0,1,1,1};
int mine_y[9]={-1,0,1,-1,0,1,-1,0,1};

int mine_num (int arr_x, int arr_y)
{
	int sum=0;
	int touch_mine=0;

	for (int j=0; j<9; j++)
	{
		if (mine_x[j]==0 and mine_y[j]==0)
		{	
			if (arr[arr_x+(mine_x[j])][arr_y+(mine_y[j])]==1)
			{
				touch_mine = 1;
			}
		}
		else 
		{
			if (arr[arr_x+(mine_x[j])][arr_y+(mine_y[j])]==1)
			{
				sum++;
			}
		}
	}

	if (touch_mine==1)
	{
		return -1;
	}
	else
	{
		return sum;
	}

}


int main ()
{
	cin >> n >> m;
	cin >> x >> y;

	// arr reset
	for (int i=0; i<=n+1; i++)
	{
		for (int j=0; j<=m+1; j++)
		{
			arr[i][j]=0;
		}
	}

	// input
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=m; j++)
		{
			cin >> arr[i][j]; 
		}
	}
	int value=0;

	value = mine_num(x,y);

	if (value>=0)
	{
		cout << value << "\n";
	}
	else
	{
		cout << "game over" <<"\n";
	}

	

	return 0;
}