#include <iostream>

using std::cin; using std::cout; using std::endl;
using std::string;

#define COMMON_FEATURE_CODE_SIZE 100
#define UNIQUE_FEATURE_CODE_SIZE 40

class Vehicle
{
private:
    string _model_name;
    int *_feature_codes;
    
public:

    Vehicle(string model_name): _model_name(model_name) {
        _feature_codes = new int[COMMON_FEATURE_CODE_SIZE];
    }
    virtual ~Vehicle() 
    { 
        cout << "Vehicle" << _model_name << " destructor" << endl; 
        delete _feature_codes;
    }

    virtual void print_name()
    {
        cout << _model_name << endl;
    }
    
    string get_model_name()
    {
        return _model_name;
    }
};

class VehicleModelYear : public Vehicle
{
private:
    string _model_year;
    int *_unique_feature_codes;
    
public:
    VehicleModelYear(string model_name, string model_year) :
        Vehicle(model_name), _model_year(model_year) {
            _unique_feature_codes = new int[UNIQUE_FEATURE_CODE_SIZE];
        }

    ~VehicleModelYear() { 
        cout << "VehicleModelYear " 
        << get_model_name() << "-" << _model_year 
        << " destructor" << endl;

        delete _unique_feature_codes;
     }

    
    
    void print_name() override
    {
        cout << get_model_name() << "-" << _model_year << endl;
    }
};

class FakedVehicle : public Vehicle
{   
public:
    using Vehicle::Vehicle;
    // FakedVehicle(string model_name) : Vehicle(model_name) {}
    
    // void print_name(string msg) override
    void print_name(string msg) 
    {
        cout << "Sorry," << get_model_name()
             << " is not a real vehicle!" << endl;
    }
};


int main()
{
    Vehicle *veh[] = {
        new Vehicle("ModelA"),
        new Vehicle("ModelB"),
        new FakedVehicle("ModelX"),
        new VehicleModelYear("ModelA", "MY2022"),
        new VehicleModelYear("ModelA", "MY2022MCE"),
        new VehicleModelYear("ModelA", "MY2022"),
        new VehicleModelYear("ModelB", "MY2022MCE"),
    };
    
    for (int i = 0; i < 7; i++) veh[i]->print_name();
    
    for (int i = 0; i < 7; i++) delete veh[i];
    
    return 0 ;
}
