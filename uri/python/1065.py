numeros = [int(input()) for i in range(5)]
pares = 0

for i in range(5):
    if(numeros[i] % 2 == 0):
        pares += 1

print(pares, "valores pares")