# include <iostream>
# include <vector>
# include <string>
# include <math.h>
 
using namespace std;
 
 
int n;
char carr[100][100];
int arr[100][100];
int x,y,r;
 
struct point 
{
    int x;
    int y;
    int range_x;
    int range_y;
}xy[4];
 
int main()
{
    cin >> n;
    cin >> x >> y >> r;
 
    x = x-1;
    y = y-1;
 
    // 0 reset
    for (int i =0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            arr[i][j]=0;
        }
    }
 
    carr[x][y]='x';
 
    int r_num= r;
    int r_sum= r+1;
    for (int i=0; i<n; i++)
    {
    	for (int j=0; j<n; j++)
    	{
    		if (i>=x-r and i<=x+r)
    		{
                if (j>=y-r and j<=y+r)
                {
                    if (abs(x-r)+i==i and y+i==j)
                    {
                        arr[i][j]=abs(r_num-i);
                    }
                }
    		}

    	}
    }
    
    
 
 
 
    for (int i =0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i==x and j==y)
            {
                cout << carr[x][y];
            }
            else
            {
                cout << arr[i][j];
            }
        }
        cout << "\n";
    }
 
    return 0;
}