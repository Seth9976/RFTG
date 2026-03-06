// 函数名称: sub_46d9b0
// 虚拟地址: 0x46d9b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46d9b0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t i = sx.d(*(arg4 * 0xb4 + arg3 + 0x46))
    int32_t var_20
    __builtin_memset(&var_20, 0, 0x18)
    
    if (i != 0xffffffff)
        do
            if ((*(arg3 + i * 0x14 + 0x468) & 0xe000) != 0)
                uint32_t edx_3 = zx.d(*(arg3 + i * 0x14 + 0x468)) u>> 0xd
                (&var_20)[edx_3] += 1
            
            i = sx.d(*(arg3 + ((i * 5 + 0x11d) << 2)))
        while (i != 0xffffffff)
        
        int32_t var_10
        
        if (var_10 != 0)
            i.b = 0
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return i
    
    i.b = 1
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return i
}
