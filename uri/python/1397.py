while True:
    n = int(input())

    if(n == 0):
        break

    else:
        pa = 0
        pb = 0
        
        for i in range(n):
            a,b = input().split()
            a = int(a)
            b = int(b)

            if(a > b):
                pa = pa + 1

            elif(b > a):
                pb = pb + 1

        print(pa, pb)