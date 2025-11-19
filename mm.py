n = int(input())
a = list(map(int, input().split()))

T = 0
for x in a:
    T ^= x

prefix = 0
ans = 0

for i in range(n):
    prefix ^= a[i]
    if prefix == T:
        ans += 1
        prefix = 0

print(ans)
