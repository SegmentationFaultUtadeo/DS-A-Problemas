string = input()

mitad_1 = string[0:len(string)//2]
mitad_2 = string[len(string)//2::]

def rotate(cadena: str):
    suma = 0
    for i in cadena:
        suma += ord(i) - 65
    cadena_final = ""
    for i in cadena:
        cadena_final += chr((((ord(i) - 65) + suma) % 26) + 65)
    return cadena_final

mitad_1 = rotate(mitad_1)
mitad_2 = rotate(mitad_2)

for i in range(len(mitad_1)):
    i_1 = mitad_1[i]
    i_2 = mitad_2[i]
    print(chr((((ord(i_1) - 65) + (ord(i_2) - 65)) % 26) + 65), end="")
    
