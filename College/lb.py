import numpy as np

n= int(input())
m= int (input())

g=[[0]*n for _ in range (n)]

for _ in range (m):
    u,v= map(int, input().split())
    g[u][v]=g[v][u]=1

start= int(input())
visited=[0]*n

def dfs(u):
    visited[u]=1
    print(u, end=" ")
    for v in range(n):
       if g[u][v] and not visited[v]:
        dfs(v)
dfs (start)



n= int(input())
m= int(input())

g=[[0]*n for _ in range (n)]

for _ in range (m):
   u,v=map(int , input().split())
   g[u][v]=g[v][u]=1


start= int(input)
visited=[0]*n

def dfs(u):
   visited[u] = 1
   print(u, end=" ")
   for v in range(n):
      if g[u][v] and not visited[v]:
         dfs[v]


dfs(start)



n= int(input())
num=int(input())
arr= list(map(int ,input().split()))
arr= input().split()
cpp=arr[]
target= int(input())

if target in arr:
   print(arr.index(target),n-1-arr[::-1].index(target))

else:
   print(-1,-1)




