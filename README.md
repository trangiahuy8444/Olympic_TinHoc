# CỔNG HỌC LIỆU TƯƠNG TÁC & BỒI DƯỠNG OLYMPIC TIN HỌC (2026 – 2027)
**Trường Quốc tế Á Châu (The Asian International School) — Tổ Tin học**  
*Chương trình Huấn luyện & Bồi dưỡng Đội tuyển Học sinh Giỏi / Olympic Tin học C++*

---

## 🌐 CỔNG HỌC LIỆU TRỰC TUYẾN (GITHUB PAGES)
👉 **Truy cập trực tiếp tại:** [https://trangiahuy8444.github.io/Olympic_TinHoc/](https://trangiahuy8444.github.io/Olympic_TinHoc/)

> **Điểm nổi bật của Cổng Học Liệu:**
> * **100% Tiếng Việt chuẩn:** Nhúng font Inter và JetBrains Mono sắc nét, tự động render công thức toán học KaTeX.
> * **Bộ 4 Mô Phỏng Trực Quan:** Đo thời gian TLE, kiểm nghiệm tràn số `int` vs `long long`, mô phỏng từng bước Mảng đếm tần số, Mảng cộng dồn Prefix Sum và Mảng hiệu Difference Array.
> * **Trình Giả Lập Code Playground:** Chạy thử code C++, kiểm tra tệp `.INP` / `.OUT` và chấm điểm tức thì trên trình duyệt.
> * **Trợ Lý Sư Phạm Olympic (AHS Mentor Chatbox):** Trợ lý phản xạ Socratic học có hướng dẫn — **tuyệt đối không đưa ra code đáp án**, hướng dẫn học sinh tự tìm ra giải thuật và sửa lỗi.
> * **Kho Tra Cứu Công Thức (Cheat Sheet):** Tìm kiếm thời gian thực toàn bộ công thức số học, modulo, mảng, quy hoạch động và C++ STL.

---

## 🏆 CHIẾN THUẬT ĐOẠT GIẢI OLYMPIC TIN HỌC THÀNH PHỐ (THANG ĐIỂM 20)

```
┌─────────────────────────────────────────────────────────────────────────────┐
│                       CÔNG THỨC ĐOẠT GIẢI THÀNH PHỐ                         │
│                                                                             │
│   Bài 1 (6.0 đ)          Bài 2 (7.0 đ)         Bài 3 (7.0 đ)      TỔNG ĐIỂM │
│  ┌──────────────┐       ┌──────────────┐      ┌──────────────┐              │
│  │  ĂN TRỌN VẸN │   +   │  ĂN SUB 1, 2 │  +   │ ĂN VÉT SUB 1 │  =   13.5 đ  │
│  │  6.0 / 6.0   │       │  4.5 – 5.0   │      │  2.0 – 2.5   │   (CẦM CHẮC  │
│  └──────────────┘       └──────────────┘      └──────────────┘    GIẢI NHÌ) │
└─────────────────────────────────────────────────────────────────────────────┘
```

1. **Bài 1 (6.0 điểm):** Xử lý xâu, mảng, prefix sum, two pointers $\to$ **Ăn trọn 6.0 / 6.0 trong 40 phút đầu**.
2. **Bài 2 (7.0 điểm):** Chặt nhị phân kết quả, Quy hoạch động (DP), Tham lam $\to$ **Ăn chắc 4.5 – 5.0 điểm (Subtask 1 + 2)**.
3. **Bài 3 (7.0 điểm):** Bài toán phân loại cao thủ $\to$ **Dành 20 phút viết thuật toán vét cạn quay lui Subtask 1 bỏ túi 2.0 – 2.5 điểm**.
4. **Tổng điểm kỳ vọng:** **12.5 – 15.0 / 20 điểm** $\to$ Cầm chắc Giải Ba / Giải Nhì Thành phố.

---

## 📂 CẤU TRÚC HỆ THỐNG THƯ MỤC

```text
Olympic_TinHoc/
├── index.html                        # Cổng web tương tác chính (chạy trực tiếp trên GitHub Pages)
├── olympic_tin_hoc_interactive.html  # Bản sao học liệu số
├── README.md                         # Tài liệu tổng quan & hướng dẫn
├── .gitignore                        # Loại trừ tệp tạm hệ thống & LaTeX
│
├── 00_Ke_hoach_va_Cong_van/          # Kế hoạch năm học & công văn hướng dẫn thi cấp TP
│   └── Ke_hoach_Chi_tiet_Olympic_11.md
│
├── 01_Giao_an_chi_tiet/              # Giáo án tuần dành cho Giáo viên (Markdown + PDF)
│
├── 02_Noi_dung_bai_hoc/              # Học liệu chi tiết từng tuần & Buổi khởi động lại
│   ├── Buoi_Khoi_dong_lai/           # Giai đoạn tăng tốc chuyển từ Codelearn sang thi đấu
│   │   ├── 01_Ly_thuyet/             # Sổ tay cẩm nang chuyển giao
│   │   ├── 02_Thuc_hanh_tai_lop/     # Phiếu bài tập trên máy
│   │   ├── 03_Bai_tap_ve_nha/        # Phiếu bài tập về nhà
│   │   └── Loi_giai/                 # Lời giải chi tiết & code C++ chuẩn
│   ├── Tuan_01/
│   ├── Tuan_02/
│   └── Tuan_03/
│
├── 03_De_thi_va_Loi_giai/            # Ngân hàng đề thi Olympic các năm & bài kiểm tra
│   ├── De_thi_Chinh_thuc/
│   └── Loi_giai_Chi_tiet/
│
├── 04_Tai_lieu_tham_khao/            # Cẩm nang & Sổ tay tra cứu công thức
│   ├── 04_So_tay_Lap_trinh_Thi_dau_C++_Handbook.md
│   └── 05_Bang_Tra_Cuu_Cong_Thuc_Va_Thuat_Toan_CheatSheet.md
│
└── assets/                           # Logo Trường Quốc tế Á Châu & đồ họa
    └── logo_asian_school.png
```

---

## 🛠️ HƯỚNG DẪN BIÊN DỊCH VÀ CHẠY THỬ
1. **Xem Web Học Liệu:** Mở trực tiếp tệp `index.html` bằng trình duyệt web bất kỳ hoặc truy cập [GitHub Pages](https://trangiahuy8444.github.io/Olympic_TinHoc/).
2. **Cấu hình Code::Blocks phòng thi:**
   * Trình biên dịch: GNU GCC Compiler, kích hoạt cờ `-std=c++17`.
   * Luôn thêm vào đầu `main()`:
     ```cpp
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     freopen("TENBAI.INP", "r", stdin);
     freopen("TENBAI.OUT", "w", stdout);
     ```
