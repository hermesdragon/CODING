t=input()
for i in xrange(t):
    n=input()
    a=map(int,raw_input().split())
    m=list(set(a))
    c=[]
    for lib in m:
        c.append(a.count(lib))
    num=max(c)
    print n-num
    
