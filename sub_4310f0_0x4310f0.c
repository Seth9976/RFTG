// 函数名称: sub_4310f0
// 虚拟地址: 0x4310f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4310f0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = data_27e7a40
    
    if (arg3 == *(eax_2 + 0x74))
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x2365, "DisplayLocationPay")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void var_c0
    int32_t eax_4
    int32_t edx_1
    eax_4, edx_1 = sub_45fb20(eax_2, &var_c0, arg3, &var_c0)
    void var_60
    __builtin_memcpy(&var_60, eax_4, 0x40)
    int32_t* eax_6 = sub_4f5350(data_c02180, edx_1, data_307c584, &var_60)
    int32_t edx_2 = eax_6[1]
    float var_1c = *eax_6
    int32_t var_18 = edx_2
    int32_t var_14 = eax_6[2]
    int32_t var_10 = eax_6[3]
    __builtin_memcpy(arg4, sub_430000(&var_1c, 0), 0x20)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg4
}
