// 函数名称: sub_4b1530
// 虚拟地址: 0x4b1530
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4b1530(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_330
    void* var_34c = &var_330
    int32_t var_350 = 3
    int32_t result = 0
    int32_t eax_3 = sub_49dea0(arg4, arg2, arg3, arg3)
    int32_t ecx = 0
    int32_t var_338 = 0
    
    if (eax_3 s<= 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0
    
    do
        int32_t var_32c[0xc8]
        void* ebx_1 = var_32c[ecx * 2]
        int32_t edi_1 = *(ebx_1 + 8)
        int32_t eax_4 = *(ebx_1 + 0xc)
        
        if (edi_1 == 0x100 && eax_4 == 0)
            result += sx.d(*(ebx_1 + 0x10))
        
        if (edi_1 == 0x900 && eax_4 == 0)
            result += sub_49c940(arg4, eax_4 + 1, arg3)
        
        if (edi_1 == 0x1100 && *(ebx_1 + 0xc) == 0)
            result += sub_49c940(arg4, 0x800, arg3)
        
        if (edi_1 == 0x2100 && *(ebx_1 + 0xc) == 0 && sub_49c940(arg4, 0x400, arg3) != 0)
            result += sx.d(*(ebx_1 + 0x10))
        
        ecx = var_338 + 1
        var_338 = ecx
    while (ecx s< eax_3)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
