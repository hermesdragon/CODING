t=input()
for z in range(t):
    sum=0
    n=input()
    for i in range(1,n):
        if i%3==0 or i%5==0:
            sum+=i
    print sum
