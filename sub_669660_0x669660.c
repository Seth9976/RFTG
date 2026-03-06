// 函数名称: sub_669660
// 虚拟地址: 0x669660
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_669660(char* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char eax_2 = (*(arg1 + 0x6c)).b
    
    if ((eax_2 & 1) == 0)
        sub_664320(arg1, "Missing IHDR before hIST")
        noreturn
    
    if ((eax_2 & 4) != 0)
        sub_664100(arg1, "Invalid hIST after IDAT")
        int32_t eax_4 = sub_667b40(arg1, arg3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_4
    
    if ((eax_2 & 2) == 0)
        sub_664100(arg1, "Missing PLTE before hIST")
        int32_t eax_5 = sub_667b40(arg1, arg3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_5
    
    if (arg2 != 0 && (*(arg2 + 8) & 0x40) != 0)
        sub_664100(arg1, "Duplicate hIST chunk")
        int32_t eax_6 = sub_667b40(arg1, arg3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_6
    
    uint32_t eax_7
    
    if (arg3 u<= 0x200)
        eax_7 = zx.d(*(arg1 + 0x12c))
    
    int32_t eax_11
    
    if (arg3 u> 0x200 || arg3 != eax_7 * 2)
        sub_664100(arg1, "Incorrect hIST chunk length")
        eax_11 = sub_667b40(arg1, arg3)
    else
        uint32_t ebx_1 = arg3 u>> 1
        int32_t edi_1 = 0
        int16_t var_208[0x100]
        
        if (ebx_1 != 0)
            do
                int16_t var_20c
                sub_664410(arg1, &var_20c, 2)
                sub_662280(arg1, &var_20c, 2)
                int16_t eax_9 = var_20c
                var_208[edi_1] = zx.w(eax_9.b) * 0x100 + zx.w(eax_9:1.b)
                edi_1 += 1
            while (edi_1 u< ebx_1)
        
        eax_11 = sub_667b40(arg1, 0)
        
        if (eax_11 == 0)
            int32_t eax_12 = sub_6645d0(arg1, arg2, &var_208)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_12
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_11
}
