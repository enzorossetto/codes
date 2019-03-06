a, b ,c= input().split()
a = float(a)
b = float(b)
c = float(c)

if ( (abs(b-c) < a) and (a < b+c) and (abs(a-c) < b) and(b < (a+c)) and (abs(a-b) < c) and (c < a+b)):
    print("Perimetro = %.1f" % (a + b + c))

else:
    print("Area = %.1f" % (((a + b) *c) / 2))