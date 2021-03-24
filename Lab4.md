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
2. cd 04_Input-Port
3. vi src/main.cpp
![image](https://user-images.githubusercontent.com/80880831/112263412-d4a2e280-8ca1-11eb-964c-a95a49ad0da8.jpeg)
4. pio run -t upload
5. กดปุ่มport0(ปุ่มสีดำ)และปุ่มีเซ็ต(ปุ่มสีแดง)เพื่อรีเซ็ตเพื่อเคลียร์โปรแกรมเก่าในmicrocontroller
6. เมื่อrun program เสร็จ
![image](https://user-images.githubusercontent.com/80880831/112263491-f7cd9200-8ca1-11eb-87e5-6784ee695a23.jpeg)
7. pio device monitor เพื่อให้หน้าจอcompter แสดงผล
![image](https://user-images.githubusercontent.com/80880831/112263557-1469ca00-8ca2-11eb-8331-b880343debfa.jpeg)
8. เมื่อนำสายไฟสีขาว(port0)มาต่อกับช่องสายไฟสีดำ จะได้
![image](https://user-images.githubusercontent.com/80880831/112263692-4da23a00-8ca2-11eb-863d-72c06c4dc262.jpeg)
9. หรือกดที่ปุ่มสีดำ(port0) ก็จะได้ผลลัพธ์เช่นเดียวกัน
* ตอนที่2
10. ต่อLDRตามภาพ
![image](https://user-images.githubusercontent.com/80880831/112263946-a8d42c80-8ca2-11eb-9ce8-2612f56981ea.jpeg)

## การบันทึกผลการทดลอง
เมื่อกดport0
![image](https://user-images.githubusercontent.com/80880831/112263692-4da23a00-8ca2-11eb-863d-72c06c4dc262.jpeg)
เมื่อต่อLDR
![image](https://user-images.githubusercontent.com/80880831/112264014-cef9cc80-8ca2-11eb-9fae-9c14ff5b99ec.jpeg)
![image](https://user-images.githubusercontent.com/80880831/112264035-d4efad80-8ca2-11eb-9994-d46a1f7f3ba2.jpeg)
## อภิปรายผลการทดลอง
* ตอนที1 เมื่อกดที่port0 จะทำให้ไฟติดและขึ้น read เป็น 0 แต่ถ้าไม่กด ไฟจะดับ และ read เป็น 1
* ตอนที่2 หลังจากต่อ LDR เมื่อ LDR ได้รับแสงจะทำให้ไฟติด และเมื่อไม่ได้รับแสงจะทำให้ไฟดับ
## คำถามหลังการทดลอง
ต้องแก้โปรแกรมอย่างไรเพื่อให้ได้ผลลัพธ์ว่า เมื่อLDRได้รับแสงแล้วไฟจะดับ และเมื่อไม่ได้รับแสงไฟจะติด
  * สามารถแก้ได้หลายแบบ เช่นน แก้โปรแกรม
  ![image](https://user-images.githubusercontent.com/80880831/112264719-dd94b380-8ca3-11eb-8ec5-4c7516f4d3d0.jpeg)
แก้คำว่า high เป็น low เปลี่ยนคำว่า low เป็น high
