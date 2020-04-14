// Problem link : https://www.codechef.com/APRIL20B/problems/REBIT

/*
Some useful information for this question :

AND(&)

0.x = 0, x.x = x, x.!x = 0, x.1 = x

OR(|) 

0 + x = x, x + x = x, x + !x = 1, x + 1 = 1

XOR(^)

0 ^ x = x, x ^ x = 0, x ^ !x = 1, x ^ 1 = !x
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 998244353

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		string l; cin >> l;
		stack<char> operators;
		stack<ll> stack_0, stack_1, stack_a, stack_A;
		ll prob[4] = {748683265, 748683265, 748683265, 748683265}; // prob[0] = P(0), prob[1] = P(1), prob[2] = P(a), prob[3] = P(A) (after modular inverse)
		for(auto c : l){
			if(c == '#'){
				stack_0.push(prob[0]);
				stack_1.push(prob[1]);
				stack_a.push(prob[2]);
				stack_A.push(prob[3]);
			}
			else if(c == '&' || c == '|' || c == '^'){
				operators.push(c);
			}
			else if(c == ')'){
				ll y[4];
				y[0] = stack_0.top(); 
				stack_0.pop();
				y[1] = stack_1.top(); 
				stack_1.pop();
				y[2] = stack_a.top(); 
				stack_a.pop();
				y[3] = stack_A.top(); 
				stack_A.pop();
				
				ll x[4];
				x[0] = stack_0.top(); 
				stack_0.pop();
				x[1] = stack_1.top(); 
				stack_1.pop();
				x[2] = stack_a.top(); 
				stack_a.pop();
				x[3] = stack_A.top(); 
				stack_A.pop();
				
				ll ans[4] = {0};
				
				if(operators.top() == '&'){
					for(int i = 0; i < 4; i++){
						for(int j = 0; j < 4; j++){
							if(i == 0){
								ans[0] = (ans[0] + ((x[i] * y[j]) % mod)) % mod;
							}
							else if(i == 1){
								ans[j] = (ans[j] + ((x[i] * y[j]) % mod)) % mod;
							}
							else if(i == 2){
								if(j == 0 || j == 3){
									ans[0] = (ans[0] + ((x[i] * y[j]) % mod)) % mod;
								}
								else{
									ans[2] = (ans[2] + ((x[i] * y[j]) % mod)) % mod;
								}
							}
							else{
								if(j == 0 || j == 2){
									ans[0] = (ans[0] + ((x[i] * y[j]) % mod)) % mod;
								}
								else{
									ans[3] = (ans[3] + ((x[i] * y[j]) % mod)) % mod;
								}
							}
						}
					}
				}
				else if(operators.top() == '|'){
					for(int i = 0; i < 4; i++){
						for(int j = 0; j < 4; j++){
							if(i == 0){
								ans[j] = (ans[j] + ((x[i] * y[j]) % mod)) % mod;
							}
							else if(i == 1){
								ans[1] = (ans[1] + ((x[i] * y[j]) % mod)) % mod;
							}
							else if(i == 2){
								if(j == 0 || j == 2){
									ans[2] = (ans[2] + ((x[i] * y[j]) % mod)) % mod;
								}
								else{
									ans[1] = (ans[1] + ((x[i] * y[j]) % mod)) % mod;
								}
							}
							else{
								if(j == 0 || j == 3){
									ans[3] = (ans[3] + ((x[i] * y[j]) % mod)) % mod;
								}
								else{
									ans[1] = (ans[1] + ((x[i] * y[j]) % mod)) % mod;
								}
							}
						}
					}
				}
				else{
					for(int i = 0; i < 4; i++){
						for(int j = 0; j < 4; j++){
							if(i == 0){
								ans[j] = (ans[j] + ((x[i] * y[j]) % mod)) % mod;
							}
							else if(i == 1){
								if(j == 0){
									ans[1] = (ans[1] + ((x[i] * y[j]) % mod)) % mod;
								}
								else if(j == 1){
									ans[0] = (ans[0] + ((x[i] * y[j]) % mod)) % mod;
								}
								else if(j == 2){
									ans[3] = (ans[3] + ((x[i] * y[j]) % mod)) % mod;
								}
								else{
									ans[2] = (ans[2] + ((x[i] * y[j]) % mod)) % mod;
								}
							}
							else if(i == 2){
								if(j == 0){
									ans[2] = (ans[2] + ((x[i] * y[j]) % mod)) % mod;
								}
								else if(j == 1){
									ans[3] = (ans[3] + ((x[i] * y[j]) % mod)) % mod;
								}
								else if(j == 2){
									ans[0] = (ans[0] + ((x[i] * y[j]) % mod)) % mod;
								}
								else{
									ans[1] = (ans[1] + ((x[i] * y[j]) % mod)) % mod;
								}
							}
							else{
								if(j == 0){
									ans[3] = (ans[3] + ((x[i] * y[j]) % mod)) % mod;
								}
								else if(j == 1){
									ans[2] = (ans[2] + ((x[i] * y[j]) % mod)) % mod;
								}
								else if(j == 2){
									ans[1] = (ans[1] + ((x[i] * y[j]) % mod)) % mod;
								}
								else{
									ans[0] = (ans[0] + ((x[i] * y[j]) % mod)) % mod;
								}
							}
						}
					}
				}
				
				operators.pop();
				
				stack_0.push(ans[0]);
				stack_1.push(ans[1]);
				stack_a.push(ans[2]);
				stack_A.push(ans[3]);
			}
		}
		cout << stack_0.top() << " " << stack_1.top() << " " << stack_a.top() << " " << stack_A.top() << "\n";
	}
	return 0;
}
