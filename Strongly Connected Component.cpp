//#include<stdio.h>
//#include<vector>
//#include<stack>
//#include<string.h>
//#include<algorithm>
//using namespace std;
//vector<int> graph[10001];
//vector<int> r[10001];
//vector<int> scc[10001];
//stack<int> s;
//bool chk[10001] = { false, };
//int v, e, cnt = 0;
//void dfs(int t);
//void search(int t);
//int main(){
//	scanf("%d %d", &v, &e);
//	for (int i = 0; i < e; i++){
//		int t1, t2;
//		scanf("%d %d", &t1, &t2);
//		graph[t1].push_back(t2);
//		r[t2].push_back(t1);
//	}
//	for (int i = 1; i <= v; i++){
//		dfs(i);
//	}
//	memset(chk, false, v + 1);
//	while(!s.empty()){
//		int temp = s.top();
//		s.pop();
//		search(temp);
//		while (!s.empty()){
//			if (chk[s.top()] == true) s.pop();
//			else break;
//		}
//		cnt++;
//	}
//	for (int i = 0; i < cnt; i++){
//		sort(scc[i].begin(), scc[i].begin() + scc[i].size());
//	}
//	sort(scc, scc+cnt);
//	printf("%d\n", cnt);
//	for (int i = 0; i < cnt; i++){
//		for (int j = 0; j < scc[i].size(); j++){
//			printf("%d ", scc[i][j]);
//		}
//		printf("-1\n");
//	}
//	return 0;
//}
//void dfs(int t){
//	if (chk[t] == true) return;
//	else{
//		chk[t] = true;
//		for (int i = 0; i < graph[t].size(); i++){
//			dfs(graph[t][i]);
//		}
//		s.push(t);
//	}
//}
//void search(int t){
//	if (chk[t] == true){
//		return;
//	}
//	else{
//		chk[t] = true;
//		scc[cnt].push_back(t);
//		for (int i = 0; i < r[t].size(); i++){
//			search(r[t][i]);
//		}
//	}
//}