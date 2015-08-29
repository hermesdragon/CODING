t=input()
for i in range(t):
    r,g,b,m=map(int,raw_input().split())
    r1=raw_input().split()
    g1=raw_input().split()
    b1=raw_input().split()
    r1=[int(i) for i in r1]
    g1=[int(i) for i in g1]
    b1=[int(i) for i in b1]
    m=int(m)
    while m>0:
        sr=sum(r1)
        sg=sum(g1)
        sb=sum(b1)
        if sr>sg and sr>sb:
            for i in range(len(r1)):
                r1[i]=r1[i]/2
        elif sg>sr and sg>sb:
            for i in range(len(g1)):
                g1[i]=g1[i]/2
        elif sb>sr and sb>sg:
            for i in range(len(b1)):
                b1[i]=b1[i]/2
        else:
            for i in range(len(r1)):
                r1[i]=r1[i]/2
