# include <iostream>
# include <vector>
 
using namespace std;
 
int arr[9][9];
 
struct value
{
    int ax;
    int ay;
    int num;
}axy[2];
 
 
int main()
{
    for (int i=0; i<9; i++)
    {
        for (int j=0; j<9; j++)
        {
            cin >> arr[i][j];
        }
    }
 
    int max=arr[0][0];
 
    for (int i=0; i<9; i++)
    {
        for (int j=0; j<9; j++)
        {
            if (max<arr[i][j])
            {
                max=arr[i][j];
                axy[0].ax=i;
                axy[0].ay=j;
                axy[0].num=max;
            }
            else if (max==arr[i][j])
            {
                axy[1].ax=i;
                axy[1].ay=j;
                axy[1].num=arr[i][j];
            }
        }
    }
 
    int min_ax=axy[0].ax;
    int min_ay=axy[0].ay;
    int num2=axy[0].num;
 
    if (axy[0].ax==axy[1].ax)
    {
        if (min_ay> axy[1].ay)
        {
            min_ay= axy[1].ay;
        }
    }
    if (axy[0].num==0)
    {
        num2= axy[1].num;
    }
 
 
 
    //cout << axy[0].ax << ", " << axy[0].ay << ", " << axy[0].num << endl;
    //cout << axy[1].ax << ", " << axy[1].ay << ", " << axy[1].num << endl;
 
    cout << num2<< "\n";
    cout << axy[0].ax+1 << " " << min_ay +1<<endl;
 
 
    return 0;
}