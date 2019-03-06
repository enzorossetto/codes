s = float(input())

if(s <= 400):
    c = 1.15*s

elif(s <= 800):
    c = 1.12*s

elif(s <= 1200):
    c = 1.1*s

elif(s <= 2000):
    c = 1.07*s

else:
    c = 1.04*s

print("Novo salario: %.2f" % c)
print("Reajuste ganho: %.2f" %(c - s))
print("Em percentual:", round(100*(c/s)) - 100, "%")