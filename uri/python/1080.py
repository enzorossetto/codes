m = -1
p = 0
for i in range (100):
    n = int(input())

    if(n > m):
        m = n
        p = i + 1

print("%d\n%d" %(m, p))