def busca (v, tamanho_vetor,valor):

    contador = len(v);

    if(contador!=tamanho_vetor):
        return -1;
    else:
        for i in range (tamanho_vetor):
            if v[i] == valor:
                return i;
    return 0;


vetor[5] = [17, 42, 9, 33, 12]
resultado = busca(vetor,5,1)
