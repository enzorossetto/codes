n = int(input())
k = int(input())
comp = [int(input()) for i in range(n)]

comp.sort(reverse=True)
cont = k

while True:
    if((cont < n) and (comp[cont] == comp[cont-1])):
        cont = cont + 1

    else:
        break

print(cont)
