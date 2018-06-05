# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
shi2 = 4
alcool = 0
gasolina = 0
disel = 0
while True:
    x = int(input())
    while x < 1 or x > 4:
        x = int(input())
    if x == 1:
        alcool = alcool +1
    if x == 2:
        gasolina = gasolina +1
    if x == 3:
        disel = disel +1
    if x == 4:
        break
print("MUITO OBRIGADO")
print("Alcool: %d" %alcool)
print("Gasolina: %d" %gasolina)
print("Diesel: %d" %disel)
