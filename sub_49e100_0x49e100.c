// 函数名称: sub_49e100
// 虚拟地址: 0x49e100
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49e100(int32_t arg1, int32_t* arg2, char* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t i = sx.d(arg2[arg3 * 0x2d + 0x11].w)
    int32_t ecx = 0
    int32_t var_52c[0x149]
    
    if (i != 0xffffffff)
        ecx = 0
        
        do
            var_52c[ecx] = i
            i = sx.d(arg2[i * 5 + 0x11d].w)
            ecx += 1
        while (i != 0xffffffff)
    
    int32_t var_a50 = ecx
    
    if (ecx != 0)
        int32_t var_a4c = arg4
        int32_t var_a54 = 1
        int32_t edx_1
        int32_t entry_ebx
        i, edx_1 =
            sub_49d9e0(arg2, arg3, 0x15, &var_52c, &var_a50, &var_a4c, &var_a54, arg5, entry_ebx, 0, 0)
        
        if (*(arg2 + 0x1ec3) == 0 && var_a50 s> 0)
            i = sub_49dff0(arg5, edx_1, var_52c[0], arg2, arg3, arg4, arg5, entry_ebx)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return i
}
