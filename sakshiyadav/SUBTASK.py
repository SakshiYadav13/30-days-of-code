T=int(input())
for _ in range(T):
    N,M,K=map(int, input().split())
    a=list(map(int, input().split()))
    i=0
    c=0
    if a.count(1)==N:
        print("100")
    elif a[:M].count(0)==0:
        print(K)
    else:
        print("0")
