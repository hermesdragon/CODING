t=input()
for i in range(t):
    s,c,k=map(int,raw_input().split())
    if s!=0:
        print (2**(s-k+1)+1)
    else:
        print '0'
    
