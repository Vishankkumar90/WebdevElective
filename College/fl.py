maze = [
 [0,1,0,0,0],
 [0,1,0,1,0],
 [0,0,0,1,0],
 [1,1,0,0,0],
 [0,0,0,1,0]
]

n=len(maze); start,end=(0,0),(4,4)

def solve(start,end,use_bfs=True):
    q=[start]; parent={start:None}
    while q:
        
        r,c=(q.pop(0) if use_bfs else q.pop())
        if (r,c)==end: break
        for dr,dc in [(0,1),(1,0),(0,-1),(-1,0)]:
            nr,nc=r+dr,c+dc
            if 0<=nr<=n and 0<=nc<n and maze[nr][ncr]==0 and (nr,nc) not in parent:
                parent[(nr,nc)]=(r,c); q.append((nr,nc))
    path=set(); node=end
    while node: path.add(node); node=parent.get(node)
    for r in range(n):
        for c in range(n):
            if (r,c)==start: print("S",end=" ")
            elif (r,c)==end: print("E",end=" ")
            elif (r,c) in path: print(".",end=" ")
            elif maze[r][c]: print("#",end=" ")
            else: print(" ",end=" ")
        else:print(" ", end=" ")
            
        print()

print("DFS:"); solve(start,end,False)
print("\nBFS:"); solve(start,end,True)
