# Plano de Seguranca da Informacao

## Contexto

O MVP local nao manipula dados pessoais nem se comunica com servidores. Mesmo assim, caso o jogo seja hospedado em servidor cliente ou evolua para uma versao online, medidas de seguranca devem ser planejadas desde o inicio.

## Ativos Protegidos

- Codigo-fonte.
- Base de perguntas.
- Pontuacoes.
- Dados de estudantes, caso sejam adicionados.
- Credenciais de administradores ou professores.
- Infraestrutura de hospedagem.

## Principais Riscos

| Risco | Impacto | Mitigacao |
|---|---|---|
| Exposicao de dados de alunos | Alto | Minimizar dados, criptografar e controlar acesso |
| Alteracao indevida de perguntas | Medio | Controle de permissao e auditoria |
| Indisponibilidade do servidor | Medio | Backups, monitoramento e redundancia |
| Vazamento de credenciais | Alto | Segredos em vault ou variaveis seguras |
| Codigo vulneravel | Medio | Revisao, testes e analise estatica |

## Controles Recomendados

### Autenticacao

- Usar login apenas se houver perfis de aluno/professor.
- Implementar senhas fortes e armazenamento com hash seguro.
- Considerar SSO da escola quando aplicavel.

### Autorizacao

- Separar permissoes por perfil:
  - Aluno: jogar e visualizar propria pontuacao.
  - Professor: visualizar turmas e resultados.
  - Administrador: gerenciar usuarios, turmas e perguntas.

### Protecao de Dados

- Coletar somente dados necessarios.
- Evitar armazenar dados sensiveis de criancas quando nao forem essenciais.
- Criptografar dados em transito com HTTPS.
- Criptografar dados sensiveis em repouso.

### Infraestrutura

- Usar firewall ou security groups.
- Bloquear portas desnecessarias.
- Manter sistema operacional e dependencias atualizados.
- Usar backups automaticos.
- Aplicar principio do menor privilegio.

### Logs e Auditoria

- Registrar acessos administrativos.
- Registrar alteracoes em perguntas e turmas.
- Evitar salvar dados sensiveis em logs.
- Definir politica de retencao.

## LGPD

Caso o jogo armazene dados de estudantes, especialmente menores de idade, o projeto deve considerar:

- Base legal adequada.
- Consentimento quando necessario.
- Transparencia sobre uso dos dados.
- Direito de exclusao.
- Minimização de dados.
- Controle de acesso rigoroso.

## Checklist para Servidor Cliente

- HTTPS habilitado.
- Banco de dados com senha forte.
- Backups testados.
- Acesso administrativo restrito.
- Logs ativos.
- Dependencias atualizadas.
- Ambiente de producao separado do desenvolvimento.
- Plano de resposta a incidentes.
