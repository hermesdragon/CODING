t=input()
for z in xrange(t):
    c=input()
    while(1):
        c = int(c)+1
        c=str(c)
        if(c==c[::-1]):
            break
    print c
