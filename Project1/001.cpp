#include <fstream>  
#include <string> 
#include <iostream> 
using namespace std;
#define inf 9999;
const int N = 6;
ifstream fin("4d6.txt");
template<class Type>
void Prim(int n, Type c[][N + 1]);
int main()
{
	int c[N + 1][N + 1];
	cout << "连通带权图的矩阵为：" << endl;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			fin >> c[i][j];
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Prim算法最小生成树选边次序如下：" << endl;
	Prim(N, c);
	return 0;
}
template<class Type>
void Prim(int n, Type c[][N + 1])
{
	Type lowcost[N + 1];
	int closest[N + 1];
	bool s[N + 1];
	s[1] = true;
	for (int i = 2; i <= n; i++)
	{
		lowcost[i] = c[1][i];
		closest[i] = 1;
		s[i] = false;
	}
	for (int i = 1; i < n; i++)
	{
		Type min = inf;
		int j = 1;
		for (int k = 2; k <= n; k++)
		{
			if ((lowcost[k] < min) && (!s[k]))
			{
				min = lowcost[k];
				j = k;
			}
		}
		cout << j << ' ' << closest[j] << endl;
		s[j] = true;
		for (int k = 2; k <= n; k++)
		{
			if ((c[j][k] < lowcost[k] && (!s[k])))
			{
				lowcost[k] = c[j][k];
				closest[k] = j;
			}
		}
	}
}
