# การทดลองที่ 6 เรื่อง การเขียนโปรแกรมสร้างไวไฟแอคเซสพอยต์ (Wifi AP)
## วัตถุประสงค์
1. เขียนโปรแกรมให้ microcontroller ปล่อยสัญญาณ wifi ได้
## อุปกรณ์ที่ใช้
1. microcontroller
2. usb to serial port
3. usb
4. computer or notbook ไว้เขียนโปรแกรม
5. โทรศัพท์มือถือ
## ศึกษาข้อมูลเบื้องต้น
* [platformio](https://platformio.org/)
* [microcontroller คือ](https://thiti.dev/blog/28/)
* [microcontroller esp 01](http://fitrox.lnwshop.com/article/28/esp8266-ตอนที่-1-รู้จักกับ-esp8266)
## วิธีการทำการทดลอง
1. ต่อ microcontroller เข้ากับ usb toserial port และต่อเข้ากับ usb เข้ากับ computer
![image](https://user-images.githubusercontent.com/80880831/112277782-abd81880-8cb4-11eb-83b8-7397ba5c84fc.jpeg)
2. cd 06_Wifi-AP-Web-Server
3. vi src/main.cpp
![image](https://user-images.githubusercontent.com/80880831/112278436-68ca7500-8cb5-11eb-98ac-2f3671931555.jpeg)
4. pio run -t upload
5. กดปุ่มport0(ปุ่มสีดำ)และปุ่มีเซ็ต(ปุ่มสีแดง)เพื่อรีเซ็ตเพื่อเคลียร์โปรแกรมเก่าในmicrocontroller
![image](https://user-images.githubusercontent.com/80880831/112278592-97485000-8cb5-11eb-8518-9fb32d176ec7.jpeg)
6. pio device monitor
![image](https://user-images.githubusercontent.com/80880831/112278762-c068e080-8cb5-11eb-82d2-bc30c3e8a070.jpeg)
7. นำโทรศัพท์มือถือมาเชื่อต่อwifiตามชื่อและรหัสที่เราตั้งไว้
## การบันทึกผลการทดลอง
![image](https://user-images.githubusercontent.com/80880831/112279078-12aa0180-8cb6-11eb-962e-e5cdbab1eba0.jpeg)
## อภิปรายผลการทดลอง
โทรศัพท์มือถือสามารถชื่อต่อwifiที่ปล่อยสัญญาณออกจากmicrocontrollerได้
## คำถามหลังการทดลอง
สามารถตั้งชื่อและรหัสผ่านwifiได้ที่โค้ดบรรทัดใด
  * ![image](https://user-images.githubusercontent.com/80880831/112279291-5a308d80-8cb6-11eb-820e-ded42f47036d.jpeg)
