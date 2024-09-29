# Домашнее задание 1

## Обзор

This project implements a modular system for receiving, decoding, and processing market data using the FAST (FIX Adapted for Streaming) protocol. The system is designed with scalability and flexibility in mind, enabling easy extension and modification of components without impacting the entire system.

The architecture includes two main modules:
1. **DataFeeder** - Responsible for receiving and decoding market data using the FAST protocol.
2. **SignalProcessing** - Analyzes the decoded data to trigger trading strategies and execute orders based on the results.

## Architecture
```
|--- cpp_for_qa_home_work
|----- include
|         |
|         |--- signal_processing
|                 |--- strategy_engine.hpp
|
|----- src
|         |
|         |--- signal_processing
|                 |--- strategy_engine.cpp
|
|----- tests
|         |
|         |--- signal_processing
|                 |--- strategy_engine_test.cpp
|                 |
|                 |--- test_data
|                         |--- test_tick.csv
|
|----- benchmarks
|         |
|         |--- signal_processing
|                 |--- strategy_engine_benchmark.cpp
|
|----- CMakeLists.txt

|----- README.md

```
### 