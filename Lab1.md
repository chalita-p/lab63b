# การทดลองที่1 การเขียนโปรแกรมเพื่อรันบนไมโครคอนโทรเลอร์

## วัตถุประสงค์
1. เพื่อให้รู้จักmicrocontroller
2. เพื่อให้รู้จักการนำเข้าโปรมแกรมจากโฟลเดอร์อื่น
3. รู้จักโปรแกรมการนับ
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
![image](https://user-images.githubusercontent.com/80880831/112207698-08521e00-8c4a-11eb-91ac-cbd2f51c7ba8.jpeg)
2. ใช้โปรแกรมตัวอย่างที่
   * cd pattani
   * cd01_serial-Monitor
   * vi src/main.cpp
![image](https://user-images.githubusercontent.com/80880831/112255367-9f43c800-8c94-11eb-899c-66359b315487.jpeg)
3. เช็คplatform
   * vi platformio.ini
![image](https://user-images.githubusercontent.com/80880831/112255508-ea5ddb00-8c94-11eb-9c64-3dcff4c8d308.jpeg)
4. upload program ลงใน microcontroller
   * pio run -t upload
![image](https://user-images.githubusercontent.com/80880831/112208773-50257500-8c4b-11eb-9f3f-524d79f5eaa6.png)
5. กดปุ่มport0(ปุ่มสีดำ)และปุ่มีเซ็ต(ปุ่มสีแดง)เพื่อรีเซ็ตเพื่อเคลียร์โปรแกรมเก่าในmicrocontroller
6. เมื่อrun program เสร็จ จะได้
![image](https://user-images.githubusercontent.com/80880831/112209081-a8f50d80-8c4b-11eb-9762-929f1a53e0bb.png)
ขณะรัน ถ้ากดปุ่มรีเซ็ต จะเริ่มนับ 1 ใหม่
## การบันทึกผลการทดลอง
![image](https://user-images.githubusercontent.com/80880831/112209687-4d774f80-8c4c-11eb-8c5e-4d5aab8e82e0.jpeg)
## อภิปรายผลการทดลอง
โปรแกรมจะนับเลขไปเรื่อยๆ เริ่มจาก 1 จนกว่าจะกดปุ่มรีเซ็ตที่ตัวmicrocontroller จึงจะเริ่มนับ 1 ใหม่อีกครั้ง ไปเรื่อยๆ
## คำถามหลังการทดลอง
ถ้าต้องการตรวจสอบว่าmicrocontrollerที่ใช้อยู่เป็นร่นไหน สามารถเช็คได้อย่างไ
 * ใช้คำสั่ง vi platformio.ini ในการเขียนโปรแกรมมเพื่อเช็ค
