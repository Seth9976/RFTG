// 函数名称: sub_5826f0
// 虚拟地址: 0x5826f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL __fastcallsub_5826f0(void* arg1, HWND arg2 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_f8
    sub_5abfc0(&var_f8, 0, 0x5c)
    int32_t edx = *(arg1 + 0xc)
    var_f8 = *(arg1 + 4)
    int32_t var_f0 = edx
    int32_t versionInformation
    sub_5abfc0(&versionInformation, 0, 0x94)
    versionInformation = 0x94
    int32_t edx_1 = GetVersionExA(&versionInformation)
    int32_t var_98
    int32_t edx_3 = neg.d(sbb.d(edx_1, edx_1, var_98 u< 6))
    int32_t var_c4 = edx_3
    int32_t var_c0 = 0
    int32_t var_bc = 0
    int32_t var_b8 = 0
    int32_t var_cc = 0x50
    int32_t var_c8 = 0xffffffff
    HWND eax_3 = sub_57d130(*(arg1 + 4), edx_3, arg2)
    HWND var_e4 = eax_3
    
    if (eax_3 != 0)
        HWND eax_5 = CreateWindowExA(WS_EX_LEFT, "ListBox", nullptr, 0x40000010, 0x80000000, 
            0x80000000, 0x80000000, 0x80000000, arg2, 0x7d1, *(arg1 + 4), nullptr)
        HWND var_e0_1 = eax_5
        
        if (eax_5 != 0)
            HANDLE hData = sub_5a881a(0x5c)
            sub_5a6c10(hData, &var_f8, 0x5c)
            BOOL result = SetPropA(arg2, "lpInsData", hData)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return result
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
