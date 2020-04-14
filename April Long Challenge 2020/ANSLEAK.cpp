// Problem link : https://www.codechef.com/APRIL20B/problems/ANSLEAK

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;
		int c[n][k];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < k; j++){
				cin >> c[i][j];
			}
		}
		int correct[k] = {0}, ans[n];
		for(int i = 0; i < n; i++){
			int min_correct = *min_element(correct, correct + k);
			vector <int> v;
			for(int j = 0; j < k; j++){
				if(correct[j] == min_correct){
					v.push_back(c[i][j]);
				}
			}
			int count[9] = {0};
			for(int j = 0; j < v.size(); j++){
				count[v[j] - 1]++;
			}
			int pos = distance(count, max_element(count, count + 9));
			ans[i] = pos + 1;
			for(int j = 0; j < k; j++){
				if(ans[i] == c[i][j]){
					correct[j]++;
				}
			}
		}
		for(auto a : ans){
			cout << a << " ";
		}
		cout << "\n";
	}
	return 0;
}
