#include <iostream>

using std::cin; using std::cout; using std::endl;
using std::string;

class CarPlatform
{
private:
    string _name;

public:
    string get_name() const { return _name; }

    CarPlatform() : _name("VirtualCarPlatform") {}
    CarPlatform(string name) : _name(name) {}    
};

class GasCarPlatform : public virtual CarPlatform
{
private:
    string _fuel_type; // gasoline, diesel...

public:
    GasCarPlatform() : CarPlatform("GasCarPlatform") {}

    void set_fuel_type(string type) { _fuel_type = type; }

    string get_fuel_type() const { return _fuel_type; }

    void function1()
    {
        cout << "Function1 GasCarPlatform" << endl;
    }

};

class ElectricCarPlatform : public virtual CarPlatform
{
private:
    int _battery_volume = 0; // unit kwh

public:
    ElectricCarPlatform() : CarPlatform("ElectricCarPlatform") {}

    void set_battery_volume(int battery_volume) 
    { 
        _battery_volume = battery_volume; 
    }

    int get_battery_volume() { return _battery_volume; }

    void function1()
    {
        cout << "Function1 ElectricCarPlatform" << endl;
    }

    void function2()
    {
        cout << "Function2 ElectricCarPlatform" << endl;
    }

};

class PlannedNewModel : public GasCarPlatform, 
                        public ElectricCarPlatform
{
public:
    PlannedNewModel() : CarPlatform("PlannedNewModel") {}

    void function1()
    {
        if ((!get_fuel_type().empty()) && 
            (get_battery_volume() > 0)) 
        {
            GasCarPlatform::function1();
            ElectricCarPlatform::function1();
            cout << "This is a hybird car..." << endl;
        }
        else if (!get_fuel_type().empty()) 
            GasCarPlatform::function1();
        else if (get_battery_volume() > 0) 
            ElectricCarPlatform::function1();
        else cout << "Function1 PlannedNewModel" << endl;
    }

    void function3()
    {
        cout << "Function3 PlannedNewModel" << endl;
    }

};


int main(int argc, char** argv)
{
    PlannedNewModel model_a;
    model_a.set_fuel_type("gasline");
    cout << "This is model A" << endl;
    cout << model_a.get_name() << ", " 
         << model_a.get_fuel_type()
         << endl;

    model_a.function1();
    cout << "Applied the eletrical car functions to a gasline car." 
         << endl;
    model_a.function2();
    model_a.function3();
    cout << endl;

    PlannedNewModel model_b;
    model_b.set_battery_volume(77);
    cout << "This is model B" << endl;
    cout << model_b.get_name() << ", " 
         << model_b.get_battery_volume()
         << " kwh" << endl;

    model_b.function1();
    model_b.function2();
    model_b.function3();
    cout << endl;

    PlannedNewModel model_c;
    model_c.set_fuel_type("gasoline");
    model_c.set_battery_volume(77);
    cout << "This is model B" << endl;
    cout << model_c.get_name() << ", " 
         << model_c.get_fuel_type() << ", "
         << model_c.get_battery_volume()
         << " kwh" << endl;

    model_c.function1();
    model_c.function2();
    model_c.function3();
    cout << endl;

    return 0;
}
