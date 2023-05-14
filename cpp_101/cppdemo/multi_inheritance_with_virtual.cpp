#include <iostream>

using std::cin; using std::cout; using std::endl;
using std::string;

enum FuelType {
    gasoline = 0,
    diesel
};

const char * FuelTypeToString(FuelType type) noexcept 
{
    switch (type)
    {
        case FuelType::gasoline: return "gasoline";
        case FuelType::diesel: return "diesel";
    }
}

enum PowertrainType {
    oil_fuel = 0,
    hybrid_eletric,
    plugin_eletric,
    eletric,
    hydrogen_fuel
};

const char * PowertrainTypeToString(PowertrainType type) noexcept 
{
    switch (type)
    {
        case PowertrainType::oil_fuel: return "oil_fuel";
        case PowertrainType::hybrid_eletric: return "hybrid_eletric";
        case PowertrainType::plugin_eletric: return "plugin_eletric";
        case PowertrainType::eletric: return "eletric";
        case PowertrainType::hydrogen_fuel: return "hydrogen_fuel";
    }
}

class SuperCarPlatform 
{
private:
    PowertrainType _pt_type;

public:
    // SuperCarPlatform() = default;
    SuperCarPlatform(PowertrainType pt_type) : _pt_type(pt_type) {}
    PowertrainType get_pt_type() { return _pt_type; }
};

class GasCarPlatform : public virtual SuperCarPlatform
{
private:
    FuelType _fuel_type; // gasoline, diesel...

public:
    GasCarPlatform() : SuperCarPlatform(PowertrainType::oil_fuel) {}
    void set_fuel_type(FuelType type) { _fuel_type = type; }

    FuelType get_fuel_type() const { return _fuel_type; }

    void function1()
    {
        cout << "Function1 GasCarPlatform" << endl;
    }

    void function2()
    {
        cout << "Function2 GasCarPlatform" << endl;
    }
};

class EletricCarPlatform : public virtual SuperCarPlatform
{
private:
    int _battery_capacity = 0;

public:
    EletricCarPlatform() : SuperCarPlatform(PowertrainType::eletric) {}

    void set_battery_capacity(int battery_capacity) 
    {
        _battery_capacity = battery_capacity;
    }

    int get_battery_capacity() const { return _battery_capacity; }

    void function1()
    {
        cout << "Function1 EletricCarPlatform" << endl;
    }

    void function2()
    {
        cout << "Function2 EletricCarPlatform" << endl;
    }
};

class PlannedNewModel : public GasCarPlatform
{
public:
    PlannedNewModel() : 
        SuperCarPlatform(PowertrainType::oil_fuel),
        GasCarPlatform()
    {
        set_fuel_type(FuelType::gasoline);
    }
    
    void function3()
    {
        cout << "Function3 PlannedNewModel" << endl;
    }
};

class PlannedNewEVModel : public EletricCarPlatform, GasCarPlatform
{
public:
    PlannedNewEVModel() : 
        SuperCarPlatform(PowertrainType::eletric), 
        EletricCarPlatform(),
        GasCarPlatform() 
    {
        set_battery_capacity(77);
    }

    void function1()
    {
        cout << "Overriden function1 to GasCarPlatform: " << endl;
        GasCarPlatform::function1();
    }

    void function2() 
    {
        cout << "Overriden function2 to combine" 
             << "GasCarPlatform and EletricCarPlatform: " << endl;
        GasCarPlatform::function2();
        EletricCarPlatform::function2();
    }

    void function3()
    {
        cout << "Function3 PlannedNewEVModel" << endl;
    }
};

int main()
{
    PlannedNewEVModel model_b;
    cout << "This is model_b, which is a " 
         << PowertrainTypeToString(model_b.get_pt_type()) 
         << "-"
         << model_b.get_battery_capacity() << "kwh"
         << " car with functions: " << endl;
    model_b.function1();
    model_b.function2();
    model_b.function3();

    return 0;
}


    // PlannedNewModel model_a;
    // cout << "This is model_a, which is a " 
    //      << PowertrainTypeToString(model_a.get_pt_type()) 
    //      << "-"
    //      << FuelTypeToString(model_a.get_fuel_type()) 
    //      << " car with functions: " << endl;
    // model_a.function1();
    // model_a.function2();
    // model_a.function3();
    // cout << endl;