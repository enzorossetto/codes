import math

a, b, c = input().split()

delta = math.pow(float(b),2) - (4*float(a)*float(c))

if((float(a) == 0) or (delta < 0)):
    print ("Impossivel calcular")

else:
    print("R1 = %.5f" %((-float(b)+math.sqrt(delta))/(2*float(a))))
    print("R2 = %.5f" %((-float(b)-math.sqrt(delta))/(2*float(a))))