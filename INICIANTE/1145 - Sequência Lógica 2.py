# -*- coding: utf-8 -*-

'''
Escreva a sua solu��o aqui
Code your solution here
Escriba su soluci�n aqu�
'''
x = input()
x = x.split(" ")
x,y = x
y = int(y)
x = int(x)
j = 1
ir = 0
p = x -1
if (1 < x < 20) and (x < y < 100000):
    while j <= y:
        if ir == p:
            print(end="%d" %j)
        if ir != p:
            print(end="%d " %j)
        ir = ir +1
        if ir == x:
            print()
            ir = 0
        j = j +1
