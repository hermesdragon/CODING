n=input()
k=input()
c=raw_input()
x=[]
x=c.split()
for i in range(len(x)):
     x[i]=int(x[i])
l=len(x)-2
a=x[l]
d=x[len(x)-1]-a
i=len(x)-3
while i>-1:
    x[i]=a - d
    a=x[i]
    i-=1
print x
