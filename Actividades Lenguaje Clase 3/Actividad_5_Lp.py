sucursales = list(range(1, 26))
ventas = [5000, 7500, 3200, 8900, 4500, 6700, 7800, 2300, 9100, 5600,
          4300, 8200, 6900, 3400, 8700, 5100, 7600, 2900, 9400, 6100,
          4800, 8500, 7200, 3900, 8800]

promedio = sum(ventas) / len(ventas)
print(f"Promedio de ventas: {promedio}")

print("3 sucursales con ventas mayores al promedio:")
contador = 0
for i in range(len(ventas)):
    if ventas[i] > promedio:
        print(f"Sucursal: {sucursales[i]} con ventas ${ventas[i]}")
        contador += 1
        if contador == 3:
            break
