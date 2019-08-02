n = int(input())

for i in range(n):
    x = int(input())

    if(x == 0):
        type = "NULL"
    elif(x % 2 == 0):
        type = "EVEN"
    else:
        type = "ODD"

    if(x > 0):
        type = type + " POSITIVE"
    elif(x < 0):
        type = type + " NEGATIVE"

    print(type)