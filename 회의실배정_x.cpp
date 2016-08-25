//#include<stdio.h>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//int n, start = 0, e = 0, cnt = 0;
//int arr[100000] = { 0, };
//vector<int> v;
//queue<int> q;
//int main(){
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++){
//		scanf("%d %d", &start, &e);
//		if (start == e){
//			cnt++;
//		}
//		else if (arr[start] != 0){
//			arr[start] = min(arr[start], e);
//		}
//		else{
//			arr[start] = e;
//			v.push_back(start);
//		}
//	}
//	sort(v.begin(), v.end());
//	for (int i = 0; i < v.size(); i++){
//		q.push(v[i]);
//	}
//	int t = 0;
//	while (!q.empty()){
//		int temp = q.front();
//		q.pop();
//		if (temp >= t){
//			t = temp;
//			for (int i = t; i <= arr[t]; i++){
//				if (arr[t] > arr[i] && arr[i] != 0){
//					t = i;
//				}
//			}
//			t = arr[t];
//			cnt++;
//		}
//	}
//	printf("%d", cnt);
//
//	return 0;
//}