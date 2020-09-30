for _ in range(int(input())):
    n=int(input())
    a=[int(i) for i in input().split()]
    ans=int(a[0]==1)
    i=1
    while i<n-2:
        if a[i]+a[i+1]+a[i+2]==3:
            ans+=1
            i+=3
        else:
            i+=1
    print(ans)