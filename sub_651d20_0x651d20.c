// 函数名称: sub_651d20
// 虚拟地址: 0x651d20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_651d20(float* arg1, int32_t arg2, int32_t arg3, int32_t arg4, float* arg5, void* arg6)
{
    // 第一条实际指令: int32_t i_10 = arg4
    int32_t i_10 = arg4
    int32_t esi_1 = arg3 * i_10
    int32_t edx = 0
    int32_t var_28 = esi_1
    int32_t var_c = 0
    
    if (i_10 s>= 4)
        float* edi_2 = &arg5[arg3 * 2 - 1]
        int32_t i_7 = ((arg4 - 4) u>> 2) + 1
        var_c = (((arg4 - 4) u>> 2) + 1) * 4
        int32_t i
        
        do
            arg5[edx * 2] = fconvert.s(fconvert.t(arg1[edx]) + fconvert.t(arg1[esi_1]))
            int32_t edx_1 = edx + arg3
            int32_t esi_2 = esi_1 + arg3
            *edi_2 = fconvert.s(fconvert.t(arg1[edx]) - fconvert.t(arg1[esi_1]))
            void* edi_3 = &edi_2[arg3 * 2]
            arg5[edx_1 * 2] = fconvert.s(fconvert.t(arg1[edx_1]) + fconvert.t(arg1[esi_2]))
            int32_t edx_2 = edx_1 + arg3
            int32_t esi_3 = esi_2 + arg3
            *edi_3 = fconvert.s(fconvert.t(arg1[edx_1]) - fconvert.t(arg1[esi_2]))
            void* edi_4 = edi_3 + (arg3 << 3)
            arg5[edx_2 * 2] = fconvert.s(fconvert.t(arg1[edx_2]) + fconvert.t(arg1[esi_3]))
            int32_t edx_3 = edx_2 + arg3
            int32_t esi_4 = esi_3 + arg3
            *edi_4 = fconvert.s(fconvert.t(arg1[edx_2]) - fconvert.t(arg1[esi_3]))
            void* edi_5 = edi_4 + (arg3 << 3)
            arg5[edx_3 * 2] = fconvert.s(fconvert.t(arg1[edx_3]) + fconvert.t(arg1[esi_4]))
            edx = edx_3 + arg3
            esi_1 = esi_4 + arg3
            *edi_5 = fconvert.s(fconvert.t(arg1[edx_3]) - fconvert.t(arg1[esi_4]))
            edi_2 = edi_5 + (arg3 << 3)
            i = i_7
            i_7 -= 1
        while (i != 1)
        i_10 = arg4
    
    float* edi_7
    
    if (var_c s>= i_10)
        edi_7 = arg5
    else
        float* var_8_1 = &arg1[edx]
        edi_7 = arg5
        void* var_1c_1 = &edi_7[edx * 2]
        float* var_10_1 = &edi_7[arg3 * 2 + (edx << 1) - 1]
        float* esi_5 = &arg1[esi_1]
        int32_t i_8 = arg4 - var_c
        int32_t i_1
        
        do
            float* edx_8 = var_1c_1
            *edx_8 = fconvert.s(fconvert.t(*var_8_1) + fconvert.t(*esi_5))
            *var_10_1 = fconvert.s(fconvert.t(*var_8_1) - fconvert.t(*esi_5))
            var_1c_1 = &edx_8[arg3 * 2]
            var_8_1 = &var_8_1[arg3]
            esi_5 = &esi_5[arg3]
            var_10_1 = &var_10_1[arg3 * 2]
            i_1 = i_8
            i_8 -= 1
        while (i_1 != 1)
        i_10 = arg4
    
    if (arg3 s< 2)
        return 
    
    int32_t edx_20
    
    if (arg3 != 2)
        if (i_10 s> 0)
            void* var_18_1 = &arg1[var_28]
            float* var_1c_2 = edi_7
            float* var_14_1 = arg1
            float* var_8_2 = &edi_7[arg3 * 2]
            int32_t i_6 = i_10
            int32_t i_2
            
            do
                if (arg3 s> 2)
                    float* esi_6 = var_14_1
                    float* var_c_1 = var_8_2
                    float* edi_9 = arg6 + 4
                    float* var_10_2 = var_1c_2
                    void* edx_17 = var_18_1
                    int32_t j_1 = ((arg3 - 3) u>> 1) + 1
                    int32_t j
                    
                    do
                        long double x87_r7_21 = fconvert.t(*(edx_17 + 4))
                        edx_17 += 8
                        var_c_1 -= 8
                        esi_6 = &esi_6[2]
                        float* ebx_24 = &var_10_2[2]
                        var_10_2 = ebx_24
                        long double x87_r7_23 =
                            x87_r7_21 * fconvert.t(edi_9[-1]) + fconvert.t(*edx_17) * fconvert.t(*edi_9)
                        edi_9 = &edi_9[2]
                        j = j_1
                        j_1 -= 1
                        long double x87_r6_5 = fconvert.t(fconvert.s(
                            fconvert.t(*edx_17) * fconvert.t(edi_9[-3])
                            - fconvert.t(*(edx_17 - 4)) * fconvert.t(edi_9[-2])))
                        *ebx_24 = fconvert.s(fconvert.t(*esi_6) + x87_r6_5)
                        *var_c_1 = fconvert.s(x87_r6_5 - fconvert.t(*esi_6))
                        long double x87_r6_7 = fconvert.t(fconvert.s(x87_r7_23))
                        var_10_2[-1] = fconvert.s(fconvert.t(esi_6[-1]) + x87_r6_7)
                        var_c_1[-1] = fconvert.s(fconvert.t(esi_6[-1]) - x87_r6_7)
                    while (j != 1)
                    edi_7 = arg5
                
                var_8_2 = &var_8_2[arg3 * 2]
                var_1c_2 = &var_1c_2[arg3 * 2]
                var_14_1 = &var_14_1[arg3]
                var_18_1 += arg3 << 2
                i_2 = i_6
                i_6 -= 1
            while (i_2 != 1)
        
        edx_20 = arg3 & 0x80000001
        
        if (edx_20 s< 0)
            edx_20 = ((edx_20 - 1) | 0xfffffffe) + 1
    
    if (arg3 != 2 && edx_20 == 1)
        return 
    
    int32_t var_8_3 = arg3 - 1
    int32_t esi_9 = arg3 - 1 + var_28
    int32_t edx_23 = arg3
    int32_t var_c_2 = 0
    
    if (arg4 s>= 4)
        int32_t i_5 = ((arg4 - 4) u>> 2) + 1
        var_c_2 = (((arg4 - 4) u>> 2) + 1) * 4
        int32_t i_3
        
        do
            int32_t esi_10 = esi_9 + arg3
            edi_7[edx_23] = fconvert.s(fneg(fconvert.t(arg1[esi_9])))
            int32_t ebx_35 = var_8_3 + arg3
            edi_7[edx_23 - 1] = fconvert.s(fconvert.t(arg1[var_8_3]))
            int32_t edx_24 = edx_23 + (arg3 << 1)
            int32_t esi_11 = esi_10 + arg3
            int32_t var_8_4 = ebx_35
            edi_7[edx_24] = fconvert.s(fneg(fconvert.t(arg1[esi_10])))
            int32_t ebx_36 = ebx_35 + arg3
            edi_7[edx_24 - 1] = fconvert.s(fconvert.t(arg1[ebx_35]))
            int32_t edx_25 = edx_24 + (arg3 << 1)
            int32_t esi_12 = esi_11 + arg3
            int32_t var_8_5 = ebx_36
            edi_7[edx_25] = fconvert.s(fneg(fconvert.t(arg1[esi_11])))
            int32_t ebx_37 = ebx_36 + arg3
            edi_7[edx_25 - 1] = fconvert.s(fconvert.t(arg1[ebx_36]))
            int32_t edx_26 = edx_25 + (arg3 << 1)
            var_8_3 = ebx_37 + arg3
            edi_7[edx_26] = fconvert.s(fneg(fconvert.t(arg1[esi_12])))
            esi_9 = esi_12 + arg3
            i_3 = i_5
            i_5 -= 1
            edi_7[edx_26 - 1] = fconvert.s(fconvert.t(arg1[ebx_37]))
            edx_23 = edx_26 + (arg3 << 1)
        while (i_3 != 1)
    
    if (var_c_2 s>= arg4)
        return 
    
    void* edx_27 = &edi_7[edx_23]
    void* esi_13 = &arg1[esi_9]
    arg1 = &arg1[var_8_3]
    int32_t i_9 = arg4 - var_c_2
    int32_t i_4
    
    do
        long double x87_r7_47 = fconvert.t(*esi_13)
        esi_13 += arg3 * 4
        *edx_27 = fconvert.s(fneg(x87_r7_47))
        long double x87_r7_49 = fconvert.t(*arg1)
        arg1 = &arg1[arg3]
        *(edx_27 - 4) = fconvert.s(x87_r7_49)
        edx_27 += arg3 << 3
        i_4 = i_9
        i_9 -= 1
    while (i_4 != 1)
}
