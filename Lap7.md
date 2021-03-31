# การทดลองที่ 7 เรื่อง การเขียนโปรแกรมสร้าง Wifi AP เพื่อควบคุมการเปิดปิดไฟ LED
## วัตถุประสงค์
1. เขียนโปรแกรมให้ microcontroller ปล่อยสัญญาณ wifi ได้
2. เขียนโปรมแกรมให้ควบคุมการเปิดปิดไฟได้
## อุปกรณ์ที่ใช้
1. microcontroller
2. usb to serial port
3. computer or notbook ไว้เขียนโปรแกรม
4. โทรศัพท์มือถือ
5. LED
6. ความต้านทาน
7. Breadboard
## ศึกษาข้อมูลเบื้องต้น
* [platformio](https://platformio.org/)
* [microcontroller คือ](https://thiti.dev/blog/28/)
* [การเขียนภาษาc](https://www.myarduino.net/article/8/)
* [โปรแกรมเปิดปิดไฟ](https://www.myarduino.net/article/410/)
## วิธีการทำการทดลอง
1. ต่อวงจรดังรูป
![image](https://user-images.githubusercontent.com/80880831/112741784-be06cf00-8fb2-11eb-978a-cd3fc2381a59.png)
2. เขียนโปรแกรมดังนี้

![image](https://user-images.githubusercontent.com/80880831/112741777-af201c80-8fb2-11eb-997b-929a1293fe39.jpeg)

3. อัพโหลดโปรแกรมลงในmicrocontroller

4. ทดสอบการใช้งาน
    1. เปิด Serial Monitor เพื่อตรวจดู ชื่อไวไฟ และ IP address ของ Server 
    2. ตั้งการเชื่อต่อของสัญญาณไวไฟเข้ากับ AP ที่กำหนดไว้
    3. เปิดเว็บเบราว์เซอร์ แล้วเปิดหน้าเพจโดย IP ที่ได้จากข้อ 1
    ![image](https://user-images.githubusercontent.com/80880831/112741797-e1317e80-8fb2-11eb-9229-80a2a83a818c.png)
    ![image](https://user-images.githubusercontent.com/80880831/112741799-e8588c80-8fb2-11eb-9973-62579f191ed7.png)
## การบันทึกผลการทดลอง
เมื่อกดปุ่มก็จะสามารถควบคุมการเปิดปิดไฟได้
## อภิปรายผลการทดลอง
สามารควบคุมการเปิดปิด LED ได้จากการเชื่อต่อ WiFi ที่ปล่อยออกมาจากตัว microcontroller ได้
## ประโยชน์
* เพื่อให้สามารถควบคุมการเปิดปิดไฟได้ง่ายขึ้น ทั้งยังทำได้ในระยะที่ไกลเท่าที่สัญญาณwifiไปถึง
