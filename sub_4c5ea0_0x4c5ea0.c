// 函数名称: sub_4c5ea0
// 虚拟地址: 0x4c5ea0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL __fastcallsub_4c5ea0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    RECT rect
    GetWindowRect(data_30785e0, &rect)
    RECT rect_1
    GetClientRect(data_30785e0, &rect_1)
    int32_t top = rect.top
    int32_t left = rect.left
    BOOL result = SetWindowPos(data_30785e0, nullptr, left, top, 
        rect.right - left + *arg1 - (rect_1.right - rect_1.left), 
        arg1[1] - (rect_1.bottom - rect_1.top) + rect.bottom - top, SWP_DRAWFRAME)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
