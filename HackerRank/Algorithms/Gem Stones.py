n=input()
l=[]
for i in range(n):
    a=raw_input()
    a=list(a)
    a=set(a)
    a=list(a)
    for j in range(len(a)):
        l.append(a[j])
    
x=l

x=set(l)
x=list(x)
c=0
for i in range(len(x)):
    if l.count(x[i])==n:
        c+=1
print c
