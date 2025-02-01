s = [sum(map(int,i.split('+'))) for i in input().split('-')]
print(s[0] - sum(s[1::]))