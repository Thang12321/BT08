# BT08

A4: Giải thích lỗi:

Trước khi gán giá trị cho char ** s, thì ta phải cấp phát bộ nhớ trước

Khi khởi tạo 1 con trỏ mà con trỏ đó không trỏ tới bất cứ biến nào mà ta gán luôn giá trị cho nó thì sẽ không có địa chỉ để lưu giá trị

Vậy, ta phải cấp phát bộ nhớ cho char ** s (như trong code) để chạy được bài này.

(Các bài trước em đều làm đủ hoặc vượt yêu cầu, bài A4 em làm để bù điểm cho Câu C2 BT08(Bt này))
