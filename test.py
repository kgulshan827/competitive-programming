from collections import defaultdict

def solve(url,n,params,val):
    d=defaultdict(int)
    for i in range (n):
        d[params[i]]=val[i]
    base=""
    a=""
    for i in range (len(url)):
        if url[i]=='?':
            base=url[:i]
            a=url[i+1:]
            break
    a=list(a.split(','))
    print(a)
    m=len(a)

    ch=200
    for i in range (m):
        a[i]=list(a[i].split('='))
        a[i][1]=int(a[i][1])
        if a[i][1]>d[a[i][0]]:
            ch=404
    a.sort()
    print(base)
    print(m)
    for i in a:
        print(*i)
    print(ch)
    
    
s=input().strip()
n=int(input())
a=list(map(str,input().split()))
b=list(map(int,input().split()))
solve(s,n,a,b)