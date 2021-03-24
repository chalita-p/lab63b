# การทดลองที่ 4 เรื่อง การเขียนโปรแกรมอินพุทสัญญาณดิจิทัล
## วัตถุประสงค์
1. รู้จักการใช้ตัวต้านทานปรับค่าตามแสง
2. การนำสัญญาณiputมากำหนดoutput
## อุปกรณ์ที่ใช้
1. microcontroller esp01
2. usb to serial port
3. usb
4. computer or notbook ไว้เขียนโปรแกรม
5. adapter module
6. LDR
## ศึกษาข้อมูลเบื้องต้น
* [platformio](https://platformio.org/)
* [microcontroller คือ](https://thiti.dev/blog/28/)
* [microcontroller esp 01](http://fitrox.lnwshop.com/article/28/esp8266-ตอนที่-1-รู้จักกับ-esp8266)
* [LDR](https://sites.google.com/site/elecso25/menu/8)
## วิธีการทำการทดลอง
* ตอนที่1
1. ต่อ microcontroller เข้ากับ adapterแล้วนนำไปต่อกับ usb to serial port และต่อเข้ากับ usb เข้ากับ computer
![image](https://user-images.githubusercontent.com/80880831/112261170-e5e9f000-8c9d-11eb-9e53-7a8fc340316e.jpeg)
2. cd 03_Output-Port
3. vi src/main.cpp
![image](https://user-images.githubusercontent.com/80880831/112261260-192c7f00-8c9e-11eb-881f-8df351921111.jpeg)
4. pio run -t upload
5. กดปุ่มport0(ปุ่มสีดำ)และปุ่มีเซ็ต(ปุ่มสีแดง)เพื่อรีเซ็ตเพื่อเคลียร์โปรแกรมเก่าในmicrocontroller
6. เมื่อrun program เสร็จ
![image](https://user-images.githubusercontent.com/80880831/112261422-6b6da000-8c9e-11eb-8ce9-cf4723be3772.jpeg)
7. pio device monitor เพื่อให้หน้าจอcompter แสดงผล
![image](https://user-images.githubusercontent.com/80880831/112261469-86d8ab00-8c9e-11eb-9bcf-c462d976fa58.jpeg)
ขณะรัน ถ้ากดปุ่มรีเซ็ต จะเริ่มการทำงานใหม่
* ตอนที่2
8. นำmicrocontrollerเปลี่ยนมาเสียบเข้ากับrelay

## การบันทึกผลการทดลอง

## อภิปรายผลการทดลอง

## คำถามหลังการทดลอง
