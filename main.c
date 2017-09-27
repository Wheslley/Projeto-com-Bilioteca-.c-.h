#include <stdio.h>
#include <stdlib.h>

#include "estruturas.h"
#include "funcionario.h"
#include "departamento.h"
#include "trabalholp1.h"

#define FUNCIONARIOS 100
#define DEPARTAMENTOS 10

int main()
{
    func vFunc[FUNCIONARIOS];
    depto vDepto[DEPARTAMENTOS];

    populaVetorFunc(vFunc, FUNCIONARIOS);
    populaVetorDep(vDepto, DEPARTAMENTOS);

    //01
    printCharFile("------------------------------------------------------------------------------------------------------");
    somaSalariosFuncionarios(vFunc, FUNCIONARIOS);

    //02
    printCharFile("------------------------------------------------------------------------------------------------------");
    mediaSalariosFuncionarios(vFunc, FUNCIONARIOS);

    //03
    printCharFile("------------------------------------------------------------------------------------------------------");
    printCharFile("03. Nome dos funcionario que trabalham no Dep Eng Software:");
    printf("03. Nome dos funcionario que trabalham no Dep Eng Software:\n\n");
    identificaFuncionariosPorDepartamento("Dep Eng Software", vFunc, vDepto, FUNCIONARIOS, DEPARTAMENTOS);

    //04
    printCharFile("------------------------------------------------------------------------------------------------------");
    printCharFile("04. A media salarial dos funcionarios que trabalham no Dep Eng Software:");
    printf("04. A media salarial dos funcionarios que trabalham no Dep Eng Software:\n\n");
    mediaSalarialFuncionariosPorDepartamento("Dep Eng Software", vFunc, vDepto, FUNCIONARIOS, DEPARTAMENTOS);

    //05
    printCharFile("------------------------------------------------------------------------------------------------------");
    printCharFile("05. A media salarial dos funcionarios que trabalham no Dep Computacao:");
    printf("05. A media salarial dos funcionarios que trabalham no Dep Computacao:\n\n");
    mediaSalarialFuncionariosPorDepartamento("Dep Computacao", vFunc, vDepto, FUNCIONARIOS, DEPARTAMENTOS);

    //06
    printCharFile("------------------------------------------------------------------------------------------------------");
    printCharFile("06. A media salarial dos funcionarios que trabalham no Dep IA:");
    printf("06. A media salarial dos funcionarios que trabalham no Dep IA:\n\n");
    mediaSalarialFuncionariosPorDepartamento("Dep IA", vFunc, vDepto, FUNCIONARIOS, DEPARTAMENTOS);

    //07
    printCharFile("------------------------------------------------------------------------------------------------------");
    exibirNomeSalarioDepartamento(vFunc, FUNCIONARIOS, vDepto, DEPARTAMENTOS);

    //08 Gerar Arquivo Resultado.txt

    return 0;
}
