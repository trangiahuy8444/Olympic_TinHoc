# CHUYÊN ĐỀ 02: HƯỚNG DẪN KỸ THUẬT ĐỌC/GHI TỆP THI ĐẤU CĂN BẢN TRÊN CODE::BLOCKS 20.03
**Đội tuyển Học sinh Giỏi Tin học 11 — Trường Quốc tế Á Châu (Asian School)**

---

## 1. QUY ĐỊNH SỐNG CÒN VỀ TỆP TRONG CÁC KỲ THI HSG & OLYMPIC

* Trong các kỳ thi Tin học trẻ, HSG cấp Quận/Huyện/Thành phố và Olympic 30/4, bài thi được chấm hoàn toàn **tự động bằng máy tính** (hệ thống phần mềm chấm Themis, CMS, VNOJ).
* Máy chấm quy định:
  * Dữ liệu đề bài cấp vào được lưu trong tệp: `TEN_BAI.INP`
  * Kết quả chương trình của thí sinh phải được ghi ra tệp: `TEN_BAI.OUT`
* ⚠️ **CẢNH BÁO TỬ HUYỆT:**
  * Nếu học sinh nhập xuất qua màn hình bàn phím (không dùng tệp) $\implies$ **0 điểm**.
  * Nếu đặt sai tên tệp dù chỉ 1 chữ hoa/thường (ví dụ đề yêu cầu `TONG.INP` mà đặt thành `tong.inp` hoặc `Bai1.INP`) $\implies$ Máy chấm không tìm thấy file $\implies$ **0 điểm**.

---

## 2. BẢN CHẤT CƠ CHẾ "BẺ HƯỚNG LUỒNG" CỦA HÀM `freopen`

Trong thư viện `<cstdio>`, C++ cung cấp hàm `freopen` với nhiệm vụ **bẻ hướng luồng dữ liệu chuẩn**:

1. `freopen("TEN_BAI.INP", "r", stdin);`
   * Chuyển luồng nhập chuẩn `stdin` (vốn lấy dữ liệu từ bàn phím) sang đọc dữ liệu từ tệp văn bản `TEN_BAI.INP` (`"r"` là viết tắt của *read* - đọc).
2. `freopen("TEN_BAI.OUT", "w", stdout);`
   * Chuyển luồng xuất chuẩn `stdout` (vốn in kết quả lên màn hình đen console) sang ghi dữ liệu vào tệp văn bản `TEN_BAI.OUT` (`"w"` là viết tắt của *write* - ghi).
3. **Ưu điểm vượt trội của `freopen`:**
   * Toàn bộ các câu lệnh `cin >>` và `cout <<` quen thuộc được **giữ nguyên 100%**. Học sinh không cần phải học thêm bất kỳ cú pháp hay thư viện đọc file phức tạp nào khác!

---

## 3. QUY TRÌNH 4 BƯỚC THAO TÁC CHUẨN MỰC TRÊN CODE::BLOCKS 20.03

### Bước 1: Tạo mã nguồn C++
1. Mở phần mềm Code::Blocks 20.03.
2. Nhấn tổ hợp phím **`Ctrl + Shift + N`** (hoặc vào menu *File* $\to$ *New* $\to$ *Empty file*).
3. Nhấn **`Ctrl + S`**, chọn thư mục lưu bài và đặt tên tệp với đuôi `.cpp` (ví dụ: `TONG.cpp`).

### Bước 2: Tạo tệp dữ liệu test `.INP`
1. Mở thư mục chứa file `TONG.cpp` vừa lưu.
2. Nhấp chuột phải $\to$ *New* $\to$ *Text Document*.
3. Đổi toàn bộ tên file thành `TONG.INP` (xóa cả đuôi `.txt` mặc định).
4. Mở file `TONG.INP` bằng Notepad hoặc kéo thả vào Code::Blocks, nhập dữ liệu test mẫu (ví dụ: `15 25`) và nhấn `Ctrl + S` lưu lại.

### Bước 3: Biên dịch và chạy chương trình
1. Quay lại cửa sổ Code::Blocks chứa mã nguồn.
2. Nhấn phím tắt **`F9`** (tương đương nút *Build and Run*).
3. Cửa sổ màn hình console màu đen sẽ hiện lên rồi tắt ngay (hoặc trống trơn không in gì) — điều này là **hoàn toàn bình thường**, vì toàn bộ kết quả đã được bẻ hướng ghi vào file!

