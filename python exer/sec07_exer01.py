#Faça um algoritmo que determine o maior entre N numeros. 
# A condição de parada é entrada de um valor 0, ate isso acontecer fica em loop.

#variaveis
maior = 0

#entrada
n = int(input("Informe um número: "))
while n != 0:
    if n > maior:
        maior = n
    n = int(input("Informe um número: "))
print("O maior número é {0}.".format(maior))