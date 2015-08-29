# -*- coding: cp1252 -*-
##"I am," he said. He was staring at me, and I could see the corners of his eyes crinkling. "I'm in love with you, and I'm not in the business of denying myself the simple pleasure of saying true things. I'm in love with you, and I know that love is just a shout into the void, and that oblivion is inevitable, and that we're all doomed and that there will come a day when all our labor has been returned to dust, and I know the sun will swallow the only earth we'll ever have, and I am in love with you.”

print 0

##f1=open("Cypher_Bonus.txt","r")
##f2=open("wordlist.txt","r")
##f3=open("Decypher.txt","w")
##c=[]
##mode=0
##a=f1.readline()
##d=f2.read()
##a=a.split()
##for k in range(len(a)):
##    for i in range(26):
##        t=a[k]
##        
##        t=list(t)
##        for j in range(len(t)):
##            if ord(t[j])<=90 and ord(t[j])>=65:
##                if (ord(t[j])-i)<65:
##                    p=ord(t[j])-i
##                    p=91-65+p
##                    t[j]=chr(p)
##                else:
##                    t[j]=chr(ord(t[j])-i)
##            elif ord(t[j])<=122 and ord(t[j])>=97:
##                if (ord(t[j])-i)<97:
##                    p=ord(t[j])-i
##                    p=123-97+p
##                    t[j]=chr(p)
##                else:
##                    t[j]=chr(ord(t[j])-i)
##        
##                
##        t=''.join(t)
##        t=str(t)
##        if t in d:
##            c.append(i)
##r=list(set(c))
##maxcl=0
##for i  in range(len(r)):
##    if mode<c.count(r[i]):
##        mode=c.count(r[i])
##        maxcl=r[i]
##
##xxx=[]
##for k in range(len(a)):
##    t=a[k]
##    
##    t=list(t)
##    for j in range(len(t)):
##        if ord(t[j])<=90 and ord(t[j])>=65:
##            if (ord(t[j])-maxcl)<65:
##                p=ord(t[j])-maxcl
##                p=91-65+p
##                t[j]=chr(p)
##            else:
##                t[j]=chr(ord(t[j])-maxcl)
##        elif ord(t[j])<=122 and ord(t[j])>=97:
##            if (ord(t[j])-maxcl)<97:
##                p=ord(t[j])-maxcl
##                p=123-97+p
##                t[j]=chr(p)
##            else:
##                t[j]=chr(ord(t[j])-maxcl)
##    t=''.join(t)
##    xxx.append(t)
    


##print " ".join(xxx)
##f3.write(" ".join(xxx)+"\n")

##f1.close()
##f2.close()
##f3.close()

