#include <iostream>
#include <vector>
#include <string>

using namespace std;

// design classes for the system which can provide different types of services (just like UrbanClap) :
//  1)orderService (stirng serviceId, string userId)
//  2) getMyPreviousesService(userId)

// Assumptions:
// - There are limited catogery which are predefiend and new services will be added to 
//   one of the pre-existing catogery only
// -A service can only be created if it belongs to some catogery 
// -Partner can offer multiple services that can be of different catogeries 
//  if partner status if free then its for all the servicesOffered by partner

// To look for 
// Factory Pattern : Creating desired Service
// Singleton Pattern : Creating system
// Strategy Pattern : Different types of discounting for different services
// Decorator Pattern : Creating add-on Services



class User
{
    string userId;
    string name;
    string location,
    vector<Service>userPerviousServices

    void createUser(string name, string location){

    }

    void orderService(string serviceId, string userId){
        Service newService(serviceId, userId);
        Partner assignedPartner = findPartner(serviceId)
        userPreviousServices.push_back(newService);
    }

    void getMyPreviousService(string userId){
        for (auto service: userPerviousServices)
        {
            cout << "Service: "<<service.getServiceName() << endl;
        }
    }

    Partner assignPartner(string serviceId){
        //get the partner for this service id
        for (auto partner : availablePartners){
            if(partner.getStatus()== PartnerStatus:: Free){
                return Partner;
            }
        }

        return;
    }
};

enum class partnerStatus{free, busy}

class Partner{
    int partnerId;
    string name;
    int rating;
    partnerStatus status;
    vector<Service> servicesOffered;


    bool canProvideService(string partnerId, string serviceId){
        if(partner.getStatus == PartnerStatus:: Busy ){
            return false;
        }

        for(auto service: servicesOffered){
            if(service.serviceId==serviceId){
                return true;
            }

        }

        return false;
    }

    void setStatus(partnerStatus _status){
        status = _status;
    }

};


enum class serviceStatus{ completed, onGoing, booked, cancled}

//Ac
class Catogery{   
    string catogeryId;
    vector<Service>availableServices;

    void addNewService(Service service)
    {
        // if serviceId is not present in that particualr catogery then push in avaiable service 
        availableServices.push_back(service)
    }

}

//Repair , Gas Refill , install & uninstall
class Service{
    string serviceId;
    string ServiceName;
    double price;
    vector<ExtraService> addons;
    vector<Partners> availablePartners;

    string getServiceName(){
        return ServiceName;
    }

    Partner getAvailablePartners(){
        return availablePartners;
    }

}

//Less/no colling, power issue , noise/smell, water leakage
class ExtraService{

}


int main(){
    User user("1" ,"abhi", "Delhi");
    user.orderService("service1");

}
