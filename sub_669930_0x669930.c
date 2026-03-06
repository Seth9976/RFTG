// 函数名称: sub_669930
// 虚拟地址: 0x669930
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_669930(char* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char eax_2 = (*(arg1 + 0x6c)).b
    
    if ((eax_2 & 1) == 0)
        sub_664320(arg1, "Missing IHDR before oFFs")
        noreturn
    
    if ((eax_2 & 4) != 0)
        sub_664100(arg1, "Invalid oFFs after IDAT")
        int32_t eax_4 = sub_667b40(arg1, arg3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_4
    
    if (arg2 != 0 && (*(arg2 + 8) & 0x100) != 0)
        sub_664100(arg1, "Duplicate oFFs chunk")
        int32_t eax_5 = sub_667b40(arg1, arg3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_5
    
    if (arg3 != 9)
        sub_664100(arg1, "Incorrect oFFs chunk length")
        int32_t eax_6 = sub_667b40(arg1, arg3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_6
    
    char var_14
    sub_664410(arg1, &var_14, 9)
    sub_662280(arg1, &var_14, 9)
    int32_t eax_7 = sub_667b40(arg1, 0)
    
    if (eax_7 == 0)
        eax_7.b = var_14
        uint32_t ecx_9 = zx.d(eax_7.b) << 8
        uint32_t ecx_14
        char var_13
        char var_12
        char var_11
        
        if (eax_7.b s>= 0)
            ecx_14 = ((((ecx_9 + zx.d(var_13)) << 8) + zx.d(var_12)) << 8) + zx.d(var_11)
        else
            ecx_14 = ((((ecx_9 + zx.d(var_13)) << 8) + zx.d(var_12)) << 8) + zx.d(var_11)
        char var_10
        uint32_t eax_8
        eax_8.b = var_10
        char var_f
        char var_e
        char var_d
        char var_c
        eax_7 = sub_664770(arg1, arg2, ecx_14, 
            (((((zx.d(eax_8.b) << 8) + zx.d(var_f)) << 8) + zx.d(var_e)) << 8) + zx.d(var_d), var_c)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_7
}
