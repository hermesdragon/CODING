t=input()

for i in range(t):
    h=1
    g=input()
    for j in range(g):
        if j%2==0:
            h=h*2
        else:
            h=h+1
    print h
