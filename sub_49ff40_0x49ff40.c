// 函数名称: sub_49ff40
// 虚拟地址: 0x49ff40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49ff40(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4 @ edi, int32_t arg5, int32_t arg6, int32_t arg7, int32_t* arg8)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ecx = arg6 * 5
    void* edx = *(arg4 + (ecx << 2) + 0x46c)
    void var_32c
    void* var_350 = &var_32c
    int32_t var_330 = sx.d(*(edx + 7))
    int32_t var_354 = 2
    int32_t eax_6 = sub_49dea0(arg5, edx, ecx, arg4)
    int32_t edx_1 = 0
    
    if (eax_6 s> 0)
        do
            int32_t var_328[0xc8]
            
            if ((*(var_328[edx_1 * 2] + 8) & 2) != 0)
                var_330 -= sx.d(*(var_328[edx_1 * 2] + 0x10))
            
            edx_1 += 1
        while (edx_1 s< eax_6)
    
    int32_t eax_7 = sx.d(*(arg4 + 0x1ec0))
    
    if (eax_7 s>= 0)
        bool cond:0_1
        
        if (eax_7.b s< 0)
            if (*(arg5 * 0xb4 + arg4 + 0x2c) != eax_7)
                cond:0_1 = *(arg5 * 0xb4 + arg4 + 0x30) != eax_7
                goto label_4a0013
            
            var_330 -= 1
        else if ((*(arg5 * 0xb4 + arg4 + 0x2c) & 0x7f) == eax_7)
            var_330 -= 1
        else
            cond:0_1 = (*(arg5 * 0xb4 + arg4 + 0x30) & 0x7f) != eax_7
        label_4a0013:
            
            if (not(cond:0_1))
                var_330 -= 1
    
    int32_t eax_8 = eax_7 | 0x80
    
    if (eax_8 s>= 0)
        bool cond:1_1
        
        if (eax_8.b s< 0)
            if (*(arg5 * 0xb4 + arg4 + 0x2c) != eax_8)
                cond:1_1 = *(arg5 * 0xb4 + arg4 + 0x30) != eax_8
                goto label_4a0042
            
            var_330 -= 2
        else if ((*(arg5 * 0xb4 + arg4 + 0x2c) & 0x7f) == eax_8)
            var_330 -= 2
        else
            cond:1_1 = (*(arg5 * 0xb4 + arg4 + 0x30) & 0x7f) != eax_8
        label_4a0042:
            
            if (not(cond:1_1))
                var_330 -= 2
    
    if (var_330 s> 0)
        sub_49fab0(eax_8, arg7, arg4, arg3, arg5, arg6, arg2, arg8)
    else
        *arg3 = 0
        *arg8 = 0
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 1
}
