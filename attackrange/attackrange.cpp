# include <iostream>
# include <vector>
# include <string>
// math.h 가 인식을 안해서 cmath 으로함
# include <cmath>
 
using namespace std;
 
 
int n;
char carr[120][120];
int arr[120][120];
int x,y,r;
 
int main()
{
    cin >> n;
    // x , y 좌표, r은 거리
    cin >> x >> y >> r;
 
 
    // 0 reset
    for (int i =0; i<=n+1; i++)
    {
        for (int j=0; j<=n+1; j++)
        {
            arr[i][j]=0;
        }
    }
 
    carr[x][y]='x';
 
    // 이 문제는 생각의 차이가 가장 큰 문제이며, 수학점 개념으로 접근하면 쉬움..
    // 풀이법 : 예시인 거리를 기준으로 4,5가 기준이라면, for문의 2중 순회를 가점으로 
    //        시작점까지의 거리 r이 3이면 '첫 시작점은 1,5' 이거리를 x' , y' 라 할때
    //        |x-x' + y-y'| <= r 조건을 주고, |x-x' + y-y'| 을 배열에 저장하면 범위와 값이 중앙에서
    //        퍼지는 마름모형 값이 완성됨

    // 벡터의 개념과 계산법을 가지고 푸는 문제라 매우 좋은 문제임 
 
    for (int i =1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if ((abs(x-i))+abs((y-j))<=r)
            {
                arr[i][j]=(abs(x-i))+abs((y-j));
            }
            
        }
    } 
    
 
 
 
    for (int i =1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (i==x and j==y)
            {
                cout << carr[x][y] <<" ";
            }
            else
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << "\n";
    }
 
    return 0;
}