def isSorted(a):
    return a == sorted(a)

t=int(input())
for i in range(t):
    n=int(input())
    a=list()
    for i in range(n):
        x=int(input())
        a.append(x)
    i=1
    test=isSorted(a)
    while ( not test ) and ( i<n//2 -1 ):
        if a[i]>a[i*2]:
            a[i] , a[i*2] = a[i*2] , a[i] # Pythonic way of permutation using tuple unpacking
        i+=1
        test=isSorted(a)
    if test:
        print("YES")
    else:
        print("NO")
