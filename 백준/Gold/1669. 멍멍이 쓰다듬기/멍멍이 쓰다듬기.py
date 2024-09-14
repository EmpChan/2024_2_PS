a,b=map(int,input().split())
d = b-a
now = 0
w = 0
cnt = 0
while(now < d):
    if(now + w+1 >= d):
        cnt+=1
        break
    cnt+=2
    w+=1
    now+= w*2

print(cnt)