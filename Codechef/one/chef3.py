t=input()
for i in range(t):
	a=raw_input()
	x,y = a.split()
	if x==y or int(y)==int(x)-1:
		print "Yes"
	else:
		print "No"
	t=t-1
		
