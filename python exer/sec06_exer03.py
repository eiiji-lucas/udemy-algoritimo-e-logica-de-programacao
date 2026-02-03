#Ler um número e verificar se ele é par ou ímpar. Quando par armazenar em 'p' e quando for ímpar em 'i'
#Exibir 'p' e 'i'no final do processamento

#variaveis
p = 0
i = 0

#entrada
n = int(input("Informe um número: "))

#processamento
if n % 2 == 0:
    p = n
else:
    i = n

#saida
print (p) 
print (i) 