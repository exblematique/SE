#ifndef MOTOR_H
#define MOTOR_H

class RotationMotor
{
  public:
    RotationMotor();
    
    // setters and getters
    void start();
    void shutdown();
    void restart();
    void incRPM(int value);
    void decRPM(int value);
    double getRpm() const;
    
  private:
    int rpm_;
    bool start;
    const int maxRPM = 5000;
    const int maxModif = 1000;
};

#endif
