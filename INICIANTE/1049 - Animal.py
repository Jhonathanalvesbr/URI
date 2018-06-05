# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''
a = input()
b = input()
c = input()
if a == "vertebrado":
    if b == "ave":
        if c == "carnivoro":
            x = "aguia"
        elif c == "onivoro":
            x = "pomba"
    elif b == "mamifero":
        if c == "onivoro":
            x = "homem"
        elif c == "herbivoro":
            x = "vaca"
elif a == "invertebrado":
    if b == "inseto":
        if c == "hematofago":
            x = "pulga"
        elif c == "herbivoro":
            x = "lagarta"
    elif b == "anelideo":
        if c == "hematofago":
            x = "sanguessuga"
        elif c == "onivoro":
            x = "minhoca"
print(x)
