# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
d1 = input()
d1 = d1.split("Dia ")
x = input()
d2 = input()
d2 = d2.split("Dia ")
y = input()
x = x.split(" : ")
y = y.split(" : ")

di1,d1 = d1
di3,d2 = d2

d1 = int(d1)
d2 = int(d2)
h1,m1,s1 = x
h2,m2,s2 = y
h1 = int(h1)
h2 = int(h2)
m1 = int(m1)
m2 = int(m2)
s1 = int(s1)
s2 = int(s2)
d1 = int(d1)
d2 = int(d2)
contadorsegundos = 0
contadorminutos = 0
contadorhoras = 0
contadordias = 0
dias = 0
horas = 0
minutos = 0
mm1 = 0
hh1 = 0
while s1 < 60:
    s1 = s1 +1
    if s1 == 60:
        m1 = m1 +1
        if m1 == 60:
            h1 = h1 +1
            if h1 == 24:
                d1 = d1 +1
    contadorsegundos = contadorsegundos +1
    if contadorsegundos == 60:
        contadorsegundos = 0
        contadorminutos = contadorminutos +1
        if contadorminutos == 60:
            contadorminutos = 0
            contadorhoras = contadorhoras +1
            if contadorhoras == 24:
                contadorhoras = 0
                contadordias = contadordias +1

    if s1 == 60:
        s1 = 0
    if m1 == 60:
        m1 = 0
    if h1 == 24:
        h1 = 0
    if d1 == d2:
        if h1 == h2:
            if m1 == m2:
                if s1 == s2:
                    break
    


w = contadordias
x = contadorhoras
y = contadorminutos
z = contadorsegundos

print("%d dia(s)" %w)
print("%d hora(s)" %x)
print("%d minuto(s)" %y)
print("%d segundo(s)" %z)
