i = int(input())
f = int(input())

if (i > f):
    i, f = f, i
    

if (i%2 == 0):
    i = i + 1
else:
    i = i + 2

s = 0
for t in range(i, f, 2):
    s = s + t

print(s)