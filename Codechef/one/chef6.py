def lcm(x,y):
    c=2
    g=True
    while g==True:
        if c%x==0 and c%y==0:
            return c
            g=False
        else:
            c=c+1
t=input()
while(t>0):
    temp=0
    k=input()
    a=raw_input()
    x=[]
    c=0
    x=a.split()
    for i in range(len(x)):
        x[i]=int(x[i])
    x=list(set(x))
    temp=x[0]
    c=reduce(lcm,x)
    print c
    t=t-1

