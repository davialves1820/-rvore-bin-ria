# Fila Sequencial

## 📄 Descrição
Implementação do tipo abstrado de dado árvore binária em c. A implementação já acompanha um caso de teste no arquivo main, que demonstra o uso da árvore.

---

## 🗂️ Estrutura dos arquivos
- **📁 src**:
    - free_memory.c: Libera a memória alocada.
    - initialize.c: Inicializa os nós e a árvore
    - insert.c: Contém as funções de inserção na árvore.
    - move.c: Funções para percorrer a árvore binária.
    - search.c: Função de busca por uma sub-árvore.
    - main.c: Arquivo principal.
- **📁 include**:
    - node.h: Definição da estrutura nó.
    - binary_tree.h: Definição da estrutura árvore binária
    - free_memory.h: Libera a memória alocada.
    - initialize.h: Declaração das funções de inicialização.
    - insert.h: Declaração de funções de inserção
    - move.h: Declaração de funções de movimentação.
    - search.h: Declaração da função de busca.
- **Makefile**: Arquivo de configuração para a compilação do programa.

---

## ⚙️ Como Compilar e Executar

### Compilando o Código

```bash
make
```

### Executando o Programa

```bash
./bin/programa
```

---

## 🔧 Funcionalidades
O programa permite realizar as seguintes operações na árvore binária:
- Criar uma árvore binária vazia;
- Testar se a árvore está vazia;
- Inserir um nó filho, esquerdo ou direito, em um nó;
- Exibir os elementos da árvore na sequência pré-ordem.
- Exibir os elementos da árvore na sequência in-ordem.
- Exibir os elementos da árvore na sequência pós-ordem.

---

## 🖥️ Saída do Programa
Exemplo de funcionamento da árvore binária:

```


```