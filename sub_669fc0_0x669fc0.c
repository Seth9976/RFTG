// 函数名称: sub_669fc0
// 虚拟地址: 0x669fc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_669fc0(char* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = *(arg1 + 0x6c)
    
    if ((eax_2.b & 1) == 0)
        sub_664320(arg1, "Out of place tIME chunk")
        noreturn
    
    if (arg2 != 0 && (*(arg2 + 8) & 0x200) != 0)
        sub_664100(arg1, "Duplicate tIME chunk")
        int32_t eax_4 = sub_667b40(arg1, arg3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_4
    
    if ((eax_2.b & 4) != 0)
        *(arg1 + 0x6c) = eax_2 | 8
    
    if (arg3 != 7)
        sub_664100(arg1, "Incorrect tIME chunk length")
        int32_t eax_6 = sub_667b40(arg1, arg3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_6
    
    char var_10
    sub_664410(arg1, &var_10, 7)
    sub_662280(arg1, &var_10, 7)
    int32_t eax_7 = sub_667b40(arg1, 0)
    
    if (eax_7 == 0)
        char var_a
        char var_12_1 = var_a
        char var_c
        char var_14_1 = var_c
        char var_d
        char var_15_1 = var_d
        char var_b
        char var_13_1 = var_b
        char var_e
        char var_16_1 = var_e
        char var_f
        uint16_t var_18 = zx.w(var_10) * 0x100 + zx.w(var_f)
        eax_7 = sub_665010(arg1, arg2, &var_18)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_7
}
