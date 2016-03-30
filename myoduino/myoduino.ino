#include <MyoController.h>

MyoController myo = MyoController();

void setup() {
  myo.initMyo();

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
   myo.updatePose();
   switch ( myo.getCurrentPose() ) {
    case rest:
      Serial.println("rest");
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      break;
    case fist:
      Serial.println("fist");
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      break;
    case waveIn:
      Serial.println("waveIn");
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(10, LOW);
      break;
    case waveOut:
      Serial.println("waveOut");
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, HIGH);
      break;
   default:
      break;
   } 
   delay(100);
}
