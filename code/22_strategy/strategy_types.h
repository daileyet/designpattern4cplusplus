#ifndef __STRATEGY_TYPES_H__
#define __STRATEGY_TYPES_H__

class TripMode
{
public:
    virtual ~TripMode() {}
    virtual void goOut() = 0;
};

class ByTrain : public TripMode
{
public:
    void goOut();
};

class ByFlight : public TripMode
{
public:
    void goOut();
};

class BySelfDrive : public TripMode
{
public:
    void goOut();
};

class TripContext
{
public:
    TripContext() : tripMode(nullptr) {}
    TripContext(TripMode *mode_) : tripMode(mode_) {}
    ~TripContext();
    void setTripMode(TripMode *mode);
    TripMode *getTripMode();
    void goTrip();

private:
    TripMode *tripMode;
};

#endif // __STRATEGY_TYPES_H__