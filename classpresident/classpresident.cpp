# include <iostream>
 
using namespace std;

int n;
int arr[1005][6]= {0, };

struct point
{
	int st;
	int num;
}str[1005];


int search (int st ,int value_1 , int value_2,int value_3,int value_4,int value_5)
{
	int sum=0;
	for (int i=1; i<=n; i++)
	{
		if (st!=str[i].st)
		{
			if (value_1==arr[i][0]) 
			{
				sum ++;
			}
			else if (value_2==arr[i][1])
			{
				sum ++;
			}
			else if (value_3==arr[i][2])
			{
				sum ++;
			}
			else if (value_4==arr[i][3])
			{
				sum ++;
			}
			else if (value_5==arr[i][4])
			{
				sum ++;
			}
		}
	}
	return sum;
	
}

int main()
{
	cin >>n;

	if (n <3 or n>1001)
	{
		return 0;
	}

	for (int i=1; i<=n; i++)
	{
		for (int j=0; j<5; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i=1; i<=n; i++)
	{
		str[i].st = i;
		str[i].num = search(str[i].st,arr[i][0],arr[i][1],arr[i][2],arr[i][3],arr[i][4]);	
		//cout << str[i].st <<" : " <<str[i].num <<"\n";
	}

	int num_st = str[1].st;
	int num_max = str[1].num;
	for (int q=1; q<=n; q++)
	{
		if (num_max < str[q].num)
		{
			num_max = str[q].num;
			num_st = str[q].st;
		}
	}

	for (int k=1; k<=n; k++)
	{
		if (num_max == str[k].num and num_st != str[k].st)
		{
			if (num_st > str[k].st)
			{
				num_st = str[k].st;
			}
		}	
	}


	cout << num_st << "\n";


	return 0;
}