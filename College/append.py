n= int(input())
m= int(input())

g=[[0]*n for _ in range (n)]
for _ in range(m):
    u,v=map(int ,input().split())
    g[u][v]=g[v][u]=1

start= int(input())
visited= [0]*n

def dfs(u):
    visited[u]=1
    print(u,end=