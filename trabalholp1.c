void printCharFile(char texto[]){

	FILE *txt;

	if((txt = fopen("Resultado.txt", "a+")) == NULL){
		perror("Descricao do erro");
		exit(1);
	}

    fprintf(txt, "%s\n", texto);
	fclose(txt);

}

void printIntFile(int numero){

	FILE *txt;

	if((txt = fopen("Resultado.txt", "a+")) == NULL){
		perror("Descricao do erro");
		exit(1);
	}

    fprintf(txt, "%d\n", numero);
	fclose(txt);

}

void printFloatFile(float numero){

	FILE *txt;

	if((txt = fopen("Resultado.txt", "a+")) == NULL){
		perror("Descricao do erro");
		exit(1);
	}

    fprintf(txt, "%.2f\n", numero);
	fclose(txt);

}

void somaSalariosFuncionarios(func *vFunc, int tamanho){

    float somatorioSalariosFuncionarios = 0.00;
    func funcionario;

    while(tamanho>=0){
        funcionario = *(vFunc+tamanho);
        somatorioSalariosFuncionarios += funcionario.salario;
        --tamanho;
    }

    printCharFile("01. A soma dos salarios de todos os funcionarios:");
    printFloatFile(somatorioSalariosFuncionarios);

    printf("01. A soma dos salarios de todos os funcionarios: %.2f\n\n", somatorioSalariosFuncionarios);
}

void mediaSalariosFuncionarios(func *vFunc, int tamanho){

    float somatorioSalariosFuncionarios = 0.00;
    int i=0;

    for(i=0;i<tamanho;i++){
        somatorioSalariosFuncionarios += vFunc[i].salario;
    }

    somatorioSalariosFuncionarios = (somatorioSalariosFuncionarios/tamanho);

    printCharFile("02. A media salarial de todos os funcionarios:");
    printFloatFile(somatorioSalariosFuncionarios);

    printf("02. A media salarial de todos os funcionarios: %.2f\n\n", somatorioSalariosFuncionarios);
}

void identificaFuncionariosPorDepartamento(char nomeDepartamento[], func *vFunc, depto *vDepto, int tamanhoFunc, int tamanhoDepto){

    int i=0,j=0;

    for(i=0; i<tamanhoDepto; i++){
        if(strcmp(vDepto[i].nome, nomeDepartamento)==0){

            printCharFile("Departamento:");
            printCharFile(vDepto[i].nome);

            printf("Departamento: %s\n\n", vDepto[i].nome);

            printCharFile("");

            for(j=0; j<tamanhoFunc; j++){
                if(vDepto[i].numero == vFunc[j].numeroDepto){

                    printCharFile("Id:");
                    printIntFile(vFunc[j].nome);

                    printCharFile("Numero Departamento:");
                    printCharFile(vFunc[j].nome);

                    printCharFile("Numero Departamento:");
                    printIntFile(vFunc[j].numeroDepto);

                    printf("Id: %d\nFuncionario: %s\nNumero Departamento: %d\n\n", vFunc[j].numero, vFunc[j].nome, vFunc[j].numeroDepto);

                    printCharFile("");
                }
            }
        }
    }
}

void mediaSalarialFuncionariosPorDepartamento(char nomeDepartamento[], func *vFunc, depto *vDepto, int tamanhoFunc, int tamanhoDepto){

    int i=0,j=0,contador=0;
    float somatorioSalarios = 0.00;

    for(i=0; i<tamanhoDepto; i++){
        if(strcmp(vDepto[i].nome, nomeDepartamento)==0){

            printCharFile("Departamento:");
            printCharFile(vDepto[i].nome);

            for(j=0; j<tamanhoFunc; j++){
                if(vDepto[i].numero == vFunc[j].numeroDepto){
                    somatorioSalarios += vFunc[j].salario;
                    ++contador;
                }
            }
        }
    }

    somatorioSalarios = (somatorioSalarios/contador);

    printCharFile("Somatorio:");
    printFloatFile(somatorioSalarios);

    printf("Somatorio: %.2f\n\n", somatorioSalarios);
}

void exibirNomeSalarioDepartamento(func *vFunc, int tamanhoFunc, depto *vDepto, int tamanhoDepto){

    int i=0, j=0;


    printCharFile("07.Exiba o nome e o salario de dos funcionario por departamento, ou seja, primeiro exiba o nome e o salario de todos os funcionarios do departamento 1, depois do departamento 2 e assim por diante:");

    printf("07.Exiba o nome e o salario de dos funcionario por departamento, ou seja, primeiro exiba o nome e o salario de todos os funcionarios do departamento 1, depois do departamento 2 e assim por diante:\n");

    for(i=0; i< tamanhoDepto; i++){

        printCharFile("Departamento:");
        printIntFile(vDepto[i].numero);

        printCharFile("Descricao:");
        printCharFile(vDepto[i].nome);

        printf("Departamento: %d <> Descricao: %s\n\n", vDepto[i].numero, vDepto[i].nome);
        for(j=0; j< tamanhoFunc; j++){
            if(vFunc[j].numeroDepto == vDepto[i].numero){

                printCharFile("Nome:");
                printCharFile(vFunc[j].nome);

                printCharFile("Salario:");
                printFloatFile(vFunc[j].salario);

                printf("Nome: %s <> Salario: %.2f\n", vFunc[j].nome, vFunc[j].salario);

                printCharFile("");
            }
        }
        printf("\n");
    }
}
