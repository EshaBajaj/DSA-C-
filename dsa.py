n,q= map(int,input().split())
diff=[0]*n

for _ in range(q):
    s,v=map(int, input().split())
    diff[s]+=v

for i in range(1,n):
    diff[i]+=diff[i-1]

print(diff)

