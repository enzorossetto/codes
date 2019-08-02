n = int(input())
t = 1

while(n != 0):
    dif = 0
    print("Teste",t)
    
    for i in range(n):
        a, b = input().split()
        a = int(a)
        b = int(b)

        dif = dif + (a-b)
        print(dif)

    t = t + 1
    print()
    n = int(input())