#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TOTAL_ALUNOS 10
#define TOTAL_LIVROS 10

struct Aluno {
    int ra;
    char nome [20];
    char curso [20];

} alunos [10];

struct Livro {
    int codigo;
    char titulo [20];
    int numeroPaginas;

} livros [10];

void cadastrarAluno() {

    int i;
    
    printf("\n\nCADASTRO DE ALUNOS");
    
    for (i = 0; i < TOTAL_ALUNOS; i++) {

        if (alunos[i].ra == 0) {
           
            printf("\nInforme o RA do aluno: ");
            scanf("%d", &alunos[i].ra);
            setbuf(stdin, NULL);

            printf("Informe o nome do aluno: ");
            gets(alunos[i].nome);

            printf("Informe o curso do aluno: ");
            gets(alunos[i].curso);
            
            break;
        }
    }    
    if(i == TOTAL_ALUNOS) {
        
        printf("\n\nEspaco insuficiente.");
    }
}

void listarAlunos() {

    printf("\n\nLISTA DE ALUNOS");

    for (int i = 0; i < TOTAL_ALUNOS; i++) {

        if (alunos[i].ra != 0) {

            printf("\nRA: %d - Nome: %s - Curso: %s", alunos[i].ra, alunos[i].nome, alunos[i].curso);
        }
    }
}

void editarAluno() {

    int ra;
    int i;

    printf("\n\nEDICAO DE ALUNOS");
    
    printf("\nRA para busca: ");
    scanf("%d", &ra);
    setbuf(stdin, NULL);

    for (i = 0; i < TOTAL_ALUNOS; i++) {

        if (alunos[i].ra == ra) {

            printf("Informe o nome do aluno: ");
            gets(alunos[i].nome);

            printf("Informe o curso do aluno: ");
            gets(alunos[i].curso);
            
            break;
        }
    }
    if (i == TOTAL_ALUNOS) {

        printf("\nNenhum registro encontrado.");
    }
}

void cadastrarLivro() {
    
    int i;
    
    printf("\n\nCADASTRO DE LIVROS");
    
    for (i = 0; i < TOTAL_LIVROS; i++) {

        if (livros[i].codigo == 0) {
           
            printf("\nInforme o código do livro: ");
            scanf("%d", &livros[i].codigo);
            setbuf(stdin, NULL);

            printf("Informe o titulo do aluno: ");
            gets(livros[i].titulo);

            printf("Informe o numero de páginas do livro: ");
            scanf("%d", &livros[i].numeroPaginas);
            setbuf(stdin, NULL);
            
            break;
        }
    }    
    if(i == TOTAL_LIVROS) {
        
        printf("\n\nEspaco insuficiente.");
    }
}

void listarLivros() {
    
    printf("\n\nLISTA DE LIVROS");
    
    for (int i = 0; i < TOTAL_LIVROS; i++) {

        if (livros[i].codigo != 0) {

            printf("\nCodigo: %d - Titulo: %s - Numero de Paginas: %d", livros[i].codigo, livros[i].titulo, livros[i].numeroPaginas);
        }
    }
}

void editarLivro() {
    
    int codigo;
    int i;

    printf("\n\nEDICAO DE LIVROS");
    
    printf("\nCodigo para busca: ");
    scanf("%d", &codigo);
    setbuf(stdin, NULL);

    for (i = 0; i < TOTAL_LIVROS; i++) {

        if (livros[i].codigo == codigo) {

            printf("Informe o codigo do livro: ");
            gets(livros[i].titulo);

            printf("Informe o curso do aluno: ");
            scanf("%d", &livros[i].numeroPaginas);
            setbuf(stdin, NULL);
            
            break;
        }
    }
    if (i == TOTAL_LIVROS) {

        printf("\nNenhum registro encontrado.");
    }
}

int main(int argc, char** argv) {

    int opcao;

    do {

        printf("\n\nMENU PRINCIPAL");
        printf("\n\n1 - Cadastrar Aluno");
        printf("\n2 - Listar Alunos");
        printf("\n3 - Editar Aluno");
        printf("\n4 - Cadastrar Livro");
        printf("\n5 - Listar Livros");
        printf("\n6 - Editar Livro");
        printf("\n7 - SAIR");

        printf("\n\nOpcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                cadastrarAluno();
                break;

            case 2:
                listarAlunos();
                break;

            case 3:
                editarAluno();
                break;

            case 4:
                cadastrarLivro();
                break;

            case 5:
                listarLivros();
                break;

            case 6:
                editarLivro();
                break;

            case 7:
                continue;

            default:
                printf("\nOpcao Invalida!");
        }

    } while (opcao != 7);

    return (EXIT_SUCCESS);
}

