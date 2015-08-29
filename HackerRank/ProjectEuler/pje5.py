def lcm(n):
    for i in range(1,n+1):
        if i > i+1:
            greater = i
        else:
            greater = i+1

        while(True):
            if((greater % i == 0) and (greater % i+1 == 0)):
                lcm = greater
                break
            greater += 1

        return lcm
        
t=input()
for i in range(t):
    n=input()
    print lcm(n)
