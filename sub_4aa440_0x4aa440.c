// 函数名称: sub_4aa440
// 虚拟地址: 0x4aa440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4aa440(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5)
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
    
    int32_t var_530 = ecx
    int32_t entry_ebx
    int32_t result =
        sub_49d9e0(arg2, arg3, 0xe, &var_52c, &var_530, 0, nullptr, arg4, entry_ebx, arg5, 0)
    
    if (*(arg2 + 0x1ec3) == 0)
        result = sub_4aa080(arg4, arg3, entry_ebx, arg2, arg4, &var_52c, var_530)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
