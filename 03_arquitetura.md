# Arquitetura do Projeto

## Visao Geral

O projeto e um jogo desktop simples desenvolvido em C com Raylib. A primeira versao usa dados em memoria e nao depende de servidor, banco de dados ou internet.

## Componentes

```mermaid
flowchart TD
    A["Main Loop Raylib"] --> B["Gerenciador de Estado do Jogo"]
    B --> C["Modulo de Perguntas"]
    B --> D["Modulo de Entrada"]
    B --> E["Modulo de Pontuacao"]
    B --> F["Modulo de Feedback"]
    B --> G["Modulo de Renderizacao"]
```

## Estrutura Recomendada de Pastas

```text
quiz-matematica/
  README.md
  docs/
    planejamento_produto.md
    elicitacao_5w2h.md
    arquitetura.md
    plano_seguranca.md
    plano_ux_ui.md
    plano_cloud.md
  src/
    main.c
    game.c
    game.h
    questions.c
    questions.h
    ui.c
    ui.h
  assets/
    fonts/
    sounds/
    images/
  build/
  Makefile
```

## Modulos

### `main.c`

Responsavel por:

- Inicializar a janela.
- Controlar o loop principal.
- Encerrar o jogo.

### `game.c` e `game.h`

Responsaveis por:

- Estado atual do jogo.
- Pergunta atual.
- Pontuacao.
- Regras de avancar para a proxima pergunta.

### `questions.c` e `questions.h`

Responsaveis por:

- Estrutura `Question`.
- Lista de perguntas.
- Futuramente, carregamento de perguntas externas.

### `ui.c` e `ui.h`

Responsaveis por:

- Desenho dos botoes.
- Cores da interface.
- Feedback visual.
- Layout.

## Modelo de Dados

```c
typedef struct {
    const char *question;
    const char *options[4];
    int correctIndex;
} Question;
```

## Fluxo do Jogo

```mermaid
sequenceDiagram
    participant U as Usuario
    participant G as Jogo
    participant Q as Perguntas

    G->>Q: Carrega pergunta atual
    G->>U: Exibe pergunta e alternativas
    U->>G: Seleciona resposta
    G->>G: Valida resposta
    G->>U: Exibe feedback
    G->>G: Atualiza pontuacao
    G->>Q: Avanca para proxima pergunta
```

## Estados do Jogo

- `PLAYING`: usuario esta respondendo.
- `ANSWERED`: resposta foi escolhida e feedback esta visivel.
- `FINISHED`: quiz terminou e resultado final e exibido.

## Possivel Arquitetura Online Futura

```mermaid
flowchart LR
    A["Cliente Raylib/Web"] --> B["API"]
    B --> C["Banco de Dados"]
    B --> D["Servico de Autenticacao"]
    B --> E["Monitoramento"]
```

## Decisoes Tecnicas

- Raylib foi escolhida pela simplicidade e foco didatico.
- C foi mantido por ser linguagem base do requisito.
- Dados em memoria simplificam o MVP.
- Modularizacao facilita evolucao para arquivos externos, dificuldade e relatorios.
