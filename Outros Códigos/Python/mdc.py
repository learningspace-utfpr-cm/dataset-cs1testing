def mdc (a,b):
    if ((a==0)or(b==0)):
        return 0
    else:
        while (b != 0):
            resto = a % b
            a = b
            b = resto
    a = abs(a)
    print(" o MDC é ",a)
    return a

a = float(input('Entre com o valor de a: '))
b = float(input('Entre com o valor de b: '))

mdc (a,b)
