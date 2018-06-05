# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
j = 0
media = 0
contador = 0
i = 0
c = 0
whi = 0
while j != 2:
    if i == 2:
        i = 0
        contador = 0
        media = 0
        whi = 0
        while whi < 1 or whi > 2:

            whi = int(input("novo calculo (1-sim 2-nao)\n"))    

    if whi == 2:
        break
    
    x = float(input())

    if x < 0 or x > 10:
        print("nota invalida")
    if x >= 0 and x <= 10:
        media = media +x
        contador = contador +1
        i = i +1
        if i == 2:
            print("media = %.2f" %(media/contador))
