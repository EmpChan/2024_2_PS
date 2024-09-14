n = int(input())
front,back = [list(i) for i in input().split("*")]
for i in range(n):
    s = list(input())
    #print(s[0:len(front)],front,s[len(s) - len(back):],back)
    if(len(s) < len(back) + len(front)):
        print("NE")
        continue
    elif(s[0:len(front)] == front and s[len(s)-len(back):] == back):
        print("DA")
        continue
    else:
        print("NE")