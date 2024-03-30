// Design a Ride Sharing application where drivers can offer rides (origin, destination, no of seats), any rider can request rides (origin, destination, no of seats).
// The program should take as input two or more drivers and a set of riders requesting rides. Multiple rides can happen simultaneously.
// There is an algorithm to choose to calculate the ride amount charged for a given ride based on distance and no of seats:-
// 1. When the ride closes, show the amount charged to the rider.
// 2. Ride amount if No of seats >= 2: No of kilometers No of seats 0.75 Amount Charged per KM
// 3. Ride amount if No of seats = 1: No of kilometers * Amount Charged per KM

//     Functions:
//     1. Register a driver/cab. 2. Register a rider.
//     3. Book a ride.
//     4. Create a ride.
//     5. Generate bill.
//     6. Check the validity of an ongoing ride for a new rider. 7. Update ride status.
//     8. Fetch revenue of all the rides taken by a driver/cab.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum DriverStatus
{
    free,
    busy
} class Driver
{
private:
    int id;
    string name;
    int cabNumber;
    DriverStatus status;

public:
    Driver(int _id, string _name, int _cabNumber) : id(_id),
                                                    name(_name),
                                                    canNumber(_cabNumber),
                                                    DriverStatus(free) {}

    int getId()
    {
        return id;
    }

    string getName()
    {
        return name;
    }

    int getcabNumber()
    {
        return canNumber;
    }

    DriverStatus getDriverStatus()
    {
        return status;
    }
};

class Rider
{
private:
    int id;
    int source;
    int destination;

public:
    Rider(int _id, int _source, int _destination) : id(_id),
                                                    source(_source),
                                                    destination(_destination)
    {
    }

    int getId()
    {
        return id;
    }

    int getSource()
    {
        return source;
    }

    int destination()
    {
        return destination;
    }
};

Enum TripStatus { ongoing, completed }

class Trip
{
private:
    int id;
    int source;
    int destination;
    TripStatus status;
    int totalSeats;
    int availableSeats;

public:
    Trip(int _id, int _source, int _destination, int _totalSeats) : id(_id), source(_source), destination(_destination), status(Ongoing), totalSeats(_totalSeats), availableSeats(_totalSeats) {}
    int getId()
    {
        return id;
    }

    int getSource() { return source; }

    int getDestination() { return destination; }

    TripStatus getStatus() { return status; }

    int getTotalSeats() { return totalSeats; }

    int getAvailableSeats() { return availableSeats; }
};

class RideSharingApp
{
private:
    vector<Driver> drivers;
    vector<Rider> riders;
    vector<Trip> trips;
    douuble amountPerKM = 0.75;

public:
    void registerDriver(int id, string name, int cabNumber)
    {
        Driver driver(int, name, cabNumber);
        drivers.push_back(driver);
    }

    void registerRider(int id, int source, int destination)

    {
        Rider rider(int, source, destination);
        riders.push_back(rider);
    }

    void bookRide()
    {
        for (Rider &rider : riders)
        {
            if (isValidRider(rider))
            {
                Trip trip(trip.size() + 1, rider.getSource(), rider.getDestination(), 1);
                trips.push_back(trip);
                cout << "Ride booked for rider" << rider.getId() << endl;
            }
            else
            {
                cout << "No availabe trips for rider" << rider.getId() << endl;
            }
        }
    }

    void createRide(int driverId, int source, int destination, int totalSeats)
    {
        for (Driver &driver : drivers)
        {
            if (driver.getId() == driverId && driver.getStatus() == DriverStatus::Free)
            {
                Trip trip(trip.size() + 1, source, destination, totalSeats);
                trips.push_back(trip);
                driver.setStatus(DriverStatus : Busy);
                cout << "Rider created for driver" << driverId << endl;
                return;
            }
        }

        cout << "Driver" << driverId << "not found or busy" << endl;
    }

    int generateBill(int tripId)
    {
        for (const Trip &trip : trips)
        {
            if (trip.getId() == trip.getStatus() == TripStatus::Completed)
            {
                double distance = trip.getDestination() - trip.getSource();
                double amountCharged = (trip.getTotalSeats() >= 2) ? distance * trip.getTotalSeats() * amountPerKM : distance * amountPerKM;
                return amountCharged;
            }
        }

        return -1;
    }

    bool isValidRider()
    {
        for (Trip &trip : trips)
        {
            if (trip.getStatus() == TripStatus : Ongoind && trip.getAvailabeSeats() > 0)
            {
                return true;
            }
        }

        return false;
    }

    int getRidesReveneue()
    {
        int revenue = 0;
        for (Trip &trip : trips)
        {
            if (trip.getStatus() == TripStatus::Completed && trip.getId() == driverId)
            {
                revenue += generateBill(trip.getId());
            }
        }

        return revenue;
    }
};

int main()
{
    RideSharingApp app;

    app.registerDriver(1, "jhon", 123);
    app.registerDriver(2, "aryan", 523);

    app.registerRider(1, 10, 20);
    app.registerRider(2, 15, 25);

    app.createRide(1, 10, 20, 4)

        app.bookRide();

    for (Trip &trip : app.trips)
    {
        trip.setStatus(TripStatus : Completed);
    }

    for (Trip &trip : app.trips)
    {
        double bill = app.generateBill(trip.getId());
        if (bill != -1)
        {
            cout << "Bill for trip" << trip.getId() << " : $ " << bill << endl;
        }
    }

    cout << "Revenue for driver 1 :$" << app.getRidesReveneue(1) << endl
}
