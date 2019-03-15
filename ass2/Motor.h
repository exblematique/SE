#ifndef MOTOR_H
#define MOTOR_H

class RotationMotor
{
  public:
    RotationMotor();
    RotationMotor(double width, double height);

    // setters and getters
    void start();
    void shutdown();
    void restart();
    void incRPM();
    void decRPM();
    double getRpm() const;
    
  private:
    double width_;
    double height_;
};

#endif
