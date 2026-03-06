// 函数名称: sub_657740
// 虚拟地址: 0x657740
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_657740(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax = *(arg2 + 0x1c)
    void* eax = *(arg2 + 0x1c)
    int32_t ecx_1 = *(arg2 + 4)
    arg1[1] = 0x80
    arg1[2] = 0x40
    long double x87_r7 = fconvert.t(*(eax + 0xb74))
    *arg1 = ecx_1
    arg1[3] = fconvert.s(x87_r7)
    arg1[0x29] = 0x80
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(*(eax + 4))
    int32_t eax_4 = (eax_2 - edx) s>> 1
    arg1[0x2c] = eax_4
    arg1[9] = _calloc(eax_4, edx, ecx_1, 0x80, 4)
    int16_t x87control
    int80_t result
    result, x87control = sub_656680(&arg1[4], 0x80)
    int32_t i = 0
    arg2 = 0
    int32_t mxcsr
    
    do
        long double st0
        st0, x87control = sub_686ea0(mxcsr, x87control, 
            float.t(arg2) / fconvert.t(127.0) * fconvert.t(3.1415927410125732))
        *(arg1[9] + (i << 2)) = fconvert.s(fconvert.t(fconvert.s(st0)))
        int32_t edx_1 = arg1[9]
        long double x87_r6_6 = fconvert.t(*(edx_1 + (i << 2)))
        float* eax_7 = edx_1 + (i << 2)
        i += 1
        arg2 = i
        *eax_7 = fconvert.s(x87_r6_6 * x87_r6_6)
    while (i s< 0x80)
    
    arg1[0xb] = 4
    arg1[0xe] = 4
    arg1[0x12] = 6
    arg1[0x13] = 6
    arg1[0xa] = 2
    arg1[0xf] = 5
    arg1[0x16] = 9
    arg1[0x17] = 8
    arg1[0x1a] = 0xd
    arg1[0x1b] = 8
    arg1[0x1e] = 0x11
    arg1[0x1f] = 8
    arg1[0x22] = 0x16
    arg1[0x23] = 8
    void* edi = &arg1[0xd]
    int32_t i_2 = 7
    int32_t ecx_3
    int32_t i_1
    
    do
        int32_t* eax_8 = *(edi - 8)
        int32_t eax_11
        eax_11, ecx_3 = sub_5a881a(eax_8 * 4)
        int32_t ebx_1 = 0
        *(edi - 4) = eax_11
        arg2 = 0
        
        if (eax_8 s> 0)
            int32_t var_8_1 = eax_11
            
            do
                int80_t st0_1
                st0_1, x87control = sub_686ea0(mxcsr, x87control, 
                    (float.t(arg2) + fconvert.t(0.5)) / fconvert.t(fconvert.d(float.t(eax_8)))
                        * fconvert.t(3.1415927410125732))
                ecx_3 = var_8_1
                *(ecx_3 + (ebx_1 << 2)) = fconvert.s(st0_1)
                int32_t eax_12 = *(edi - 4)
                long double x87_r6_14 = fconvert.t(*(eax_12 + (ebx_1 << 2)))
                ebx_1 += 1
                var_8_1 = eax_12
                arg2 = ebx_1
                *edi = fconvert.s(x87_r6_14 + fconvert.t(*edi))
            while (ebx_1 s< eax_8)
        
        *edi
        edi += 0x10
        i_1 = i_2
        i_2 -= 1
        long double x87_r5_1 = float.t(1)
        *(edi - 0x10) = fconvert.s(x87_r5_1 / x87_r5_1)
    while (i_1 != 1)
    int32_t edx_3 = ecx_1 * 7
    int32_t eax_14
    int32_t ecx_4
    int32_t edx_4
    eax_14, ecx_4, edx_4 = _calloc(ecx_1, edx_3, ecx_3, edx_3, 0x90)
    arg1[0x26] = eax_14
    int32_t eax_15 = arg1[0x29]
    arg1[0x28] = _calloc(eax_15, edx_4, ecx_4, eax_15, 4)
    return result
}
