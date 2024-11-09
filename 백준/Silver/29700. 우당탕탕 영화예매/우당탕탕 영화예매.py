a,b,c=map(int,input().split())
s=0
for i in[0]*a:s+=sum([max(len(k)-c+1,0)for k in input().split('1')])
print(s)