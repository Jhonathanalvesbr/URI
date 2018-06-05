# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
dinheiro = float(input())
if (dinheiro > 0) and (dinheiro < 1000000):
    print("NOTAS:")
    dinheiro = dinheiro + 1e-9
    if dinheiro >= 100:
        x = int(dinheiro / 100)
        dinheiro = dinheiro - (x*100)
        print ("%d nota(s) de R$ 100.00" %x)
    else:
        x = 0
        print ("%d nota(s) de R$ 100.00" %x)
    if dinheiro >= 50:
        x = int(dinheiro / 50)
        dinheiro = dinheiro - (x*50)
        print ("%d nota(s) de R$ 50.00" %x)
    else:
         x = 0
         print ("%d nota(s) de R$ 50.00" %x)
    if dinheiro >= 20:
        x = int(dinheiro / 20)
        dinheiro = dinheiro - (x*20)
        print ("%d nota(s) de R$ 20.00" %x)
    else:
         x = 0
         print ("%d nota(s) de R$ 20.00" %x)
    if dinheiro >= 10:
        x = int(dinheiro / 10)
        dinheiro = dinheiro - (x*10)
        print ("%d nota(s) de R$ 10.00" %x)
    else:
         x = 0
         print ("%d nota(s) de R$ 10.00" %x)
    if dinheiro >= 5:
        x = int(dinheiro / 5)
        dinheiro = dinheiro - (x*5)
        print ("%d nota(s) de R$ 5.00" %x)
    else:
         x = 0
         print ("%d nota(s) de R$ 5.00" %x)
    if dinheiro >= 2:
        x = int(dinheiro / 2)
        dinheiro = dinheiro - (x*2)
        print ("%d nota(s) de R$ 2.00" %x)
    else:
        x = 0
        print ("%d nota(s) de R$ 2.00" %x)
    print("MOEDAS:")
    if dinheiro >= 1.00:
        x = int(dinheiro / 1.00)
        dinheiro = dinheiro - (x*1.00)
        print ("%d moeda(s) de R$ 1.00" %x)
    else:
         x = 0
         print ("%d moeda(s) de R$ 1.00" %x)
    if dinheiro >= 0.50:
        x = int(dinheiro / 0.50)
        dinheiro = dinheiro - (x*0.50)
        print ("%d moeda(s) de R$ 0.50" %x)
    else:
         x = 0
         print ("%d moeda(s) de R$ 0.50" %x)
    if dinheiro >= 0.25:
        x = int(dinheiro / 0.25)
        dinheiro = dinheiro - (x*0.25)
        print ("%d moeda(s) de R$ 0.25" %x)
    else:
         x = 0
         print ("%d moeda(s) de R$ 0.25" %x)
    if dinheiro >= 0.10:
        x = int(dinheiro / 0.10)
        dinheiro = dinheiro - (x*0.10)
        print ("%d moeda(s) de R$ 0.10" %x)
    else:
         x = 0
         print ("%d moeda(s) de R$ 0.10" %x)
    if dinheiro >= 0.05:
        x = int(dinheiro / 0.05)
        dinheiro = dinheiro - (x*0.05)
        print ("%d moeda(s) de R$ 0.05" %x)
    else:
         x = 0
         print ("%d moeda(s) de R$ 0.05" %x)
    if dinheiro >= 0.01:
        x = int(dinheiro / 0.01)
        print ("%d moeda(s) de R$ 0.01" %x)
    else:
         x = 0
         print ("%d moeda(s) de R$ 0.01" %x)
