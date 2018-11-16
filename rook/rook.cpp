# include <iostream>
# include <vector>
 
using namespace std;
 
int arr[8][8];

struct point 
{
    int rx;
    int ry;
}rxy[1];

struct kpoint 
{
    int kx;
    int ky;
}kxy[1];


// 1:k , 2:r , 3:e

int main()
{
    for (int i=0; i<8; i++)
    {
    	for (int j=0; j<8; j++)
    	{
    		cin >> arr[i][j];
    	}
    }

    for (int i=0; i<8; i++)
    {
    	for (int j=0; j<8; j++)
    	{
    		if (arr[i][j]==2)
    		{
                rxy[0].rx=i;
                rxy[0].ry=j;
    		}
    		if (arr[i][j]==1)
    		{
                kxy[0].kx=i;
                kxy[0].ky=j;
    		}
    	}
    }

    int xline_min=rxy[0].rx;
    int yline_min=rxy[0].ry;

    int sum=0;

    if (xline_min==kxy[0].kx)
    {
    	if (yline_min<kxy[0].ky)
    	{
    		yline_min=kxy[0].ky;
    		sum=
    	}
    }

    if (yline_min==kxy[0].ky)
    {
    	if (xline_min<kxy[0].kx)
    	{
    		xline_min=kxy[0].kx;
    	}
    }
    
    // search
    for (int i=; i<8; i++)
    {
    	for (int j=0; j<8; j++)
    	{

    	}
    	cout << "\n";
    } 

    



	return 0;
}