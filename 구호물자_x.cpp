//#include<stdio.h>
//#include<vector>
//#include<queue>
//using namespace std;
//vector <int> graph[101];
//queue <int> q;
//bool flag[101][101] = { false, };
//int n;
//int main(){
//	scanf("%d", &n);
//	for (int i = 1; i < n; i++){
//		int temp;
//		scanf("%d", &temp);
//		for (int j = 0; j < temp; j++){
//			int e;
//			scanf("%d", &e);
//			graph[i].push_back(e);
//		}
//	}
//	q.push(1);
//	while (!q.empty()){
//		int temp = q.front();
//		q.pop();
//		for (int i = 0; i < graph[temp].size(); i++) {
//			if (flag[temp][graph[temp][i]] == false) {
//				q.push(graph[temp][i]);
//				flag[temp][graph[temp][i]] = true;
//				flag[graph[temp][i]][temp] = true;
//			}
//			else{
//				printf("CYCLE");
//				return 0;
//			}
//		}
//	}
//	printf("NO CYCLE");
//	return 0;
//}