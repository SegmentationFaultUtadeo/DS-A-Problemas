while True:
    try:
        cadena = input()
        def find_all(cadena):
            indexes = []
            for i in range(len(cadena)):
                if (cadena[i] == '\"'): indexes.append(i)
            return indexes

        indices = find_all(cadena)
        for i in range(len(indices)):
            if (not(i % 2)): cadena = cadena.replace("\"", "``", count=1)
            else: cadena = cadena.replace("\"", "''", count = 1)

        print(cadena)
    except EOFError:
        break
