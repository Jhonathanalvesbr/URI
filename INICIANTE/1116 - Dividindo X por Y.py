# -*- coding: utf-8 -*-

'''
Escreva a sua solu��o aqui
Code your solution here
Escriba su soluci�n aqu�
'''
ir = int(input())
j = 1
while j <= ir:
    a = input()
    a = a.split(" ")
    a,b =a
    a = int(a)
    b = int(b)
    if b == 0:
        print("divisao impossivel")
    else:
        x = a / b
        print("%.1f" %x)

    j = j +1
