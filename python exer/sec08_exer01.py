#Faça um algoritmo que carregue um valor de 5 elementos inteiros e em seguida armazene em um vetor apenas os numeros pares maiores que 0

#variaveis 
vetor = [] #lista vazia
pares = []

for n in range (1, 6):
    vetor.append(n) #adiciona n 
    if n % 2 == 0:
        pares.append(n) #adiciona so os pares 
for p in pares:  #para cada par printar
    print(p)