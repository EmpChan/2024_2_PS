from collections import deque

n,m = map(int,input().split())
g = [[] for _ in range(n+1)]
v = [0 for _ in range(n+1)]

for i in range(n-1):
    a,b = map(int,input().split())
    g[a].append(b)
    g[b].append(a)

appl = [int(i) for i in input().split()]
s = 0

def bfs():
    global s,m
    q = deque()
    q.append(0)
    v[0]=1
    dist = 0
    while(dist <= m):
        num = len(q)
        for i in range(num):
            now = q.popleft()
            s += appl[now]
            for j in g[now]:
                if v[j]:
                    continue
                v[j] = 1
                q.append(j)
        dist+=1

bfs()
    
print(s)
