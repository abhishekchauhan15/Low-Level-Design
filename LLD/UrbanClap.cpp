#include <iostream>
#include <vector>
#include <string>

using namespace std;

//design classes for the system which can provide different types of services (just like UrbanClap) :
// 1)createService (stirng serviceId, stirng userId)
// 2) getMyPreviousesService(userId)


class User {
    int id;
    string name;
    string location,

    void createUser(){

    }

    void orderService(){

    }

    void getMyPreviousService(){
    }


};

enum partnerStatus{free, busy}

class Partner{
    int partnerId;
    string name;
    int rating;
    partnerStatus status;
};


enum serviceStatus{ completed, onGoing, booked, cancled}

//Ac
class Catogery{   
    int id;
    vector<Service>availableServices;

    void addService(Service service){
        availableServices.push_back(service)
    }

}

//Repair , Gas Refill , install & uninstall
class Service{
    int id;
    double price;
    vector<ExtraService> addons;

    private:
        void createService(){

        }

}

//Less/no colling, power issue , noise/smell, water leakage
class ExtraService{


}
