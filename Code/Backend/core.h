#pragma once

#ifdef CORE_EXPORTS
    #define CORE_API __declspec(dllimport)
#else
    #define CORE_API __declspec(dllexport)
#endif

class CORE_API core
{

private:
    double _width = 0;
    double _height = 0;

public:
    explicit core();
    ~core();

    double DoubleTheValue(double &input);
};