// 函数名称: sub_5cd7e0
// 虚拟地址: 0x5cd7e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_5cd7e0(void* arg1, int32_t arg2, char* arg3, int16_t arg4 @ x87control, void* arg5, double arg6)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg6)
    long double x87_r7 = fconvert.t(arg6)
    long double x87_r5 = float.t(0)
    void* edi = arg1
    x87_r5 - x87_r7
    char* ebx = arg3
    char* edx = ebx
    char* var_c = edx
    arg1.w = (x87_r5 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r7) ? 1 : 0) << 0xa
        | (x87_r5 == x87_r7 ? 1 : 0) << 0xe | 0x2800
    long double x87_r7_1 = x87_r5
    bool p = unimplemented  {test ah, 0x44}
    void* eax_4
    void* ebx_1
    
    if (not(p))
        if (edi u> 1)
            *ebx = 0x30
            edi -= 1
        
        eax_4 = arg5
        ebx_1 = &ebx[1]
        
        if (*(eax_4 + 8) != 0)
            if (edi u> 1)
                *ebx_1 = 0x2e
                edi -= 1
            
            ebx_1 += 1
    else
        x87_r7 - x87_r7_1
        arg1.w = (x87_r7 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r7 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
        
        if ((arg1:1.b & 0x41) == 0)
            if (edi u> 1)
                *ebx = 0x2d
                edi -= 1
            
            x87_r7_1 = fneg(x87_r7_1)
            arg6 = fconvert.d(x87_r7_1)
            ebx = &ebx[1]
        else if (*(arg5 + 4) != 0)
            if (edi u> 1)
                *ebx = 0x2b
                edi -= 1
            
            ebx = &ebx[1]
        
        int16_t x87status_1
        int16_t temp0_1
        temp0_1, x87status_1 = __fnstcw_memmem16(arg4)
        int16_t x87control
        int16_t x87status_2
        x87control, x87status_2 = __fldcw_memmem16(temp0_1 | 0xc00)
        int32_t ecx = (int.q(x87_r7_1)).6.d
        int16_t x87control_1
        int16_t x87status_3
        x87control_1, x87status_3 = __fldcw_memmem16(temp0_1)
        void* eax_3 = sub_5cd700(nullptr, ebx, edi)
        ebx_1 = ebx + eax_3
        
        if (eax_3 u< edi)
            edi -= eax_3
        else if (edi u>= 1)
            edi = 1
        
        long double x87_r7_2 = float.t(ecx)
        
        if (ecx s< 0)
            x87_r7_2 = x87_r7_2 + fconvert.t(4294967296.0)
        
        long double x87_r7_3 = fconvert.t(arg6) - x87_r7_2
        eax_4 = arg5
        arg6 = fconvert.d(x87_r7_3)
        
        if (*(eax_4 + 0x1c) s< 0)
            *(eax_4 + 0x1c) = 6
        
        if (*(eax_4 + 8) != 0 || *(eax_4 + 0x1c) s> 0)
            int32_t var_10_2 = 0xa
            
            if (edi u> 1)
                *ebx_1 = 0x2e
                edi -= 1
            
            ebx_1 += 1
            
            if (*(eax_4 + 0x1c) s> 0)
                do
                    *(eax_4 + 0x1c) -= 1
                    long double x87_r6_1 = float.t(var_10_2)
                    int16_t x87status_4
                    int16_t temp0_2
                    temp0_2, x87status_4 = __fnstcw_memmem16(x87control_1)
                    int48_t var_18_1
                    var_18_1:4.d = zx.d(temp0_2) | 0xc00
                    int16_t x87control_2
                    int16_t x87status_5
                    x87control_2, x87status_5 = __fldcw_memmem16(var_18_1:4.w)
                    int32_t ecx_2 = (int.q(x87_r7_3 * x87_r6_1)).6.d
                    int16_t x87status_6
                    x87control_1, x87status_6 = __fldcw_memmem16(temp0_2)
                    void* eax_7 = sub_5cd700(nullptr, ebx_1, edi)
                    ebx_1 += eax_7
                    
                    if (eax_7 u< edi)
                        edi -= eax_7
                    else if (edi u>= 1)
                        edi = 1
                    
                    long double x87_r7_5 = float.t(ecx_2)
                    
                    if (ecx_2 s< 0)
                        x87_r7_5 = x87_r7_5 + fconvert.t(4294967296.0)
                    
                    var_10_2 *= 0xa
                    eax_4 = arg5
                    x87_r7_3 = fconvert.t(arg6) - x87_r7_5 / fconvert.t(fconvert.d(x87_r6_1))
                    arg6 = fconvert.d(x87_r7_3)
                while (*(arg5 + 0x1c) s> 0)
            
            *(eax_4 + 0x1c) -= 1
        
        edx = var_c
    
    void* i_1 = *(eax_4 + 0x14) - ebx_1 + edx
    
    if (i_1 s> 0)
        int32_t eax_11 = *(eax_4 + 0xc)
        char eax_12 = (neg.d(eax_11)).b
        void* i = ebx_1 - edx
        void* edi_1 = edi + ebx_1 - 1
        
        if (ebx_1 != edx)
            char* edi_3 = i_1 + i + edx
            
            do
                edi_3 -= 1
                i -= 1
                
                if (edi_3 u< edi_1)
                    char* edx_2
                    edx_2.b = *(i + var_c)
                    *edi_3 = edx_2.b
            while (i != 0)
            
            edx = var_c
        
        ebx_1 += i_1
        
        if (i_1 != 0)
            void* ecx_5 = i_1 + edx
            
            do
                ecx_5 -= 1
                i_1 -= 1
                
                if (ecx_5 u< edi_1)
                    *ecx_5 = (sbb.b(eax_12, eax_12, eax_11 != 0) & 0x10) + 0x20
            while (i_1 != 0)
    
    return ebx_1 - edx
}
