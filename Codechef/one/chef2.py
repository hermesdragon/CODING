t=input()
while t>0:
    c=2
    g=True
    x=input()
    y=input()
    while g==True:
        if c%x==0 and c%y==0:
            print c/x
            g=False
        else:
            c=c+1
    t=t-1
