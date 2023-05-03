
void setup() {
   //empty
}
void loop() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeystroke(0);
  DigiKeyboard.sendKeystroke(KEY_SPACE , MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("https://youtube.com/techyperry");
  DigiKeyboard.sendKEYStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  for("){ /*empty*/ }
}       
   
  
