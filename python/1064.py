numeros = [float(input()) for i in range(6)]
somaPositivos = 0
quantiaPositivos = 0

for i in range (6):
    if(numeros[i] > 0):
        somaPositivos = somaPositivos + numeros[i]
        quantiaPositivos += 1

print(quantiaPositivos, "valores positivos")
print("%.1f" %(somaPositivos/quantiaPositivos))