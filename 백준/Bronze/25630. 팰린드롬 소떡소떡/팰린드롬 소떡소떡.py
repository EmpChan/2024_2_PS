int(input())
n = input()
s = len(n)
a, b =0, s-1
cnt = 0
while(a<b):
    if(n[a] != n[b]):
        cnt+=1
    a+=1
    b-=1
print(cnt)