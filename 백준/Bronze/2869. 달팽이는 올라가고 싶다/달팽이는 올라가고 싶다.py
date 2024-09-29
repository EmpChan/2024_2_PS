a,b,c=map(int,input().split())
d = (a-b)
if (c-a)%d==0:
    print((c-a)//d+1)
else:
    print((c-a)//d+2)
