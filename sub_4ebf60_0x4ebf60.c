// 函数名称: sub_4ebf60
// 虚拟地址: 0x4ebf60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_4ebf60(void* arg1, int32_t* arg2, long double arg3 @ st0, long double arg4 @ st1, long double arg5 @ st2, long double arg6 @ st3, long double arg7 @ st5, long double arg8 @ st7)
{
    // 第一条实际指令: void* edi = *(arg1 + 0x30)
    void* edi = *(arg1 + 0x30)
    void* var_30 = edi
    int32_t* result
    
    if (*(arg1 + 0x40) != 0)
        result = sub_466320(**(edi + 0x2e4))
    
    if (*(arg1 + 0x40) == 0 || *(*(edi + 0x2dc) * 0x134 + *result + 0xdd) == 0)
        sub_4eb7e0(arg2, *(arg1 + 0x30))
        float var_18_1 = fconvert.s(arg3)
        float* edx_3 = sub_4eb880(arg2, edi)
        float var_14_1 = fconvert.s(arg4)
        int32_t ecx_4 = *(*(edi + 0x2e4) + 0x54)
        int32_t var_58_2 = ecx_4
        int32_t var_5c_1 = ecx_4
        float var_5c_2 = fconvert.s(fconvert.t(var_18_1))
        float var_44
        float* eax_5 = sub_4ebbc0(arg1, edx_3, &var_44, ecx_4)
        float ecx_5 = *eax_5
        float edx_4 = eax_5[1]
        float eax_6 = eax_5[2]
        int32_t ecx_6 = *(edi + 0x2e4)
        float* edx_6 = *(ecx_6 + 0x54) - 1
        float* var_58_3 = edx_6
        int32_t var_5c_3 = ecx_6
        float var_5c_4 = fconvert.s(fconvert.t(var_14_1))
        float* eax_8 = sub_4ebbc0(arg1, edx_6, &var_44, ecx_6)
        float ecx_7 = *eax_8
        float edx_7 = eax_8[1]
        float eax_9 = eax_8[2]
        int32_t eax_11 = sub_466320(**(edi + 0x2e4))
        int32_t* esi_3 = *(edi + 0x2dc) * 0x134 + *eax_11
        int32_t* var_18_2
        
        if (*(esi_3 + 0x59) != 0)
            edi = var_30
            var_18_2 = sub_531120(esi_3, 0x4d, data_315f7ec)
        else
            if (data_8c35fc s<= 0x4d)
                sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                    "AttribMap.cpp", 0x8b, "AttribTagGetField")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            var_18_2 = *(*(data_8c35f8 + 0x134) + 0x24)
        
        int32_t eax_17 = sub_466320(**(edi + 0x2e4))
        int32_t* esi_6 = *(edi + 0x2dc) * 0x134 + *eax_17
        int32_t* eax_19
        
        if (*(esi_6 + 0x5a) != 0)
            eax_19 = sub_531120(esi_6, 0x4e, data_315f7ec)
            edi = var_30
        else
            if (data_8c35fc s<= 0x4e)
                sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                    "AttribMap.cpp", 0x8b, "AttribTagGetField")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            eax_19 = *(*(data_8c35f8 + 0x138) + 0x24)
        
        int32_t eax_21
        void* ecx_12
        int32_t edx_12
        eax_21, ecx_12, edx_12 = sub_466320(**(edi + 0x2e4))
        int32_t* esi_9 = *(edi + 0x2dc) * 0x134 + *eax_21
        int32_t* esi_10
        
        if (*(esi_9 + 0x5b) != 0)
            int32_t* eax_24
            eax_24, edx_12 = sub_531120(esi_9, 0x4f, data_315f7ec)
            edi = var_30
            esi_10 = eax_24
        else
            if (data_8c35fc s<= 0x4f)
                sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                    "AttribMap.cpp", 0x8b, "AttribTagGetField")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            ecx_12 = *(data_8c35f8 + 0x13c)
            esi_10 = *(ecx_12 + 0x24)
        
        void* var_58_10 = ecx_12
        float var_58_11 = fconvert.s(fconvert.t(ecx_5))
        long double x87_r1_3 = fconvert.t(*(edi + 0x2e8))
        void* var_60_3 = ecx_12
        int32_t edx_14 = sub_553af0(var_18_2, arg5, arg6, fconvert.s(x87_r1_3), edx_12, *(edi + 0x2f4))
        long double x87_r4
        var_44 = fconvert.s(x87_r4)
        float ecx_13 = *(edi + 0x2f4)
        float var_58_12 = fconvert.s(fconvert.t(edx_4))
        long double x87_r4_2 = fconvert.t(*(edi + 0x2e8))
        float var_60_5 = ecx_13
        long double x87_r6
        int32_t ecx_14 = sub_553af0(eax_19, arg7, x87_r6, fconvert.s(x87_r4_2), edx_14, ecx_13)
        float edx_15 = *(edi + 0x2f4)
        float var_40_1 = fconvert.s(arg8)
        float var_58_13 = fconvert.s(fconvert.t(eax_6))
        long double x87_r7_1 = fconvert.t(*(edi + 0x2e8))
        int32_t var_60_7 = ecx_14
        int32_t eax_29
        int32_t edx_16
        eax_29, edx_16 = sub_553af0(esi_10, arg3, x87_r1_3, fconvert.s(x87_r7_1), edx_15, edx_15)
        float var_3c_1 = fconvert.s(arg5)
        long double x87_r2 = fconvert.t(*(edi + 0x2f0))
        float ecx_15 = *(edi + 0x2f4)
        long double x87_r1_4 = fconvert.t(*(edi + 0x2e8))
        x87_r1_4 - x87_r2
        eax_29.w = (x87_r1_4 < x87_r2 ? 1 : 0) << 8 | (is_unordered.t(x87_r1_4, x87_r2) ? 1 : 0) << 0xa
            | (x87_r1_4 == x87_r2 ? 1 : 0) << 0xe | 0x1800
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
            ecx_15 -= 1
        
        float var_58_14 = ecx_15
        float var_58_15 = fconvert.s(fconvert.t(ecx_7))
        long double x87_r2_2 = fconvert.t(*(edi + 0x2f0))
        float var_60_9 = ecx_15
        int32_t eax_31
        int32_t edx_17
        eax_31, edx_17 = sub_553af0(var_18_2, arg6, x87_r4_2, fconvert.s(x87_r2_2), edx_16, ecx_15)
        float var_10_2 = fconvert.s(arg7)
        long double x87_r5 = fconvert.t(*(edi + 0x2f0))
        float ecx_16 = *(edi + 0x2f4)
        long double x87_r4_3 = fconvert.t(*(edi + 0x2e8))
        x87_r4_3 - x87_r5
        eax_31.w = (x87_r4_3 < x87_r5 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_3, x87_r5) ? 1 : 0) << 0xa
            | (x87_r4_3 == x87_r5 ? 1 : 0) << 0xe | 0x3000
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (not(p_2))
            ecx_16 -= 1
        
        float var_58_16 = ecx_16
        float var_58_17 = fconvert.s(fconvert.t(edx_7))
        float var_60_11 = ecx_16
        int32_t eax_33
        int32_t edx_18
        eax_33, edx_18 =
            sub_553af0(eax_19, x87_r6, x87_r7_1, fconvert.s(fconvert.t(*(edi + 0x2f0))), edx_17, ecx_16)
        float ecx_17 = *(edi + 0x2f4)
        float var_c_2 = fconvert.s(arg3)
        long double x87_r0 = fconvert.t(*(edi + 0x2f0))
        long double x87_r7_2 = fconvert.t(*(edi + 0x2e8))
        x87_r7_2 - x87_r0
        eax_33.w = (x87_r7_2 < x87_r0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_2, x87_r0) ? 1 : 0) << 0xa
            | (x87_r7_2 == x87_r0 ? 1 : 0) << 0xe | 0x800
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (not(p_3))
            ecx_17 -= 1
        
        float var_58_18 = ecx_17
        float var_58_19 = fconvert.s(fconvert.t(eax_9))
        float var_60_13 = ecx_17
        result = sub_553af0(esi_10, x87_r1_4, x87_r2_2, fconvert.s(fconvert.t(*(edi + 0x2f0))), edx_18, 
            ecx_17)
        float var_28_2 = fconvert.s(fconvert.t(var_40_1) - fconvert.t(var_c_2))
        float var_24_2 = fconvert.s(fconvert.t(var_3c_1) - fconvert.t(fconvert.s(arg6)))
        *(edi + 0x29c) = fconvert.s(fconvert.t(*(edi + 0x29c))
            + fconvert.t(fconvert.s(fconvert.t(var_44) - fconvert.t(var_10_2))))
        *(edi + 0x2a0) = fconvert.s(fconvert.t(*(edi + 0x2a0)) + fconvert.t(var_28_2))
        *(edi + 0x2a4) = fconvert.s(fconvert.t(*(edi + 0x2a4)) + fconvert.t(var_24_2))
    
    return result
}
