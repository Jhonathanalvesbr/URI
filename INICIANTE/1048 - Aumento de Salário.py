# -*- coding: utf-8 -*-

'''
Escreva a sua solu��o aqui
Code your solution here
Escriba su soluci�n aqu�
'''
x = float(input())

if x <= 400:
    y = x+x*0.15
    x = y-x
    print("Novo salario: %.2f" %y)
    print("Reajuste ganho: %.2f" %x)
    print("Em percentual: 15 %")
elif x > 400 and x <= 800:
    y = x+x*0.12
    x = y-x
    print("Novo salario: %.2f" %y)
    print("Reajuste ganho: %.2f" %x)
    print("Em percentual: 12 %")
elif x > 800 and x <= 1200:
    y = x+x*0.10
    x = y-x
    print("Novo salario: %.2f" %y)
    print("Reajuste ganho: %.2f" %x)
    print("Em percentual: 10 %")
elif x > 1200 and x <= 2000:
    y = x+x*0.07
    x = y-x
    print("Novo salario: %.2f" %y)
    print("Reajuste ganho: %.2f" %x)
    print("Em percentual: 7 %")
elif x > 2000:
    y = x+x*0.04
    x = y-x
    print("Novo salario: %.2f" %y)
    print("Reajuste ganho: %.2f" %x)
    print("Em percentual: 4 %")
