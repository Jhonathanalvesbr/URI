# -*- coding: utf-8 -*-

'''
Escreva a sua solu��o aqui
Code your solution here
Escriba su soluci�n aqu�
'''
x = float(input())
if x >= 0 and x <= 2000:
    x = "Isento"
    print(x)
elif x > 2000 and x <= 3000:
    x = (x-2000)*0.08
    print("R$ %.2f" %x)
elif x > 3000 and x <= 4500:
    y = 1000*0.08
    x = y+((x-3000)*0.18)
    print("R$ %.2f" %x)
elif x > 4500:
    y = 1000*0.08
    z = 1500*0.18
    x = y+z+((x-4500)*0.28)
    print("R$ %.2f" %x)
