// 函数名称: sub_49f2e0
// 虚拟地址: 0x49f2e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49f2e0(int32_t arg1, void* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result = sx.d(*(*(arg2 + arg3 * 0x14 + 0x46c) + 7))
    int32_t ecx_2 = sx.d(*(arg2 + 0x1ec0))
    
    if (ecx_2 s>= 0)
        bool cond:0_1
        
        if (ecx_2.b s< 0)
            if (*(arg4 * 0xb4 + arg2 + 0x2c) != ecx_2)
                cond:0_1 = *(arg4 * 0xb4 + arg2 + 0x30) != ecx_2
                goto label_49f33e
            
            result -= 1
        else if ((*(arg4 * 0xb4 + arg2 + 0x2c) & 0x7f) == ecx_2)
            result -= 1
        else
            cond:0_1 = (*(arg4 * 0xb4 + arg2 + 0x30) & 0x7f) != ecx_2
        label_49f33e:
            
            if (not(cond:0_1))
                result -= 1
    
    int32_t ecx_3 = ecx_2 | 0x80
    
    if (ecx_3 s>= 0)
        bool cond:1_1
        
        if (ecx_3.b s< 0)
            if (*(arg4 * 0xb4 + arg2 + 0x2c) != ecx_3)
                cond:1_1 = *(arg4 * 0xb4 + arg2 + 0x30) != ecx_3
                goto label_49f369
            
            result -= 2
        else if ((*(arg4 * 0xb4 + arg2 + 0x2c) & 0x7f) == ecx_3)
            result -= 2
        else
            cond:1_1 = (*(arg4 * 0xb4 + arg2 + 0x30) & 0x7f) != ecx_3
        label_49f369:
            
            if (not(cond:1_1))
                result -= 2
    
    void var_330
    void* var_344 = &var_330
    int32_t var_348 = 2
    int32_t eax_3 = sub_49dea0(arg4, arg2, ecx_3, arg2)
    int32_t edx = 0
    
    if (eax_3 s> 0)
        do
            int32_t var_32c[0xc8]
            void* esi_5 = var_32c[edx * 2]
            
            if ((*(esi_5 + 8) & 2) != 0)
                result -= sx.d(*(esi_5 + 0x10))
            
            edx += 1
        while (edx s< eax_3)
    
    if (result s>= 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return result
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
