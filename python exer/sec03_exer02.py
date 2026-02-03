#Faça um algoritmo para calcular o estoque médio de uma peça

#entrada
quantidade_minima = int(input("Informe a quantidade mínima: "))
quantidade_maxima = int(input("Informe a quantidade máxima: "))

#processamento
estoque_medio = (quantidade_minima + quantidade_maxima) / 2

#saida  
print("O estoque médio da peça é {0}".format(estoque_medio))