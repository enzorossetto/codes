import math

while True:
    X1, Y1, X2, Y2 = input().split()
    X1 = int(X1)
    X2 = int(X2)
    Y1 = int(Y1)
    Y2 = int(Y2)

    if(X1 == Y1 == X2 == Y2 == 0):
        break
    elif((X1 == X2) and (Y1 == Y2)):
        print("0")
    elif((X1 == X2) or (Y1 == Y2) or (math.fabs(X1-X2) == math.fabs(Y1-Y2))):
        print("1")
    else:
        print("2")