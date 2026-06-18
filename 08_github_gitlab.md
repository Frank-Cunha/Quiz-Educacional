# Artefatos no GitHub ou GitLab

## Objetivo

Organizar o projeto de forma profissional, com codigo, documentacao, planejamento, seguranca, UX/UI, arquitetura e material de apresentacao versionados em um repositorio.

## Estrutura Recomendada do Repositorio

```text
quiz-matematica-raylib/
  README.md
  LICENSE
  Makefile
  .gitignore
  src/
    main.c
    game.c
    game.h
    questions.c
    questions.h
    ui.c
    ui.h
  docs/
    01_planejamento_produto.md
    02_elicitacao_5w2h.md
    03_arquitetura.md
    04_plano_seguranca.md
    05_plano_ux_ui.md
    06_plano_cloud.md
    07_apresentacao_simulacao.md
  assets/
    fonts/
    sounds/
    images/
  tests/
  .github/
    workflows/
      build.yml
```

## README Principal

O README deve conter:

- Nome do projeto.
- Objetivo.
- Publico-alvo.
- Tecnologias.
- Como compilar.
- Como executar.
- Capturas de tela ou simulacao.
- Links para documentos.

## Issues

Exemplos de issues:

- Implementar tela final.
- Adicionar perguntas de subtracao.
- Criar dificuldade facil, media e dificil.
- Adicionar cronometro.
- Melhorar acessibilidade visual.
- Criar pipeline de build.

## Milestones

### MVP Local

- Quiz basico.
- Pontuacao.
- Feedback visual.
- Documentacao inicial.

### Versao Educacional

- Niveis de dificuldade.
- Mais perguntas.
- Melhorias de UX.

### Versao Online

- API.
- Banco de dados.
- Login.
- Relatorios.

## Branches

- `main`: versao estavel.
- `develop`: integracao de novas funcionalidades.
- `feature/nome-da-funcionalidade`: desenvolvimento de funcionalidades.
- `fix/nome-do-ajuste`: correcao de bugs.

## Pull Requests

Cada pull request deve conter:

- Descricao da mudanca.
- Evidencias de teste.
- Impacto na UX.
- Impacto em seguranca, se houver.
- Captura de tela, quando aplicavel.

## Pipeline CI/CD Sugerido

Etapas:

1. Instalar dependencias.
2. Compilar o projeto.
3. Executar verificacoes estaticas.
4. Publicar artefatos de build, quando necessario.

## Exemplo de Commit

```text
feat: adiciona feedback visual para respostas do quiz
```

## Exemplo de Tag

```text
v0.1.0-mvp
```

## Documentos Obrigatorios no Repositorio

- Planejamento de produto.
- Elicitacao.
- Arquitetura.
- Plano de seguranca.
- Plano de UX/UI.
- Plano de cloud.
- Apresentacao e simulacao.
