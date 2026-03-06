// 函数名称: sub_49dbf0
// 虚拟地址: 0x49dbf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49dbf0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx = arg2
    void* esi = arg3
    void* edx_2 = arg4 * 0xb4 + esi
    int32_t edi = 0
    int32_t var_418 = ebx
    
    if (arg5 s> 0)
        do
            int32_t var_428_1 = 1
            sub_49cc30(esi, *(ebx + (edi << 2)), arg3, 0xffffffff)
            
            if (*(esi + 0x18) == 0 && *(*(edx_2 + 0x28) + 0x20) != 0)
                *(ebx + (edi << 2))
                sub_49bb40(arg4)
                int32_t var_428_3 = **(esi + *(var_418 + (edi << 2)) * 0x14 + 0x46c)
                int32_t var_42c_1 = *(edx_2 + 0x20)
                void var_40c
                sub_5a733b(&var_40c, "%s discards %s.\n")
                arg3 = (*(*(edx_2 + 0x28) + 0x20))(esi, arg4, &var_40c, "discard")
                ebx = var_418
            
            edi += 1
        while (edi s< arg5)
    
    if (esi == 0)
        sub_49b2a0()
        noreturn
    
    if (arg4 s< 0)
        sub_49b2a0()
        noreturn
    
    int32_t i = sx.d(*(edx_2 + 0x44))
    int32_t ecx_3 = 0
    
    if (i s< 0xffffffff)
        sub_49b2a0()
        noreturn
    
    while (i != 0xffffffff)
        i = sx.d(*(esi + ((i * 5 + 0x11d) << 2)))
        ecx_3 += 1
    
    int32_t result = sx.d(*(edx_2 + 0xae)) - sx.d(*(edx_2 + 0xb0)) + ecx_3
    
    if (result s< sx.d(*(edx_2 + 0xb5)))
        *(edx_2 + 0xb5) = result.b
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
