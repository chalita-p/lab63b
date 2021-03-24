# การทดลองที่ 5 เรื่อง การเขียนโปรแกรมเชื่อมต่อไวไฟและเว็บเซอร์เวอร์
## วัตถุประสงค์
1. เพื่อให้รู้จักการเขียนโปรแกรมที่เชื่อต่อwifi
## อุปกรณ์ที่ใช้
1. microcontroller
2. usb to serial port
3. usb
4. computer or notbook ไว้เขียนโปรแกรม
## ศึกษาข้อมูลเบื้องต้น
* [platformio](https://platformio.org/)
* [microcontroller คือ](https://thiti.dev/blog/28/)
* [microcontroller esp 01](http://fitrox.lnwshop.com/article/28/esp8266-ตอนที่-1-รู้จักกับ-esp8266)
## วิธีการทำการทดลอง
1. ต่อ microcontroller เข้ากับ usb toserial port และต่อเข้ากับ usb เข้ากับ computer
![image](https://user-images.githubusercontent.com/80880831/112276164-02dcee00-8cb3-11eb-825b-fd10070f1eaf.jpeg)
2. cd 05_Wifi-Web-Server
3. vi src/main.cpp
![image](https://user-images.githubusercontent.com/80880831/112276424-4e8f9780-8cb3-11eb-8c53-342653b99b35.jpeg)
4. pio run -t upload
5. กดปุ่มport0(ปุ่มสีดำ)และปุ่มีเซ็ต(ปุ่มสีแดง)เพื่อรีเซ็ตเพื่อเคลียร์โปรแกรมเก่าในmicrocontroller
6. เมื่อrun program เสร็จ ให้เข้า web browser เพื่อตรวจสอบว่าเชื่อต่อ wifi ได้

## การบันทึกผลการทดลอง
เมื่อรันโปรมแกรมเชื่อต่อwifiสำเร็จ เวลาเข้า browser เพื่อเช็คดูจะขึ้น Hello cnt :
## อภิปรายผลการทดลอง
เขียนโปรแกรมเพื่อให้ตัวmicrocontroller นั่งเชื่อต่อwifi เพื่อใช้งานอินเทอร์เน็ตได้
## คำถามหลังการทดลอง
สามารถเลือกได้ว่าจะเชื่อต่อwifiสัญญาณไหนที่โปรแกรมบรรทัดไหน
  * ![image](https://user-images.githubusercontent.com/80880831/112277530-72071200-8cb4-11eb-9371-5c73717c42ec.jpeg)
