// 函数名称: sub_57cd50
// 虚拟地址: 0x57cd50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_57cd50(int32_t* arg1 @ esi, HDC arg2 @ edi, char arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    HGDIOBJ h = SelectObject(arg2, GetStockObject(BLACK_PEN))
    LOGPEN var_18
    GetObjectA(h, 0x10, &var_18)
    var_18.lopnColor = arg4
    SelectObject(arg2, CreatePenIndirect(&var_18))
    
    if ((arg3 & 1) != 0)
        int32_t x = *arg1
        int32_t y_3 = arg1[3]
        MoveToEx(arg2, x, arg1[1], nullptr)
        LineTo(arg2, x, y_3)
    
    if ((arg3 & 2) != 0)
        int32_t y = arg1[1]
        int32_t x_3 = arg1[2]
        MoveToEx(arg2, *arg1, y, nullptr)
        LineTo(arg2, x_3, y)
    
    if ((arg3 & 4) != 0)
        int32_t y_1 = arg1[3]
        int32_t x_1 = arg1[2]
        MoveToEx(arg2, x_1, arg1[1], nullptr)
        LineTo(arg2, x_1, y_1)
    
    if ((arg3 & 8) != 0)
        int32_t y_2 = arg1[3]
        int32_t x_2 = arg1[2]
        MoveToEx(arg2, *arg1, y_2, nullptr)
        LineTo(arg2, x_2, y_2)
    
    BOOL result = DeleteObject(SelectObject(arg2, h))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
