#include <vector>
#include <iostream>
using namespace std;
int main()
{
	int n, k, m;
	cin >> n >> k >> m;
	vector<int> a[m];
	for (int i=0; i<n; i++)  {
		int tmp;
		cin >> tmp;
		a[tmp%m].push_back(tmp);
	}
	for (int i=0; i<m; i++)  {
		if (a[i].size()>=k)  {
			cout << "Yes" << endl;
			for (int j=0; j<k-1; j++)  {
				cout << a[i][j] << ' ';
			}
			cout << a[i][k-1] << endl;
			goto aa;
		}
	}
	cout << "No" << endl;
	aa:;
	return 0;
}
