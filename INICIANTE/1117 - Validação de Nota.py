# -*- coding: utf-8 -*-

'''
Escreva a sua solu��o aqui
Code your solution here
Escriba su soluci�n aqu�
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
