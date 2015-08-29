t=input()
for i in range(t):
    m=0
    a=raw_input()
    a=list(a)
    for j in range(len(a)-1):
        if a[j]==a[j+1]:
            m+=1
    print m

    
