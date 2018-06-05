# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
x = int(input())
x = x*2
contador = 0
sequencia = 0
y = 0
multiplicador = 0
resultado = 0
ir = 1
j = 0
i = 0
p = 0

while y < x:
    ir = ir +1
    j = j +1
    i = i +1
    if ir == 2:
        ir = 0
        sequencia = sequencia +1
    multiplicador = multiplicador +1
    contador = contador +1
    print(sequencia, end=" ")
    if p == 0:
        resultado = (sequencia*multiplicador)
        p = 1
    print(multiplicador, end=" ")
    if j == 2:
        multiplicador = multiplicador + i -1
        j = 0
        p = 0
    print(resultado)
    resultado = resultado +1
    if contador == 3:
        contador = 0
    y = y +1
