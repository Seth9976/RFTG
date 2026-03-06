// 函数名称: sub_49dff0
// 虚拟地址: 0x49dff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49dff0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4 @ esi, char* arg5 @ edi, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* ecx_2 = arg5 * 0xb4 + arg4
    int32_t var_424 = 1
    sub_49cc30(arg4, arg3, ecx_2, 0xffffffff)
    
    if (arg4[6].b == 0)
        sub_49bb40(arg5)
        void* eax_4 = ecx_2
        void var_410
        
        if (*(*(eax_4 + 0x28) + 0x20) != 0)
            int32_t var_424_2 = *arg4[arg3 * 5 + 0x11b]
            int32_t var_428_1 = *(eax_4 + 0x20)
            sub_5a733b(&var_410, "%s discards %s.\n")
            (*(*(ecx_2 + 0x28) + 0x20))(arg4, arg5, &var_410, "discard")
            eax_4 = ecx_2
        
        int32_t var_424_3 = *arg4[arg6 * 5 + 0x11b]
        int32_t var_428_2 = *(eax_4 + 0x20)
        void* var_434_1 = &var_410
        sub_4591b0(sub_5a733b(&var_410, "%s discards to produce on %s.\n"), &var_410, arg4, arg5)
    
    int32_t result = sub_4abcd0(arg8, arg4, arg5, arg6, arg7, arg8)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
