// 函数名称: sub_599bc0
// 虚拟地址: 0x599bc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_599bc0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result_1 = sub_5a881a(0x4000)
    int32_t result
    
    if (result_1 == 0)
        result = 0
    else
        int32_t var_fe0_1 = result_1 + 0x4000
        int32_t var_ff8 = arg3
        int32_t var_ff4_1 = arg2 + arg3
        int32_t var_fdc_1 = 1
        
        if (sub_599a70(&var_ff8, arg4) == 0)
            __free_base(result_1)
            result = 0
        else
            result = result_1
            int32_t* entry_ebx
            
            if (entry_ebx != 0)
                *entry_ebx = result_1 - result
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return result
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
