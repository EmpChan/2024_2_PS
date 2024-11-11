nums=[bool(x) for x in range(10001)]
nums[0], nums[1] =False, False
prime=[]
for i in range(2,len(nums)):
    for k in range(i*i,len(nums),i):
        if nums[k]:
            nums[k]=False
for i in range(len(nums)):
    if nums[i]:
        prime.append(i)
n1, n2=0, 0
size=int(input())
for k in range(size):
    breakcount=0
    n=int(input())
    for i in range(0,len(prime)):
        p=i-1
        if prime[i]>n/2:
            break
    for i in range(p,-1,-1):
        for k in range(p,len(prime)):
            if prime[i]+prime[k]==n:
                n1=prime[i]
                n2=prime[k]
                breakcount=1
                break
        if breakcount==1:
            break
    print(n1,n2)