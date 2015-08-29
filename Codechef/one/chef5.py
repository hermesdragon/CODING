def is_prime(x):
    for n in range(2,x):
        if x%n==0:
            return False
        else:
            pass
    return True
gp=0
def gpfac(n):
    for i in range(2,n+1):
        if is_prime(i)==True:
            if n%i==0:
                gp=i
        else:
            pass
    print 5*(4**(gp-1))
n=input()
gpfac(n)
