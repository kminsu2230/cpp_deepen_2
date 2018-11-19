# include <iostream>
# include <vector>
 
using namespace std;
 
int sum=0;
int arr[8][8];
 
struct point 
{
    int rx;
    int ry;
}rxy[2];
 
struct kpoint 
{
    int kx;
    int ky;
}kxy[1];
 
int search_x (int x, int r_y, int k_y)
{
    int abs_sum = 0;
    int min_y = r_y;
    if (min_y > k_y)
    {
        min_y = k_y;
        abs_sum = (r_y)-(k_y);
    }
    else
    {
        abs_sum = (k_y)-(r_y);
    }
    int num=0;
    for (int i=1; i<abs_sum; i++)
    {
        if (arr[x][min_y+i]==3)
        {
            return 0;
        }

        // * else 로 작성시 2가 같은 자리에 있는 하나가 더있으면 에러 
        else if (arr[x][min_y+i]==0)
        {
            num++;
            if (num==abs_sum-1)
            {
                return 1;
            }
        }
    }
}
 
int search_y (int y, int r_x, int k_x)
{
    int abs_sum =0;
    int min_x = r_x;
    if (min_x > k_x)
    {
        min_x = k_x;
        abs_sum = (r_x)-(k_x);
    }
    else
    {
        abs_sum = (k_x)-(r_x);
    }
    int num=0;
    for (int i=1; i<abs_sum; i++)
    {
        if (arr[min_x+i][y]==3)
        {
            return 0;
        }
        // * else 로 작성시 2가 같은 자리에 있는 하나가 더있으면 에러 
        else if (arr[min_x+i][y]==0)
        {
            num++;
            if (num==abs_sum-1)
            {
                return 1;
            }
        }
    }
}
 
 
// 1:k , 2:r , 3:e
 
int main()
{
    int rxy_num =0;
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
                rxy[rxy_num].rx=i;
                rxy[rxy_num].ry=j;
                rxy_num++;
            }
            if (arr[i][j]==1)
            {
                kxy[0].kx=i;
                kxy[0].ky=j;
            }
        }
    }
 
    if (rxy[0].rx==kxy[0].kx)
    {
        sum += search_x(rxy[0].rx, rxy[0].ry, kxy[0].ky);
    }
    if (rxy[0].ry==kxy[0].ky)
    {
        sum += search_y(rxy[0].ry, rxy[0].rx, kxy[0].kx);
    }
    if (rxy[1].rx==kxy[0].kx)
    {
        sum += search_x(rxy[1].rx, rxy[1].ry, kxy[0].ky);
    }
    if (rxy[1].ry==kxy[0].ky)
    {
        sum += search_y(rxy[1].ry, rxy[1].rx, kxy[0].kx);
    }

    if (sum>=1)
    {
        cout <<1;
    }
    else
    {
        cout <<0;
    }
 
    return 0;
}