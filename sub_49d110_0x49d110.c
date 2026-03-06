// 函数名称: sub_49d110
// 虚拟地址: 0x49d110
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49d110(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4 @ edi, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result = arg5
    int32_t edx_1 = result * 0xb4
    int32_t entry_ebx
    *(edx_1 + arg4 + 0xa3) += entry_ebx.b
    
    if (*(arg4 + 0x18) == 0)
        int32_t var_41c_1 = entry_ebx
        result = sub_49b990(result, edx_1)
        
        if (*(arg4 + 0x18) == 0 && arg3 != 0)
            int32_t var_41c_2 = arg3
            int32_t var_420_1 = entry_ebx
            int32_t var_424_1 = *(edx_1 + arg4 + 0x20)
            void var_410
            sub_5a733b(&var_410, "%s receives %d prestige from %s.\n")
            char const* const var_41c_3 = "verbose"
            void* var_420_2 = &var_410
            result = sub_4c5680("%s (%s)")
    
    *(edx_1 + arg4 + 0xa4) = 1
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
