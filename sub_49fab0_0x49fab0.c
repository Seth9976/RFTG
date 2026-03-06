// 函数名称: sub_49fab0
// 虚拟地址: 0x49fab0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49fab0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4 @ esi, int32_t arg5, int32_t arg6, int32_t arg7, int32_t* arg8)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* edx_3 = arg5 * 0xb4 + arg3
    void var_32c
    void* var_870 = &var_32c
    int32_t var_874 = 2
    *arg4 = 0
    *arg8 = 0
    int32_t eax_3
    int32_t edx_4
    eax_3, edx_4 = sub_49dea0(arg5, edx_3, arg3, arg3)
    int32_t i = 0
    *arg4 = eax_3
    
    if (eax_3 s> 0)
        do
            void var_328
            
            if ((*(*(&var_328 + (i << 3)) + 8) & 0x10) != 0)
                edx_4 = arg7
                *(edx_4 + (*arg8 << 2)) = sx.d(*(&var_32c + (i << 3)))
                *arg8 += 1
            
            if ((*(*(&var_328 + (i << 3)) + 8) & 0x200) != 0)
                void var_84c
                int32_t eax_14
                eax_14, edx_4 = sub_49db70(&var_84c, edx_4, arg5, arg3, &var_84c, 3)
                
                if (eax_14 != 0)
                    edx_4 = sx.d(*(&var_32c + (i << 3)))
                    *(arg7 + (*arg8 << 2)) = edx_4
                    *arg8 += 1
            
            i += 1
        while (i s< *arg4)
    
    int32_t i_1 = sx.d(*(edx_3 + 0x44))
    int32_t edx_5 = 0
    
    while (i_1 != 0xffffffff)
        *(arg2 + (edx_5 << 2)) = i_1
        i_1 = sx.d(*(arg3 + ((i_1 * 5 + 0x11d) << 2)))
        edx_5 += 1
    
    *arg4 = edx_5
    int32_t i_2 = 0
    
    if (sx.d(*(edx_3 + 0xae)) - sx.d(*(edx_3 + 0xb0)) s> 0)
        do
            *(arg2 + (*arg4 << 2)) = 0xffffffff
            *arg4 += 1
            i_2 += 1
        while (i_2 s< sx.d(*(edx_3 + 0xae)) - sx.d(*(edx_3 + 0xb0)))
    
    int16_t eax_17 = *(edx_3 + 0xb0)
    int16_t ecx_5 = *(edx_3 + 0xae)
    
    if (eax_17 s> ecx_5)
        *arg4 += sx.d(ecx_5) - sx.d(eax_17)
    
    int32_t i_3 = 0
    
    if (*arg4 s> 0)
        do
            if (*(arg2 + (i_3 << 2)) == arg6)
                *arg4 -= 1
                *(arg2 + (i_3 << 2)) = *(arg2 + (*arg4 << 2))
                i_3 -= 1
            
            i_3 += 1
        while (i_3 s< *arg4)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return i_3
}
