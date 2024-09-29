#pragma once
#include <vector>

class StrategyEngine {
public:
    // Простая реализация скользящего среднего
    static double movingAverage(const std::vector<double>& prices, int period);

};