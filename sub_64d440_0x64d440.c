// 函数名称: sub_64d440
// 虚拟地址: 0x64d440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_64d440(int32_t arg1 @ edi, int32_t arg2, float arg3, int32_t arg4, int32_t arg5, float arg6, float arg7)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg3)
    long double x87_r7 = fconvert.t(arg3)
    int32_t eax =
        sub_685f40((x87_r7 + fconvert.t(arg7) - fconvert.t(30.0)) * fconvert.t(0.10000000149011612))
    int32_t ecx
    ecx.b = eax s<= 0
    int32_t eax_1 = eax & (ecx - 1)
    
    if (eax_1 s>= 7)
        eax_1 = 7
    
    float* esi = *(arg2 + (eax_1 << 2))
    arg7 = esi
    arg3 = sub_685f40(fconvert.t(esi[1]))
    int32_t esi_1 = sub_685f40((fconvert.t(*esi) - fconvert.t(16.0)) * float.t(arg6) + float.t(arg4)
        - float.t(arg6 s>> 1))
    int32_t i = sub_685f40(fconvert.t(*arg7))
    float result = arg3
    
    if (i s< result)
        result -= i
        
        if (result s>= 4)
            void* edx_2 = arg7 i+ (i << 2) + 0x10
            
            do
                if (esi_1 s> 0)
                    long double x87_r6_13 = fconvert.t(*(arg1 + (esi_1 << 2)))
                    long double x87_r5_1 = fconvert.t(fconvert.s(fconvert.t(*(edx_2 - 8)) + x87_r7))
                    x87_r5_1 - x87_r6_13
                    result.w = (x87_r5_1 < x87_r6_13 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_1, x87_r6_13) ? 1 : 0) << 0xa
                        | (x87_r5_1 == x87_r6_13 ? 1 : 0) << 0xe | 0x2800
                    x87_r7 = x87_r5_1
                    
                    if ((result:1.b & 0x41) != 0)
                        x87_r7 = x87_r6_13
                    else
                        *(arg1 + (esi_1 << 2)) = fconvert.s(x87_r6_13)
                
                int32_t esi_2 = esi_1 i+ arg6
                
                if (esi_2 s>= arg5)
                    return result
                
                if (esi_2 s> 0)
                    long double x87_r6_16 = fconvert.t(*(arg1 + (esi_2 << 2)))
                    long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(*(edx_2 - 4)) + x87_r7))
                    x87_r5_2 - x87_r6_16
                    result.w = (x87_r5_2 < x87_r6_16 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_2, x87_r6_16) ? 1 : 0) << 0xa
                        | (x87_r5_2 == x87_r6_16 ? 1 : 0) << 0xe | 0x2800
                    x87_r7 = x87_r5_2
                    
                    if ((result:1.b & 0x41) != 0)
                        x87_r7 = x87_r6_16
                    else
                        *(arg1 + (esi_2 << 2)) = fconvert.s(x87_r6_16)
                
                int32_t esi_3 = esi_2 i+ arg6
                
                if (esi_3 s>= arg5)
                    return result
                
                if (esi_3 s> 0)
                    long double x87_r6_19 = fconvert.t(*(arg1 + (esi_3 << 2)))
                    long double x87_r5_3 = fconvert.t(fconvert.s(fconvert.t(*edx_2) + x87_r7))
                    x87_r5_3 - x87_r6_19
                    result.w = (x87_r5_3 < x87_r6_19 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_3, x87_r6_19) ? 1 : 0) << 0xa
                        | (x87_r5_3 == x87_r6_19 ? 1 : 0) << 0xe | 0x2800
                    x87_r7 = x87_r5_3
                    
                    if ((result:1.b & 0x41) != 0)
                        x87_r7 = x87_r6_19
                    else
                        *(arg1 + (esi_3 << 2)) = fconvert.s(x87_r6_19)
                
                int32_t esi_4 = esi_3 i+ arg6
                
                if (esi_4 s>= arg5)
                    return result
                
                if (esi_4 s> 0)
                    long double x87_r6_22 = fconvert.t(*(arg1 + (esi_4 << 2)))
                    long double x87_r5_4 = fconvert.t(fconvert.s(fconvert.t(*(edx_2 + 4)) + x87_r7))
                    x87_r5_4 - x87_r6_22
                    result.w = (x87_r5_4 < x87_r6_22 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_4, x87_r6_22) ? 1 : 0) << 0xa
                        | (x87_r5_4 == x87_r6_22 ? 1 : 0) << 0xe | 0x2800
                    x87_r7 = x87_r5_4
                    
                    if ((result:1.b & 0x41) != 0)
                        x87_r7 = x87_r6_22
                    else
                        *(arg1 + (esi_4 << 2)) = fconvert.s(x87_r6_22)
                
                esi_1 = esi_4 i+ arg6
                
                if (esi_1 s>= arg5)
                    return result
                
                i += 4
                result = arg3 - 3
                edx_2 += 0x10
            while (i s< result)
        
        for (; i s< arg3; i += 1)
            if (esi_1 s> 0)
                long double x87_r6_25 = fconvert.t(*(arg1 + (esi_1 << 2)))
                long double x87_r5_5 =
                    fconvert.t(fconvert.s(fconvert.t(*(arg7 i+ (i << 2) + 8)) + x87_r7))
                x87_r5_5 - x87_r6_25
                result.w = (x87_r5_5 < x87_r6_25 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_5, x87_r6_25) ? 1 : 0) << 0xa
                    | (x87_r5_5 == x87_r6_25 ? 1 : 0) << 0xe | 0x2800
                x87_r7 = x87_r5_5
                
                if ((result:1.b & 0x41) != 0)
                    x87_r7 = x87_r6_25
                else
                    *(arg1 + (esi_1 << 2)) = fconvert.s(x87_r6_25)
            
            esi_1 += arg6
            
            if (esi_1 s>= arg5)
                break
    
    return result
}
