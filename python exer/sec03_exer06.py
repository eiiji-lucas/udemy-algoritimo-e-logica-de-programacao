#faça um algoritmo que pergunte quanto você ganha por hora e o número de horas trabalhadas por mês. Calcule e mostre o total do 
# seu salário no referido mês.

#entrada
horas_trabalhadas = int(input("Informe quantas horas foram trabalhadas: "))
valor_da_hora = float(input("Informe o valor da hora: "))

#processamento
multi = horas_trabalhadas * valor_da_hora

#saida
print("O salário total deste mês é R$ {0:.2f}".format(multi))  