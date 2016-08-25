//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main(){
//	int n, arr[501][501];
//	cin >> n;
//	for (int i = 1; i <= n; i++){
//		for (int j = 1; j <= i; j++)
//			cin >> arr[i][j];
//	}
//	for (int i = n - 1; i >= 1; i--){
//		for (int j = 1; j <= i; j++)
//			arr[i][j]+=max(arr[i + 1][j], arr[i + 1][j + 1]);
//	}
//	cout << arr[1][1];
//	return 0;
//}