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
1. ต่อ microcontroller เข้ากับ usb toserial port และต่อเข้ากับ usb เข้ากับ computer
2. cd 02_ScanWifi
![image](https://user-images.githubusercontent.com/80880831/112257150-f34fac00-8c96-11eb-8cf1-2af648d0ee9b.jpeg)
3. vi src/main.cpp

4. pio run -t upload
![image](https://user-images.githubusercontent.com/80880831/112257604-b801ad00-8c97-11eb-923f-02f7731540f3.jpeg)
5. กดปุ่มport0(ปุ่มสีดำ)และปุ่มีเซ็ต(ปุ่มสีแดง)เพื่อรีเซ็ตเพื่อเคลียร์โปรแกรมเก่าในmicrocontroller
6. เมื่อrun program เสร็จ
7. pio device monitor เพื่อให้หน้าจอcompter แสดงผล
![image](https://user-images.githubusercontent.com/80880831/112257650-ce0f6d80-8c97-11eb-964a-9a1e125db422.jpeg)
ขณะรัน ถ้ากดปุ่มรีเซ็ต จะเริ่มนับ ค้นหา wifi ใหม่อีกครั้ง
## การบันทึกผลการทดลอง

## อภิปรายผลการทดลอง

## คำถามหลังการทดลอง
