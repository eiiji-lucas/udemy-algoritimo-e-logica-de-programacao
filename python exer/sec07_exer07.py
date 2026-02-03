#A empresa contratou um estagiário para avaliar cerca de 200 mouses encontrados na sucata, registrando o estado de cada um. 
#Você deve criar um programa que receba repetidamente o ID do mouse e o tipo de defeito (esfera, limpeza, cabo/conector ou quebrado). 
#O processo termina quando o ID informado for zero.
#Ao final, o programa deve gerar um relatório com a quantidade total de mouses e o percentual de cada tipo de defeito.

#variaveis 
contador_total = 0
contador_sit_1 = 0
contador_sit_2 = 0
contador_sit_3 = 0
contador_sit_4 = 0

#entradas
indentificador = int(input("Informe a indentificação: "))

#entrada/processamento
while indentificador != 0:
    print("1 - Necessidade de esfera.")
    print("2 - Necessidade de limpeza.")
    print("3 - Necessidade de troca de cabo ou conector.")
    print("4 - Quebrado ou inutilizado.")

    #entrada
    defeito = int(input("Informe o tipo defeito: "))

    #processamento
    if defeito == 1:
        contador_sit_1 = contador_sit_1 + 1
    elif defeito == 2:
        contador_sit_2 = contador_sit_2 + 1
    elif defeito == 3:
        contador_sit_3 = contador_sit_3 + 1
    elif defeito == 4:
        contador_sit_4 = contador_sit_4 + 1
    contador_total = contador_total + 1

    indentificador = int(input("Informe a indentificação: "))

p1 = contador_sit_1 / contador_total * 100.0
p2 = contador_sit_2 / contador_total * 100.0
p3 = contador_sit_3 / contador_total * 100.0
p4 = contador_sit_4 / contador_total * 100.0

print("Quantidade de mouses: {0}".format(contador_total))
print("Situação                                    Quantidade      Porcentual")
print("1 - Necessidade de esfera                      {0}           {1:.2f}".format(contador_sit_1. p1))
print("2 - Necessidade de limpeza                     {0}           {1:.2f}".format(contador_sit_2, p2))
print("3 - Necessidade de troca de cabo ou conector   {0}           {1:.2f}".format(contador_sit_3, p3))
print("4 - Quebrado ou inutilizado                    {0}           {1:.2f}".format(contador_sit_4, p4))