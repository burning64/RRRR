//#include<stdio.h>
//#include<vector>
//#include<queue>
//using namespace std;
//
//vector<int> v[1001];
//queue<int> q;
//int n, m, a, b, cnt = 0;
//int chk[1001] = { 0, };
//int main(){
//	scanf("%d %d", &n, &m);
//
//	for (int i = 0; i < m; i++){
//		scanf("%d %d", &a, &b);
//		v[a].push_back(b);
//		v[b].push_back(a);
//	}
//	for (int i = 1; i <= n; i++){
//		if (chk[i] == 0){
//			chk[i] = 1;
//			cnt++;
//			q.push(i);
//			while (!q.empty()){
//				int temp = q.front();
//				q.pop();
//				for (int j = 0; j < v[temp].size(); j++){
//					if (chk[v[temp][j]] == 0){
//						chk[v[temp][j]] = 1;
//						q.push(v[temp][j]);
//					}
//				}
//			}
//		}
//	}
//	printf("%d", cnt);
//	return 0;
//}
