// 函数名称: sub_6697f0
// 虚拟地址: 0x6697f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6697f0(char* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char eax_2 = (*(arg1 + 0x6c)).b
    
    if ((eax_2 & 1) == 0)
        sub_664320(arg1, "Missing IHDR before pHYs")
        noreturn
    
    if ((eax_2 & 4) != 0)
        sub_664100(arg1, "Invalid pHYs after IDAT")
        int32_t eax_4 = sub_667b40(arg1, arg3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_4
    
    if (arg2 != 0 && (*(arg2 + 8) & 0x80) != 0)
        sub_664100(arg1, "Duplicate pHYs chunk")
        int32_t eax_5 = sub_667b40(arg1, arg3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_5
    
    if (arg3 != 9)
        sub_664100(arg1, "Incorrect pHYs chunk length")
        int32_t eax_6 = sub_667b40(arg1, arg3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_6
    
    char var_14
    sub_664410(arg1, &var_14, 9)
    sub_662280(arg1, &var_14, 9)
    int32_t eax_7 = sub_667b40(arg1, 0)
    char var_13
    char var_12
    char var_11
    char var_10
    char var_f
    char var_e
    char var_d
    char var_c
    
    if (eax_7 == 0)
        eax_7 = sub_664b00(arg1, arg2, 
            (((((zx.d(var_14) << 8) + zx.d(var_13)) << 8) + zx.d(var_12)) << 8) + zx.d(var_11), 
            (((((zx.d(var_10) << 8) + zx.d(var_f)) << 8) + zx.d(var_e)) << 8) + zx.d(var_d), var_c)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_7
}
