n = int(input())

if(n%2 == 0):
    for i in range (2, n+1, 2):
        print("%d^2 = %d" %(i, i*i))
else:
    for i in range (2, n, 2):
        print("%d^2 = %d" %(i, i*i))