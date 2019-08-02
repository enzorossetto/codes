dias = int(input())

a = int(round(dias//365))

if(dias - 365*a > 0):
    m = int(round((dias - 365*a)//30))
else:
    m = 0

if(dias - 365*a - 30*m > 0):
    d = dias - 365*a - 30*m
else:
    d = 0
    
print(a, "ano(s)")
print(m, "mes(es)")
print(d, "dia(s)")