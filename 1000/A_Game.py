t=int(input())
for _ in range(t):
    k=int(input())
    a1 , b1 = map(int , input().split())
    a2 , b2 = map(int , input().split())
    if( (b1+b2+k) > (a1+a2+0)):
        print("YES")
    else:
        print("NO")