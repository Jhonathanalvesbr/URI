# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
a = float(input())
b = float(input())
c = float(input())
d = float(input())
e = float(input())
f = float(input())
contador = 0
contadorpositivo = 0
media = 0
if a > 0:
    contador = contador +1
    contadorpositivo = contadorpositivo +a
if b > 0:
    contador = contador +1
    contadorpositivo = contadorpositivo +b
if c > 0:
    contador = contador +1
    contadorpositivo = contadorpositivo +c
if d > 0:
    contador = contador +1
    contadorpositivo = contadorpositivo +d
if e > 0:
    contador = contador +1
    contadorpositivo = contadorpositivo +e
if f > 0:
    contador = contador +1
    contadorpositivo = contadorpositivo +f
media = contadorpositivo / contador 
print("%d valores positivos" %contador)
print("%.1f" %media)
