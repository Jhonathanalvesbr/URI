# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
x= int(input())
contador = 0
numero = 0
x = x*3
y = 0
while y < x:
    numero = numero +1
    contador = contador +1
    print(numero, end=" ")
    if contador == 3:
        contador = 0
        print("PUM")
        numero = numero +1
    y = y +1
