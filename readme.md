# Project MockStudentDataGenerator

MSSV: 20120454

Họ tên: Lê Công Đắt

Chương trình viết bằng ngôn ngữ C++ sử dụng IDE là Visual Studio 2019

## Chức năng:

- Generate randomly a number n in the range of [5, 10]
- Generate randomly n Students and add to the previous vector
- Overwrite and save and the students in the current vector back to the file "students.txt"
- Print out the average GPA of all students
- Print out all the students that have a GPA greater than the average GPA

## Cách chạy chương trình
- Tạo file students.txt (nếu chưa có) cùng thư mục với file thực thi
- Double click vào file MockStudentDataGenerator.exe hoặc mở MockStudentDataGenerator -> Ctrl F5 để chạy
- Kết quả hiển thị trên console, Danh sách sinh viên ghi đè vào file students.txt

Thông tin của sinh viên được tạo ngẫu nhiên sao cho chân thật nhất (đối với sinh viên Trường Đại học KHTN)

## Mô tả các thông tin của đối tượng Student:
- ID: Mã số sinh viên\
    Mã số sinh viên : có 8 chữ số được chia thành 4 phần có dạng AABBCDDD\
		2 chữ số đầu tiên : Đại diện cho khóa (Chương trình này tạo MSSV từ khóa 17 đến 21)\
		Ví dụ : 19BBCDDD là khóa 2019\
		2 chữ số kế tiếp : Đại diện cho mã khoa\
		Ví dụ : AA11CDDD là ngành Toán học\
		1 chữ số kế tiếp nữa : Đại diện cho mã chương trình\
		0 - chương trình Đại Trà\
		5 - chương trình Tiên Tiến\
		6 - chương trình Việt Pháp\
		7 - chương trình Chất Lượng Cao\
		Các chữ số còn lại : Đại diện cho số thứ tự trong khóa\
		Ví dụ : AABBC159: Số thứ tự tứ 159\
		Mã các ngành trong MSSV cần lưu ý :\
		110 : Nhóm ngành Toán Học, Toán Tin, Toán Ứng Dụng\
		120 : Nhóm ngành Máy Tính và Công Nghệ Thông Tin\
		130 : Ngành Vật Lý Học\
		140 : Ngành Hóa Học\
		150 : Ngành Sinh Học\
		160 : Ngành Địa Chất Học\
		170 : Ngành Khoa Học Môi Trường\
		180 : Ngành Công Nghệ Sinh Học\
		190 : Ngành Khoa Học Vật Liệu\
		200 : Ngành Kỹ Thuật Điện tử, Viễn Thông\
		210 : Ngành Hải Dương Học\
		220 : Ngành Công Nghệ Kỹ Thuật Môi Trường\
		230 : Ngành Kỹ Thuật Hạt Nhân\
		250 : Ngành Công nghệ Vật liệu\
		260 : Ngành Vật lý Y Khoa\
		270 : Ngành Kỹ Thuật Địa Chất\
		280 : Ngành Khoa học Dữ liệu\
		125 : Ngành Công Nghệ Thông Tin(Tiên Tiến)\
		126 : Ngành Công Nghệ Thông Tin(Việt Pháp)\
		127 : Ngành Công Nghệ Thông Tin(Chất Lượng Cao)\
		60 – 65 : Ngành Công Nghệ Thông Tin(Cao Đẳng)\
		146 : Ngành Hóa Học(Việt Pháp)\
		147 : Ngành Hóa Học(Chất Lượng Cao)\
		157 : Ngành Sinh Học(Chất Lượng Cao)\
		177 : Ngành Khoa Học Môi Trường(Chất Lượng Cao)\
		187 : Ngành Công Nghệ Sinh Học(Chất Lượng Cao)\
		207 : Ngành Kỹ Thuật Điện Tử Viễn Thông(Chất Lượng Cao)\
		247, 900 : Ngành Công Nghệ Kỹ Thuật Hóa Học(Chất Lượng Cao)
- Name: Họ tên\
Được ghép từ họ, tên lót, và tên phổ biến ở Việt Nam
- GPA: Điểm trung bình\
Số thực trong khoảng [0,10]
- Phone: Số điện thoại\
Gồm 10 chữ số với các đầu số các mạng điện thoại ở Việt Nam như Viettel, Vinaphone, Mobifone, Gmobile
- Emai: Email sinh viên\
Có dạng MSSV@student.hcmus.edu.vn
- Birthday: Ngày sinh\
Được tạo ngẫu nhiên từ năm 1999 đến 2003 và có kiểm tra đúng tính hợp lệ
- Address: Địa chỉ\
Được ghép ngẫu nhiên từ tên các Quận, Phường, Tên đường có thật ở Thành phố Hồ Chí Minh

## Class Diagram
Xem file MockStudentDataGeneratorClassDiagram.png
## Link video demo
https://youtu.be/aQZmX_S5KGQ
## Đánh giá chương trình:
- Đã thực hiện được tất cả yêu cầu của đồ án
- Thông tin được tạo khá chân thực
- Có một chút xử lý hiển thị console
## Expected grade:
Vì dành khá nhiều thời gian, và đã thực hiện được tất cả yêu cầu của đồ án. Em mong muốn được 10đ
