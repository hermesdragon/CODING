t=input()
for i in range(t):
    k=input()
    s=raw_input()
    x,y=s.split()
    a=int(x)
    b=int(y)
    if (a%k==0 and b<=a and b>=(a-k)) :
        print "YES"
    elif (b%k==0 and a<=int(y) and a>=(b-k)) :
        print "YES"
    else:
        print "NO"
