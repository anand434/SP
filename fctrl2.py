def fact(x):
    ans = 1
    while (x > 1):
        ans *= x
        x -= 1
    return ans

n = int(input())
l = []
for i in range(1 , n+1):
    i = int(input())
    l.append(i)

for i in range(0 , n):
    print(fact(l[i]))