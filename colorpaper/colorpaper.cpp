 #include <iostream>

using namespace std;

int n;
int arr[102][102];
int sz[101];


// 너무 깊게 생각하지말고 다 그리고 생각하면 쉽다
/**
 n값을 기준으로 2차원 배열을 모두 나타낸다음 컬러를 다그리고 값을 입력,
  ex) 1이면 첫번재 색종이를 배열에 1로 표현 2번재 부터도 마찬가지로 2,3,4 순
  여기서 겹치는 부분 은 당연 히 덮어집 값이므로 값을 계산할때는 다음 배열의 값의 면적을 빼주면
  그전의 배열의 값인 색종이 값이 계산됨 
**/
int main() 
{
	int x, y, dx, dy;
	cin >> n;
	// 입력된 값 기준으로 시작
	for (int i=1; i <= n; i++) 
	{
		cin >> x >> y >> dx >> dy;
		// x 는 넓이에 누적
		// y 는 높이에 누적
		dx += x;
		dy += y;
		// 넓이만큼 반복 시작은 x
		for (int j=x; j < dx; j++) 
		{
			// 높이만큼 반복 시작은 y
			for (int q=y; q <dy; q++) 
			{
				arr[j][q] = i;
			}
		}
	}
	
	// 값 계산 시작
	for (int i=0; i < 101; i++) 
	{
		for (int j=0; j < 101; j++) 
		{
			if (arr[i][j]) 
			{
				sz[ arr[i][j] ]++;
			}
		}
	}

	// n기준 값 배열 출력
	for (int i=1; i <= n; i++) 
	{
		cout << sz[i] << endl;
	}

	return 0;
}

