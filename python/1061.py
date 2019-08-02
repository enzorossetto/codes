diaInicio = input().split()
horaInicio = input().split()
diaFim = input().split()
horaFim = input().split()

dias = int(diaFim[1]) - int(diaInicio[1])
horas = int(horaFim[0]) - int(horaInicio[0])
minutos = int(horaFim[2]) - int(horaInicio[2])
segundos = int(horaFim[4]) - int(horaInicio[4])

if(segundos < 0):
    minutos -= 1
    segundos = segundos + 60

if(minutos < 0):
    horas -= 1
    minutos = minutos + 60

if(horas < 0):
    dias -= 1
    horas = horas + 24

print(dias, " dia(s)\n", horas, " hora(s)\n", minutos, " minuto(s)\n", segundos, " segundo(s)", sep="")