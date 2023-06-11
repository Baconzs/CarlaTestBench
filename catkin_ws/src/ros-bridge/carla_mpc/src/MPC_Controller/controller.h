#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include <memory>
#include <string>


class Controller{

    public:

    Controller() = default;

    virtual ~Controller() = default;

    virtual bool Init() = 0;

    virtual bool ComputeControlCommand() = 0;

    virtual bool Reset() = 0;

    virtual std::string Name() const = 0;

    virtual void Stop() = 0;
    
};

#endif