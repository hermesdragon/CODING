##the path of the righteous man is beset on all sides by the iniquities of the selfish and the tyranny of evil men blessed is he who in the name of charity and good will shepherds the weak through the valley of darkness for he is truly his brothers keeper and the finder of lost children and i will strike down upon thee with great vengeance and furious anger those who attempt to poison and destroy my brothers and you will know my name is the lord when i lay my vengeance upon thee
print 0


##f1=open("Cypher.txt","r")
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
##        t=t.lower()
##        t=list(t)
##        for j in range(len(t)):
##            if (ord(t[j])-i)<97:
##                p=ord(t[j])-i
##                p=123-97+p
##                t[j]=chr(p)
##            else:
##                t[j]=chr(ord(t[j])-i)
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
##xxx=[]
##for k in range(len(a)):
##    t=a[k]
##    t=t.lower()
##    t=list(t)
##    for j in range(len(t)):
##        if (ord(t[j])-maxcl)<97:
##            p=ord(t[j])-maxcl
##            p=123-97+p
##            t[j]=chr(p)
##        else:
##            t[j]=chr(ord(t[j])-maxcl)
##    t=''.join(t)
##    xxx.append(t)
##    
##
##
##print xxx
##f3.write(" ".join(xxx)+"\n")

##f1.close()
##f2.close()
##f3.close()

