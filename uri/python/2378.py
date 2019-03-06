n, c = input().split()
n = int(n)
c = int(c)
t = 0
r = "N"

for i in range(n):
    s, e = input().split()
    s = int(s)
    e = int(e)

    t = t + (e - s)

    if(t > c):
        r = ("S")

print(r)