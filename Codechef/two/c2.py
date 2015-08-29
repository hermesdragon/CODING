t=input()
for z in range(t):
    a=raw_input()
    b=raw_input()
    cl=[]
    a=list(a)
    b=list(b)
    b1=list(set(b))
    for i in range(len(b1)):
        ta=a.count(b1[i])
        tb=b.count(b1[i])
        if ta>=tb:
            ta=int(ta/tb)
        else:
            ta=0
        cl.append(ta)
        
    print min(cl)
    
