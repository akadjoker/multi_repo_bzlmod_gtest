# Bazel + GoogleTest Monorepo

[![CI](https://github.com/akadjoker/gtest_bazel/actions/workflows/ci.yml/badge.svg)](https://github.com/akadjoker/gtest_bazel/actions/workflows/ci.yml)


Monorepo de treino com vários **pacotes C++** (cada um com a sua lib e testes) usando **Bazel (bzlmod)** e **GitHub Actions**.

> Exemplos incluídos: `examples/math_utils`, `examples/string_utils`, `examples/geometry`.

---

## Requisitos

- **Bazel 7.x ou 8.x** (ou Bazelisk)
- **C++17** (definido em `.bazelrc`)
- Linux/Windows

---

## Como correr localmente

```bash
# compilar tudo
bazel build //...

# correr todos os testes
bazel test //...

# correr um teste específico
bazel test //examples/math_utils:math_utils_test

# correr o test_suite agregado (definido no BUILD da raiz)
bazel test //:all_tests
