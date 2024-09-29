# Домашнее задание 1

## Обзор

This project implements a modular system for receiving, decoding, and processing market data using the FAST (FIX Adapted for Streaming) protocol. The system is designed with scalability and flexibility in mind, enabling easy extension and modification of components without impacting the entire system.

The architecture includes two main modules:
1. **DataFeeder** - Responsible for receiving and decoding market data using the FAST protocol.
2. **SignalProcessing** - Analyzes the decoded data to trigger trading strategies and execute orders based on the results.

## Architecture
```
|---
|----- DataFeeder
|         |
|         |--- MarketDataReceiver
|         |        |
|         |        |--- FASTDecoder
|         |        |--- MarketDataValidator
|         |
|         |--- ExternalDataConnector
|                 |--- FIXMessageHandler
|                 |--- ConnectionManager
|
|----- SignalProcessing
|         |
|         |--- StrategyEngine
|                 |--- Strategy1
|                 |--- Strategy2
|         |
|         |--- SignalAnalyzer
|         |--- ExecutionTrigger
|                 |--- OrderManager
|---
```
```//TODO```

### Module Descriptions

### 1. **DataFeeder**
This module is responsible for receiving raw market data from external trading systems and processing it into usable market information.
```//TODO```

### 2. **SignalProcessing**
This module implements the core trading logic, processing market data and triggering actions based on defined strategies. ```//TODO```

---

## Key Design Principles

- **Modularity**: The system is designed with distinct, loosely-coupled modules. Each component has a well-defined responsibility, making the system flexible and easy to extend.
  
- **Interfaces**: Components interact via well-defined interfaces, allowing for easy modification or replacement of individual parts without affecting the entire system.

```//TODO```
---