### Bước 4: Kiểm tra kết quả trong file `.OUT`
1. Mở lại thư mục bài làm, bạn sẽ thấy xuất hiện một tệp mới có tên **`TONG.OUT`** được máy tính tự động tạo ra!
2. Mở file `TONG.OUT` lên để kiểm tra xem kết quả có đúng bằng `40` hay không.

> ⚠️ **BẪY CỰC KỲ PHỔ BIẾN TRÊN WINDOWS: ẨN ĐUÔI TỆP**  
> Trên hệ điều hành Windows, cài đặt mặc định thường ẩn phần mở rộng của file. Khi học sinh tạo file `TONG.INP`, thực chất máy lưu là `TONG.INP.txt`! Khi chạy, máy báo không tìm thấy file.  
> **Cách xử lý:** Trong cửa sổ File Explorer $\to$ chọn tab **View** $\to$ tích chọn ô **File name extensions**. Sau đó nhìn vào tên file và xóa đuôi `.txt` đi.

---

## 4. KHUNG CHƯƠNG TRÌNH MẪU CHUẨN CĂN BẢN (VỠ LÒNG)

Học sinh có thể sao chép khung chương trình chuẩn này cho mọi bài làm:

```cpp
#include <iostream>
#include <cstdio> // Thư viện bắt buộc chứa hàm freopen

using namespace std;

int main() {
    // 1. Chuyển hướng luồng dữ liệu sang tệp đề thi
    freopen("TONG.INP", "r", stdin);
    freopen("TONG.OUT", "w", stdout);

    // 2. Khai báo biến và nhập dữ liệu (vẫn dùng cin bình thường)
    long long a, b;
    if (cin >> a >> b) {
        // 3. Xử lý thuật toán và xuất kết quả (vẫn dùng cout bình thường)
        long long tong = a + b;
        cout << tong << "\n";
    }

    return 0;
}
```

---

## 5. TUYỆT CHIÊU CAO THỦ: TỰ ĐỘNG NHẬN DIỆN TỆP THÔNG MINH

Khi ở nhà học sinh muốn nhập tay qua bàn phím để test nhanh các trường hợp, nhưng khi nộp thi lại cần đọc từ file. Thay vì đóng mở comment `// freopen`, các tuyển thủ dùng kỹ thuật kiểm tra file tồn tại:

```cpp
// Nếu trong thư mục có file TONG.INP -> tự động đọc từ file
// Nếu không có file TONG.INP -> tự động nhận từ bàn phím và in ra màn hình console!
if (fopen("TONG.INP", "r")) {
    freopen("TONG.INP", "r", stdin);
    freopen("TONG.OUT", "w", stdout);
}
```

* **Lợi ích:** Học sinh làm bài ở nhà hay nộp bài thi chính thức đều **không cần sửa một dòng code nào**!

---

## 6. BẢNG CHẨN ĐOÁN 5 LỖI ĐỌC/GHI TỆP THƯỜNG GẶP & CÁCH XỬ LÝ

| Hiện tượng lỗi | Nguyên nhân thực tế | Cách xử lý ngay lập tức |
| :--- | :--- | :--- |
| **File `.OUT` không xuất hiện** sau khi nhấn F9 | Chưa nhấn đúng phím **F9** (chỉ bấm F8 hoặc F10), hoặc mã nguồn đang có lỗi cú pháp đỏ ở dòng khác. | Nhìn vào tab *Build messages* bên dưới, sửa hết lỗi đỏ rồi nhấn lại **F9**. |
| **File `.OUT` có sinh ra nhưng bên trong trống rỗng** | Tên file trong lệnh `freopen` không khớp với tên file `.INP` ngoài thư mục (ví dụ trong code là `TONG.INP` nhưng ngoài thư mục là `tong.inp` hoặc `Bai1.INP`). | Kiểm tra chính xác từng chữ cái hoa/thường giữa mã code C++ và tên file thực tế. |
| **File bị lưu thành `TONG.INP.txt`** | Windows bật chế độ ẩn đuôi file văn bản mặc định. | Vào File Explorer $\to$ tab *View* $\to$ tích chọn *File name extensions* và xóa đuôi `.txt` thừa. |
| **Code::Blocks báo lỗi *Permission denied*** khi Build | Cửa sổ màn hình console màu đen của lần chạy trước chưa được đóng. | Tìm và tắt cửa sổ đen console đang chạy ngầm trên thanh Taskbar, sau đó nhấn lại **F9**. |
| **Chương trình đọc ra toàn số 0 hoặc số rác** | File `.INP` được lưu ở một thư mục khác, không nằm cùng chỗ với file mã nguồn `.cpp`. | Đảm bảo file `.cpp` và file `.INP` phải nằm **chung một thư mục**. |
