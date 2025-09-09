import random 
valores = []
for i in range(10):
    valor = random.randint(1, 100)
    valores.append(valor)

suma = sum(valores)
promedio = suma / 10

print(f"Suma: {suma}")
print(f"Promedio: {promedio}")