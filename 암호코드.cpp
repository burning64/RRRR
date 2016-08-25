//#include <iostream>
//#include <string>
//#define mod 1000000
//using namespace std;
//
//int dp[5001];
//string s;
//int main(){
//	cin >> s;
//	int len = s.size();
//	s = " " + s;
//	dp[0] = 1;
//	for (int i = 1; i <= len; i++){
//		if (0 < s[i] - '0' && s[i] - '0' < 10){ //한자리만볼때
//			dp[i] += dp[i - 1];
//			dp[i] %= mod;
//		}
//		if (i != 1 && 0 < s[i-1]-'0' && s[i-1]-'0' < 3){ //두자리
//			if (9 < (s[i - 1] - '0') * 10 + s[i] - '0' && (s[i - 1] - '0') * 10 + s[i] - '0' < 27){
//				dp[i] += dp[i - 2];
//				dp[i] %= mod;
//			}
//		}
//	}
//	cout << dp[len];
//}
//
//#include<stdio.h>
//
//char in[5001];
//int arr[2][5001] = { 0, };
//
//int main(){
//	int i = 0;
//	scanf("%s", in);
//	while (in[i] != NULL){
//		if (i == 0){
//			arr[0][i] = 0;
//			arr[1][i] = 1;
//		}
//		else{
//			if (in[i] <= '6' && in[i - 1] == '2' || in[i] <= '9' && in[i - 1] == '1'){
//				if (in[i] == '0'){
//					arr[1][i] = (arr[1][i - 1] - arr[0][i - 1] + 1000000) % 1000000;
//				}
//				else{
//					if (arr[0][i - 1] == 0){
//						arr[0][i] = arr[1][i - 1] % 1000000;
//						arr[1][i] = (arr[1][i - 1] + arr[0][i]) % 1000000;
//					}
//					else{
//						arr[0][i] = arr[0][i - 1] % 1000000;
//						arr[1][i] = (arr[1][i - 1] + arr[0][i]) % 1000000;
//					}
//				}
//			}
//			else{
//				arr[1][i] = (arr[1][i - 1] + arr[0][i]) % 1000000;
//			}
//		}
//		i++;
//	}
//	printf("%d", arr[1][i - 1]);
//}