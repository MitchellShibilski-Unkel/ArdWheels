#include <Servo.h>


class ArdWheels {
public:
  void move(Servo wheel, bool half = false, bool reverse = false) {
    if (reverse == true) {
      if (half == true) {
        wheel.write(-90);
      } else {
        wheel.write(-180);
      }
    } else {
      if (half == true) {
        wheel.write(90);
      } else {
        wheel.write(180);
      }
    }
  }
};