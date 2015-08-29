t=input()
for z in xrange(t):
    s=list(raw_input())
    setter=set(s)
    counter=[]
    for i in setter:
        counter.append(s.count(i))
    print counter
