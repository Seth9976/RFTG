// 函数名称: sub_53b060
// 虚拟地址: 0x53b060
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL __convention("regparm")sub_53b060(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t point
    int32_t var_24
    
    if (data_307883d == 0)
        sub_53a0a0(arg3, &point, arg4)
        int32_t point_1 = point
        
        if (point_1 == 1)
            data_3078838 = var_24
            data_307883c = 0
        else if (point_1 != 2)
            data_3078838 = 0xffffffff
        else
            data_3078838 = var_24
            data_307883c = 1
    else
        char* ecx
        int80_t st0_1
        st0_1, ecx = sub_53afb0(arg4, arg2, arg3)
        sub_536c00(ecx)
    
    int32_t var_30
    GetWindowRect(GetDlgItem(data_3078830, 0x80), &var_30)
    ScreenToClient(data_3078830, &var_30)
    ScreenToClient(data_3078830, &point)
    int32_t var_2c
    RECT rect
    rect.top = var_2c
    rect.right = point
    rect.left = var_30
    rect.bottom = var_24
    BOOL result = InvalidateRect(data_3078830, &rect, 0)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
