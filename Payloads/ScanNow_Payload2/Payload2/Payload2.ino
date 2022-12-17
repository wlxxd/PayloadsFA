/**
 * Made with Duckuino, an open-source project.
 * Check the license at 'https://github.com/Dukweeno/Duckuino/blob/master/LICENSE'
 */

#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  // Payload 2
  // In Payload 2 versuche ich, den Befehl "sfc /scannow" in CMD mit erhöhten
  // Rechten ausführen.
  // Nach jeder Aktion führe ich sicherheitshalber einen Delay ein.
  // Jetzt die Windows Suche öffnen, da man mit dem Run Menü keine Admin
  // Rechte bekommen kann
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('s');
  Keyboard.releaseAll();

  delay(1000);
  // Jetzt CMD eintippen
  Keyboard.print(F("cmd"));

  delay(1000);
  // Jetzt müssen wir zu "Als Administrator ausführen" navigieren
  typeKey(KEY_RIGHT_ARROW);

  delay(1000);
  typeKey(KEY_DOWN_ARROW);

  delay(1000);
  // Jetzt müssen wir Enter drücken, um es mit Admin zu starten.
  typeKey(KEY_RETURN);

  delay(1000);
  // Jetzt sind wir im UAC (User Admin Control) Menü und müssen jetzt auf
  // Ja navigieren
  typeKey(KEY_LEFT_ARROW);

  delay(1000);
  typeKey(KEY_RETURN);

  delay(1000);
  // Jetzt sind wir endlich da, jetzt schreiben wir "sfc /scannow"
  Keyboard.print(F("sfc /scannow"));

  delay(500);
  typeKey(KEY_RETURN);

  // Fertig!
  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}