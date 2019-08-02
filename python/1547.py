n = int(input())

for i in range(n):
    qt, s = list(map(int, input().split()))
    v = list(map(int, input().split()))
    num = -1
            
    for j in range(qt):
        if(v[j] == s):
            num = j + 1
            break
                    
    if(num == -1):
        men = abs(v[0] - s)
        num = 1
                
        for k in range(1,qt,1):
            v[k] = abs(v[k] - s)
            if(v[k] < men):
                men = v[k]
                num = k + 1

    print(num)