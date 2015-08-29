n=input()
k=input()
def hanoi(n,a,c,b):
    global t    #use the global variable t
    if(n>0):
        hanoi(n-1,a,b,c)
        if a!=0 :
            if t<k:     #will pop till t is less than position
                b.append(a.pop())
                t=t+1
        hanoi(n-1,c,a,b)
a=range(n)
b=[]
c=[]
t=0
hanoi(n,a,b,c)
print len(a)
print len(b)
print len(c)
