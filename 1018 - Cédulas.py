# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
dinheiro = int(input())

if (dinheiro > 0) and (dinheiro < 1000000):
    print(dinheiro)
    if dinheiro >= 100:
        x = int(dinheiro / 100)
        dinheiro = dinheiro - (x*100)
        print ("%d nota(s) de R$ 100,00" %x)
    else:
        x = 0
        print ("%d nota(s) de R$ 100,00" %x)
    if dinheiro >= 50:
        x = int(dinheiro / 50)
        dinheiro = dinheiro - (x*50)
        print ("%d nota(s) de R$ 50,00" %x)
    else:
         x = 0
         print ("%d nota(s) de R$ 50,00" %x)
    if dinheiro >= 20:
        x = int(dinheiro / 20)
        dinheiro = dinheiro - (x*20)
        print ("%d nota(s) de R$ 20,00" %x)
    else:
         x = 0
         print ("%d nota(s) de R$ 20,00" %x)
    if dinheiro >= 10:
        x = int(dinheiro / 10)
        dinheiro = dinheiro - (x*10)
        print ("%d nota(s) de R$ 10,00" %x)
    else:
         x = 0
         print ("%d nota(s) de R$ 10,00" %x)
    if dinheiro >= 5:
        x = int(dinheiro / 5)
        dinheiro = dinheiro - (x*5)
        print ("%d nota(s) de R$ 5,00" %x)
    else:
         x = 0
         print ("%d nota(s) de R$ 5,00" %x)
    if dinheiro >= 2:
        x = int(dinheiro / 2)
        dinheiro = dinheiro - (x*2)
        print ("%d nota(s) de R$ 2,00" %x)
    else:
     x = 0
     print ("%d nota(s) de R$ 2,00" %x)
    if dinheiro >= 1:
        x = int(dinheiro / 1)
        print ("%d nota(s) de R$ 1,00" %x)
    else:
         x = 0
         print ("%d nota(s) de R$ 1,00" %x)
