// 函数名称: sub_667a40
// 虚拟地址: 0x667a40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_667a40(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    *(arg1 + 0x2ac) = 0x21
    char var_10
    sub_664410(arg1, &var_10, 8)
    char var_f
    char var_e
    char var_d
    uint32_t result = (((((zx.d(var_10) << 8) + zx.d(var_f)) << 8) + zx.d(var_e)) << 8) + zx.d(var_d)
    
    if (result u> 0x7fffffff)
        sub_664320(arg1, "PNG unsigned integer out of range")
        noreturn
    
    char var_c
    char var_b
    char var_a
    char var_9
    *(arg1 + 0x100) = ((zx.d(var_c) << 8 | zx.d(var_b)) << 8 | zx.d(var_a)) << 8 | zx.d(var_9)
    sub_662260(arg1)
    sub_662280(arg1, &var_c, 4)
    uint32_t ecx_8 = *(arg1 + 0x100)
    
    for (int32_t i = 1; i s<= 4; )
        uint32_t eax_5 = zx.d(ecx_8.b)
        
        if (eax_5 - 0x41 u> 0x39)
            sub_664380(arg1, "invalid chunk type")
            noreturn
        
        if (eax_5 s> 0x5a && eax_5 s< 0x61)
            sub_664380(arg1, "invalid chunk type")
            noreturn
        
        i += 1
        ecx_8 u>>= 8
    
    *(arg1 + 0x2ac) = 0x41
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
