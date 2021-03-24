# การทดลองที่ 2 เรื่อง การเขียนโปรแกรมค้นหาไวไฟ
## วัตถุประสงค์
1. เขียนโปรแกรมเพื่อที่ใช้ค้นหาสัญญาณwifiที่อยู่รอบๆตัว
## อุปกรณ์ที่ใช้
1. microcontroller esp01
2. usb to serial port
3. usb
4. computer or notbook ไว้เขียนโปรแกรม
## ศึกษาข้อมูลเบื้องต้น
* [platformio](https://platformio.org/)
* [microcontroller คือ](https://thiti.dev/blog/28/)
* [microcontroller esp 01](http://fitrox.lnwshop.com/article/28/esp8266-ตอนที่-1-รู้จักกับ-esp8266)
## วิธีการทำการทดลอง
1. ต่อ microcontroller เข้ากับ usb to serial port และต่อเข้ากับ usb เข้ากับ computer
2. cd 02_ScanWifi
3. vi src/main.cpp
![image](https://user-images.githubusercontent.com/80880831/112259330-b08fd300-8c9a-11eb-8209-9c4227c45ed5.jpeg)
4. pio run -t upload
![image](https://user-images.githubusercontent.com/80880831/112259428-e1700800-8c9a-11eb-96a0-3c4531d82681.jpeg)
5. กดปุ่มport0(ปุ่มสีดำ)และปุ่มีเซ็ต(ปุ่มสีแดง)เพื่อรีเซ็ตเพื่อเคลียร์โปรแกรมเก่าในmicrocontroller
6. เมื่อrun program เสร็จ
![image](https://user-images.githubusercontent.com/80880831/112259471-f51b6e80-8c9a-11eb-930e-440db889d5fd.jpeg)
7. pio device monitor เพื่อให้หน้าจอcompter แสดงผล
![image](https://user-images.githubusercontent.com/80880831/112259523-0a909880-8c9b-11eb-8162-552db5277d2b.jpeg)
ขณะรัน ถ้ากดปุ่มรีเซ็ต จะเริ่มนับ ค้นหา wifi ใหม่อีกครั้ง
## การบันทึกผลการทดลอง
![image](https://user-images.githubusercontent.com/80880831/112259593-24ca7680-8c9b-11eb-9230-11b3c19741f1.jpeg)
เมื่อกดปุ่มรีเซ็ต จะทำการค้นให้wifiใหม่อีกครั้ง
## อภิปรายผลการทดลอง
ในการค้นหาwifiในแต่ละครั้งอาจจะมีจำนวนและตัวสัญญาณwifiที่แตกต่างกัน ขึ้นอยยู่กับความแรงของสัญญาณที่มาถึงขณะเวลาการค้นหาช่วงเวลานั้นๆ
## คำถามหลังการทดลอง
แต่ละครั้งในการค้นหาสัญญาณwifiแต่ละครั้งได้ไม่เเหมือนกันเพราะเหตุใด
  * เพราะความแรงของสัญญาณที่มาถึงในแต่ละช่วงเวลาไม่เท่ากัน
