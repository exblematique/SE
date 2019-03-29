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
    void incRPM();
    void decRPM();
    int getRPM() const;
    
  private:
    int rpm_;
    bool start_;
    static const int maxRPM_ = 5000;
    static const int minRPM_ = -5000;
    static const int incr_ = 1000;
};

#endif
