//#include<stdio.h>
//#include<vector>
//#include<queue>
//using namespace std;
//typedef struct Node{
//	int node;
//	int length;
//}Node;
//vector<Node> v[1000];
//queue<int> q;
//int cnt[1001];
//int n, m, s, f, length;
//
//int main(){
//	scanf("%d %d", &n, &m);
//	int nodenum;
//	Node temp;
//	for (int i = 1, int nt; i < n; i++){
//		scanf("%d %d %d", &nodenum, &temp.node, temp.length);
//		v[nodenum].push_back(temp);
//		nt = temp.node;
//		temp.node = nodenum;
//		v[nt].push_back(temp);
//	}
//
//	for (int i = 0; i < m; i++){
//		scanf("%d %d", &s, &f);
//		length = 0;
//		for (int j = 0; j < v[s].size; j++){
//			q.push(v[s][j].node);
//		}
//		while (!q.empty){
//			int t = q.front();
//			cnt[t] = cnt[t] + 
//			if (t == f){
//				break;
//			}
//			else{
//				for (int j = 0; j < v[t].size; j++){
//					q.push(v[t][j].node);
//				}
//			}
//		}
//		printf("%d", cnt[f]);
//	}
//	return 0;
//}