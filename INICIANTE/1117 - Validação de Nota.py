# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
media = 0
contador = 0
while contador != 2:
    a = float(input())
    if a < 0:
        print("nota invalida")
    elif a > 10:
        print("nota invalida")
    else:
        media = media + a
        contador = contador +1
media = media / contador
print("media = %.2f" %media)
