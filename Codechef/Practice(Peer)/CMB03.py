n=input()
for i in xrange(n):
    a,b=raw_input().split()
    check=0
    for j in range(6):
        if a[j:j+5]==b[::]:
            check=1
            break
    if check==1:
        print 1
    else:
        print 0
