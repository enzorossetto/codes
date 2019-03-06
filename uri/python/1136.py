while True:
    n, b = list(map(int, input().split()))

    if(n == b == 0):
        break

    globo = list(map(int, input().split()))
        
    if(n == 0):
        print("Y")

    else:
        nums = [0] * (n+1)
        cont = 0

        for c in range(n+1):
            for i in range(c, b):
                if(nums[abs(globo[c] - globo[i])] == 0):
                        
                    nums[abs(globo[c] - globo[i])] = 1
                    cont = cont + 1

        if(cont == n+1):
            print("Y")

        else:
            print("N")