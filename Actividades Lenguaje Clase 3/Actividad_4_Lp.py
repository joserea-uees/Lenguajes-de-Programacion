import random

valores = [random.randint(50, 100) for _ in range(500)]

pares = sum(1 for v in valores if v % 2 == 0)
impares = 500 - pares

print(f"Valores pares: {pares}")
print(f"Valores impares: {impares}")