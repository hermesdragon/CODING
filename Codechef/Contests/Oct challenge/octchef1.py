t=input()
for i in range(t):
    
    a=raw_input().split()
    h=raw_input().split()
    a=[int(i) for i in a]
    h=[int(i) for i in h]
    n=int(a[0])
    m=int(a[1])
    maxh=max(h)
    summ=0
    for j in range(len(h)):
        if h[j]<maxh:
            summ+=maxh-h[j]
        else:
            pass
    if summ==m:
        print "Yes"
    elif (m-summ)%n==0 and (m>summ):
        print "Yes"
        
    else:
        print "No"
    
    
