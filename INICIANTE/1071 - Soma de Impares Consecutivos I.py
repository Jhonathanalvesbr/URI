# -*- coding: utf-8 -*-

'''
Escreva a sua solu��o aqui
Code your solution here
Escriba su soluci�n aqu�
'''
x = int(input())
y = int(input())
ir = 0
y = y +1
while y < x:
    if y%2==1:
        ir = ir + y
    if y == x:
        break
    y = y +1
print(ir)


