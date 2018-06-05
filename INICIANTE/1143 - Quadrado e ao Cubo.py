# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
x = int(input())
contador = 0
sequencia = 0
y = 0
multiplicador = 0
resultado = 0
if (1 < x < 1000):
    while y < x:
        sequencia = sequencia +1
        contador = contador +1
        multiplicador = sequencia + multiplicador
        print(sequencia, end=" ")
        print(multiplicador, end=" ")
        resultado = (sequencia*multiplicador)
        multiplicador = multiplicador + sequencia
        print(resultado)
        if contador == 3:
            contador = 0
        y = y +1
