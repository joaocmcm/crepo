# crepo
C projects repository

Este programa foi desenvolvido em C, e tem como objetivo distribuir usuários em servidores, que são criados a medida que novos usuários se conectam. A distribuição destes usuários em respectivos servidores, é feita obedecendo certos parâmetros, como o número máximo de usuários por servidor (variável "umax"). A medida que um usuário se conecta, este fica conectado até o final da tarefa, que tem a duração representada pela variável "ttask", em ticks. O programa está incompleto, sendo necessários alguns ajustes na separação de usuários e na formatação do arquivo "output.txt", bem como o cálculo do valor gasto por servidor no final. Os parâmetros de balanceamento, bem como o número de usuários que se conectam a cada tick, deve ser escrito no arquivo "input.txt".

Para testar o programa, basta compilar o arquivo "balancevet.c" utilizando o gcc, e executar o arquivo compilado. Ele irá gerar um arquivo txt nomeado "output.txt", e irá mostrar algumas variáveis de controle no console:

$ gcc -o balancevet balancevet.c
$ ./balancevet
