nperc=input()
loop=True
c=[1]
inc=0
num=1
nop=0
side=0
def isPrime(n):
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False

    return True  
    
while loop==True:
    inc+=2
    
    for i in range(4):
        num+=inc
        c.append(num)
        g=isPrime(num)
        
        if g==True:
            nop+=1
        else:
            continue
    l=len(c)
    if ((nop*100)/float(l))<nperc:
        loop=False
    else:
        loop=True

side=(c[l-1]**.5)
    
print int(side)
