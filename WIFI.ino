/*
 WiFi Web Server LED Blink

 A simple web server that lets you blink an LED via the web.
 This sketch will print the IP address of your WiFi Shield (once connected)
 to the Serial monitor. From there, you can open that address in a web browser
 to turn on and off the LED on pin led.

 If the IP address of your shield is yourAddress:
 http://yourAddress/H turns the LED on
 http://yourAddress/L turns it off

 This example is written for a network using WPA encryption. For
 WEP or WPA, change the Wifi.begin() call accordingly.

 Circuit:
 * WiFi shield attached
 * LED attached to pin led

 created for arduino 2led Nov 2012
 by Tom Igoe

ported for sparkfun esp32 
31.01.2017 by Jan Hendrik Berlin
 
 */

#include <WiFi.h>

int led = 2;
int pagina = 0;
bool flag = true;
const char* ssid     = "Jhonathan Alves";
const char* password = "JaC58246";





WiFiServer server(80);

void setup()
{
    Serial.begin(9600);
    pinMode(led, OUTPUT);      // set the LED pin mode

    delay(10);

    // We start by connecting to a WiFi network

    Serial.println();
    Serial.println();
    Serial.print("Connecting to ");
    Serial.println(ssid);

    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(100);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connected.");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
    
    server.begin();

}

int value = 0;




void paginamain(WiFiClient client)
{
client.println("<!DOCTYPE html>");
client.println("<html >");
client.println("<head>");
client.println("  <meta charset='UTF-8'>");
client.println("  <title>Button hover effects with box-shadow</title>");
client.println("  <link href='https://fonts.googleapis.com/css?family=Fira+Sans:300' rel='stylesheet'>");
client.println("  <link rel='stylesheet' href='https://cdnjs.cloudflare.com/ajax/libs/normalize/5.0.0/normalize.min.css'>");
client.println("      <link rel='stylesheet' href='https://cdn.rawgit.com/Jhonathanalvesbr/URI/master/style.css'>");
client.println("</head>");
client.println("<body>");
client.println("  <div class='buttons'>");
client.println("  <h1><code>I</code>o</h1><code>T</code>");
client.println("  <a href='/paginaled'><button class='fill'>Leds</button></a>");
client.println("  <button class='pulse'>Pulse</button>");
client.println("  <button class='close'>Close</button>");
client.println("  <button class='raise'>Raise</button>");
client.println("  <button class='up'>Fill Up</button>");
client.println("  <button class='slide'>Slide</button>");
client.println("  <button class='offset'>Offset</button>");
client.println("</div>");
client.println("");
client.println("");
client.println("</body>");
client.println("</html>");

}

void paginaled(WiFiClient client)
{
  client.println("<html>");
  client.println("<!DOCTYPE html>");
  client.println("<head>");
  client.println("  <meta charset='utf-8' />");
  client.println(" <title>CSS3 Buttons</title>");
  client.println("    <META NAME='ROBOTS' CONTENT='NOINDEX, NOFOLLOW'>");
  client.println(" <link rel='stylesheet' href='https://assets.hongkiat.com/uploads/css3-on-off-button/demo/style2.css'>");
  client.println(" <script type='text/javascript' src='https://assets.hongkiat.com/uploads/css3-on-off-button/demo/js/jquery-1.7.2.min.js'></script>");
  client.println(" <script type='text/javascript'>");
  client.println("   $(document).ready(function(){");
  if(flag == true)
  {
    client.println("     $('#button').on('click', function(){");
    client.println("       $(this).toggleClass('on');");
    client.println("     });");
  }
  else
  {
    client.println("       $('#button').toggleClass('on');");
  }
  client.println("   });");
  client.println(" </script>");
  client.println("</head>");
  client.println("<body>");
  if(flag == true)
  {
    client.print("<center><h1><FONT COLOR='#FF0000'>Desligado</h1></FONT></center>");  
  }
  else
  {
    client.print("<center><h1><FONT COLOR='#FF0000'>Ligado</h1></FONT></center>");
  }
  client.println(" <section>");
  client.println("   <a href='led' id='button'>&#xF011;</a>");
  client.println("   <span></span>");
  client.println(" </section>");
  client.println(" <div align='right'><br /><br /><br />");
  client.println("<h2><FONT COLOR='#1E90FF'>Voltar <a href='back'></a></h2><br>");
  client.println(" </div>");
  client.println("</body>");
  client.println("</html>");
}



void loop(){
 WiFiClient client = server.available();   // listen for incoming clients

  if (client) {                             // if you get a client,
    //Serial.println("New Client.");           // print a message out the serial port
    String currentLine = "";                // make a String to hold incoming data from the client
    while (client.connected()) {            // loop while the client's connected
      if (client.available()) {             // if there's bytes to read from the client,
        char c = client.read();             // read a byte, then
        //Serial.write(c);                    // print it out the serial monitor
        if (c == '\n') {                    // if the byte is a newline character

          // if the current line is blank, you got two newline characters in a row.
          // that's the end of the client HTTP request, so send a response:
          if (currentLine.length() == 0) {
            // HTTP headers always start with a response code (e.g. HTTP/1.1 200 OK)
            // and a content-type so the client knows what's coming, then a blank line:

          if(pagina == 0)
          {
            paginamain(client);
          }
          else
          {
            paginaled(client); 
          }
            
            
            break;
          } else {    // if you got a newline, then clear currentLine:
            currentLine = "";
          }
        } else if (c != '\r') {  // if you got anything else but a carriage return character,
          currentLine += c;      // add it to the end of the currentLine
        }

        // Check to see if the client request was "GET /H" or "GET /L":
        if (currentLine.endsWith("GET /led")) {
          if(flag == true)
          {
            digitalWrite(led, HIGH); 
            flag = false;
          }
          else
          {
            digitalWrite(led, LOW);   
            flag = true;
          }
        }
        else if (currentLine.endsWith("GET /paginaled"))
        {
          pagina = 1;
        }
        else if (currentLine.endsWith("GET /back"))
        {
          pagina = 0;
        }
      }
    }
    // close the connection:
    client.stop();
    //Serial.println("Client Disconnected.");
  }
}
