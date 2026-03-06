// 函数名称: sub_667ff0
// 虚拟地址: 0x667ff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_667ff0(char* arg1, uint32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char eax_2 = (*(arg1 + 0x6c)).b
    
    if ((eax_2 & 1) == 0)
        sub_664320(arg1, "Missing IHDR before gAMA")
        noreturn
    
    if ((eax_2 & 4) != 0)
        sub_664100(arg1, "Invalid gAMA after IDAT")
        int32_t eax_4 = sub_667b40(arg1, arg3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_4
    
    if ((eax_2 & 2) != 0)
        sub_664100(arg1, "Out of place gAMA chunk")
    
    if (arg2 != 0)
        int32_t eax_5 = *(arg2 + 8)
        
        if ((eax_5.b & 1) != 0 && (eax_5 & 0x800) == 0)
            sub_664100(arg1, "Duplicate gAMA chunk")
            int32_t eax_6 = sub_667b40(arg1, arg3)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_6
    
    if (arg3 != 4)
        sub_664100(arg1, "Incorrect gAMA chunk length")
        int32_t eax_7 = sub_667b40(arg1, arg3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_7
    
    int32_t var_10c
    sub_664410(arg1, &var_10c, 4)
    sub_662280(arg1, &var_10c, 4)
    int32_t eax_8 = sub_667b40(arg1, 0)
    
    if (eax_8 == 0)
        int16_t ecx_8 = var_10c.w
        uint32_t eax_15 = (((((zx.d(ecx_8.b) << 8) + zx.d(ecx_8:1.b)) << 8) + zx.d(var_10c:2.b)) << 8)
            + zx.d(var_10c:3.b)
        
        if (eax_15 u> 0x7fffffff || eax_15 s<= 0)
            uint32_t eax_16 = sub_664100(arg1, "Ignoring gAMA chunk with out of range gamma")
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_16
        
        if (arg2 != 0 && (*(arg2 + 8) & 0x800) != 0 && (eax_15 s< 0xafc8 || eax_15 s> 0xb3b0))
            void var_108
            sub_663f40(&var_108, 1, 5, eax_15)
            uint32_t eax_17 =
                sub_664180(arg1, &var_108, "Ignoring incorrect gAMA value @1 when sRGB is also present")
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_17
        
        *(arg1 + 0x178) = eax_15
        eax_8 = sub_664590(arg1, arg2, eax_15)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_8
}
