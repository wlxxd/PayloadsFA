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

  // Erster Payload Versuch
  // REM ist eine Möglichkeit, Kommentare im Code zu hinterlassen
  // Delay damit alles gut klappt:)
  // Jetzt folgen die Befehle des Angreifers, ich will zu Beginn das RUN Menü von Windows öffnen
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(1000);
  // Jetzt will ich in das RUN Fenster was schreiben, dafür nutze ich STRING
  Keyboard.print(F("notepad"));

  delay(1000);
  typeKey(KEY_RETURN);

  delay(1000);
  // Jetzt hat sich der Editor von Windows geöffnet. Ich will, das die ersten Worte "Hello, World!" sind
  Keyboard.print(F("Hello, World!"));

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}