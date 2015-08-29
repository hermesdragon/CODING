t=int(input())
m=1000000007
def expmod_recur(a,b,c):
    if(b==1): return a%c
    x = expmod_recur(a,b>>1,c)
    x = (x*x)%c
    if(b&1==1)==1: # if odd number
        x = (x*a)%c
    return x
def qsort(inlist):
    if inlist == []: 
        return []
    else:
        pivot = inlist[0]
        lesser = qsort([x for x in inlist[1:] if x < pivot])
        greater = qsort([x for x in inlist[1:] if x >= pivot])
        return lesser + [pivot] + greater
for j in range(t):
	n=int(input())
	k=input()
	a=list(map(int,k.split()))
	a=qsort(a)
	sum=0
	t1=expmod_recur(2,n-1,m)
	t2=1
	for i in range(n):
		sum= (sum%m + ((a[i]%m)*(t2%m))%m - (a[i]%m)*(t1%m))%m
		t1=t1>>1
		t2=t2<<1
	print(sum%m)