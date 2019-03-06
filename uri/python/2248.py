t = 1
while True:
    n = int(input())

    if(n == 0):
        break

    else:
        c = [0]*n
        m = [0]*n
        
        for i in range(n):
            c[i], m[i] = input().split()
            c[i] = int(c[i])
            m[i] = int(m[i])

        Max = m[0]
        for i in range(n):
            if(m[i] > Max):
                Max = m[i]

        print("Turma", t)

        for i in range(n):
            if(Max == m[i]):
                print(c[i], end=(" "))

        t = t + 1
        print("\n")