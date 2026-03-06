// 函数名称: sub_57f8c0
// 虚拟地址: 0x57f8c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HWNDsub_57f8c0(void* arg1 @ esi, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_2 = data_26a6554
    arg2 += 1
    int32_t X_1
    
    if (eax_2[7] == 0)
        HWND ecx
        HWND var_24_1 = ecx
        int32_t var_28_1 = *eax_2
        HINSTANCE edx
        *(data_26a6554 + 0x1c) = sub_57d870(&X_1, edx, ecx)
        eax_2 = data_26a6554
    
    int32_t X = X_1
    MoveWindow(eax_2[7], X, arg2, arg3 - X, arg4 - arg2, 1)
    int32_t var_c
    int32_t* var_24_2 = &var_c
    int32_t var_10
    int32_t* var_28_3 = &var_10
    char* ecx_4 = *(arg1 + 0x10)
    int32_t var_14
    int32_t* var_2c_1 = &var_14
    int32_t var_18
    int32_t* var_30_1 = &var_18
    var_18 = 0
    var_14 = 0
    var_10 = 0
    var_c = 0
    sub_5a957c(ecx_4, "%hhu.%hhu.%hhu.%hhu")
    SendMessageA(*(data_26a6554 + 0x1c), 0x465, 0, 
        (((((var_18 << 8) + var_14) << 8) + var_10) << 8) + var_c)
    ShowWindow(*(data_26a6554 + 0x1c), SW_SHOW)
    HWND result = SetFocus(*(data_26a6554 + 0x1c))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
