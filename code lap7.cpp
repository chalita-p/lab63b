//Load Wi-Fi library
#include <ESP8266WiFi.h>
//#include <WiFiClient.h>
#include <ESP8266WebServer.h>

const char *ssid = "NCT_DREAM";
const char *password = "markhyuck";

ESP8266WebServer server(80); // Set web server port number to 80

// Assign output variables to pins
const int output1 = 0;
#define 0_OFF digitalWrite(0, LOW)
#define 0_ON  digitalWrite(0, HIGH)

//HTML code
const String HtmlHtml = "<html><head>"
    "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\" /></head>";

const String HtmlHtmlClose = "</html>";
const String HtmlTitle = "<h1>ESP8266 NodeMCU act as AP and web server to control GPIO</h1><br/>\n";
const String HtmlCenter = "<center>";
const String HtmlCloseCenter = "</center>";
const String HtmlLedState1 = "<h2>Light 1 </h2><br/>\n";
const String HtmlButton1_ON = "<a href=\"LED1Off\"><button style=\"display: block; background-color: #FF0000;  height: 50px; width: 100px;\">ON</button></a><br/>";
const String HtmlButton1_OFF = "<a href=\"LED1On\"><button style=\"display: block; background-color: #00FF00; height: 50px; width: 100px;\">OFF</button></a><br/>";

String HtmlButtons1;


void handleRoot() {
  0_OFF;
  HtmlButtons1 =  HtmlButton1_OFF; 
  response();
}


void handleLed1On() 
{
  output1_ON;
  HtmlButtons1 = HtmlButton1_ON;
  response();
}

void handleLed1Off() 
{
  output1_OFF;
  HtmlButtons1 =  HtmlButton1_OFF; 
  response();
}


void response()
{
  String htmlRes = HtmlHtml + HtmlCenter;
  htmlRes += HtmlTitle;
  htmlRes += HtmlLedState1;
  htmlRes += HtmlButtons1;
  htmlRes += HtmlCloseCenter;
  htmlRes += HtmlHtmlClose;

  server.send (200, "text/html", htmlRes);
}


void setup() 
{
  Serial.begin(115200);
  // Initialize the output variables as outputs
  pinMode(0, OUTPUT);

  // Set outputs to OFF
  0_OFF;

  // Set Wi-Fi network with SSID and password
  WiFi.mode(WIFI_AP); // ใช้งาน WiFi ในโหมด AP
  WiFi.softAP(ssid, password);

  Serial.print("Connect to : ");
  Serial.println(ssid);
  IPAddress apip = WiFi.softAPIP();
  Serial.print("visit: ");
  Serial.println(apip);

  server.on("/", handleRoot);
  server.on("/LED1On", handleLed1On);
  server.on("/LED1Off", handleLed1Off);
  server.begin();
}


void loop()
{
  server.handleClient();
}
