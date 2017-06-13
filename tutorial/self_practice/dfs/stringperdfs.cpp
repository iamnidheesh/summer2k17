#include<bits/stdc++.h>
using namespace std;
int vis[100],c = 0;
vector<char> v;

void print(vector<char> v) {
	for(int i = 0;i < v.size() ;i++)
		printf("%c",v[i]);
	printf("\n");
}

void dfs(int i, char * s) { 
	v.push_back(s[i]);
	vis[i] = 1;
	for(int j = 0;s[j] != '\0';j++) {
		if(!vis[j])
			dfs(j,s);
	}
	if(v.size() == strlen(s))
		print(v);
	v.pop_back();
	vis[i] = 0;
}
int main() {
	char s[100];
	scanf("%s",s);
	sort(s,s+strlen(s));
	for(int i = 0; s[i] != '\0';i++) {
		dfs(i,s);
	}
}