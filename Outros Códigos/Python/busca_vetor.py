def busca (v,valor):

    contador = len(v);
    
    if(contador!=5):
        print ("vetor de tamanho diferente")
        return -1;
    else:
        for i in range (contador):
            if v[i] == valor:
                print("O valor ",v[i], " está no índice: ", i)
                return i;

    return -1;



vetor = [17, 42, 19, 33, 15, 34]

resultado = busca(vetor,17)
print (resultado)
