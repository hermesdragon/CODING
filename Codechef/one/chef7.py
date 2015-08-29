t=input()
for i in range(t):
    l=0
    a=raw_input()
    x, y=a.split()
    for j in range(int(pow(int(x),0.5)+1)):
        if int(x)<=(j+1)**2 and int(x)>=j**2 and int(y)==j*(j+1) :
            print "YES"
            l=1
        elif  int(x)==j**2 and int(y)<=j*(j+1) and int(y)>=j*(j-1) :
            l=1
            print "YES"
    if l==0:
        print "NO"
