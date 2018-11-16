# include <iostream>
# include <vector>
 
using namespace std;
 
int n;
int arr[12][12];

int main()
{
	//pading
    for (int i=0; i<12; i++)
    {
    	arr[0][i]=1;
    	arr[i][0]=1;
    }

	cin >> n;

	for (int i=1; i<11; i++)
	{
		for (int j=1; j<11; j++)
		{
			cin >> arr[i][j];
		}
	}
    
    // in
    for (int u=1; u<=n; u++)
    {
	    for (int i=1; i<=11; i++)
	    {
	        if (arr[u][i]==0)
	        {
	    		arr[u][i]= 1;
	        }
	        else
	        {
	        	arr[u][i] =0;
	        }

	        if (arr[i][u]==0)
	        {
	        	arr[i][u]=1;
	        }
	        else
	        {
	        	arr[i][u]=0;
	        }

	        if (u==i)
	        {
		        if (arr[i][u]==0)
		        {
		        	arr[i][u]=1;
		        }
		        else
		        {
		        	arr[i][u]=0;
		        }
	        }
	    }
    }
    //out
    for (int a=1; a<11; a++)
    {
    	for (int b=1; b<11; b++)
    	{
    		cout << arr[a][b] << " ";
    	}
    	cout << "\n";
    }


	return 0;
}