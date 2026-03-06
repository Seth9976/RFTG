// 函数名称: sub_4f62d0
// 虚拟地址: 0x4f62d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4f62d0(int32_t arg1, float arg2, int32_t arg3)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg2)
    long double x87_r7 = fconvert.t(arg2)
    long double x87_r6 = float.t(1)
    x87_r6 - x87_r7
    int32_t edi = arg1
    arg1.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    int32_t entry_result
    
    if (p && edi s>= 0)
        int32_t edi_1 = edi
        int32_t temp1_1
        
        do
            void* edx_1 = sub_4f4900(edi_1)
            
            if (*(edx_1 + 4) == 6)
                long double x87_r7_1 = float.t(1)
                long double x87_r5 = float.t(0)
                long double x87_r6_2 = x87_r7_1 - x87_r5
                long double x87_r6_5 = x87_r6_2
                long double x87_r4_5 = float.t(0)
                long double x87_r3_1 = fconvert.t(fconvert.s(
                    fconvert.t(fconvert.s(fconvert.t(arg2) - x87_r5))
                    / fconvert.t(fconvert.s(x87_r6_2))))
                x87_r3_1 - x87_r4_5
                void* eax_1
                eax_1.w = (x87_r3_1 < x87_r4_5 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r3_1, x87_r4_5) ? 1 : 0) << 0xa
                    | (x87_r3_1 == x87_r4_5 ? 1 : 0) << 0xe | 0x1800
                bool p_1 = unimplemented  {test ah, 0x41}
                
                if (p_1)
                    x87_r5 = x87_r3_1
                    long double x87_r3_2 = float.t(1)
                    x87_r3_2 - x87_r4_5
                    eax_1.w = (x87_r3_2 < x87_r4_5 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r3_2, x87_r4_5) ? 1 : 0) << 0xa
                        | (x87_r3_2 == x87_r4_5 ? 1 : 0) << 0xe | 0x1800
                    bool p_2 = unimplemented  {test ah, 0x41}
                    
                    if (p_2)
                        long double x87_r2_1 = fconvert.t(2.0)
                        long double x87_r1_1 = fconvert.t(3.0)
                        long double x87_r2_3 = fconvert.t(fconvert.s(x87_r3_2 * x87_r3_2
                            * (x87_r1_1 - x87_r3_2 * x87_r2_1)))
                        x87_r6_5 = x87_r6_5 * fconvert.t(fconvert.s(x87_r2_3 * x87_r2_3
                            * (x87_r1_1 - x87_r2_1 * x87_r2_3))) + x87_r5
                    else
                        x87_r5 = x87_r3_2
                        x87_r7_1 = x87_r4_5
                else
                    x87_r7_1 = x87_r3_1
                
                long double x87_r5_3 = x87_r5 - fconvert.t(*(edx_1 + 0x5c))
                float var_4c
                __builtin_memcpy(&var_4c, arg3, 0x40)
                long double x87_r4_15 = fconvert.t(fconvert.s(x87_r6_5))
                float var_8 = fconvert.s((x87_r5 - fconvert.t(*(edx_1 + 0x60))) * x87_r4_15
                    + fconvert.t(*(edx_1 + 0x60)))
                var_4c = fconvert.s(fconvert.t(var_4c)
                    + fconvert.t(fconvert.s(x87_r5_3 * x87_r4_15 + fconvert.t(*(edx_1 + 0x5c)))))
                float var_48
                float var_48_1 = fconvert.s(fconvert.t(var_8) + fconvert.t(var_48))
                long double x87_r5_13 = fconvert.t(fconvert.s(fconvert.t(*(edx_1 + 0x54))))
                float var_44
                float var_44_1 = fconvert.s(
                    fconvert.t(fconvert.s(x87_r5_13 + x87_r4_15 * (x87_r7_1 - x87_r5_13)))
                    * fconvert.t(var_44))
                __builtin_memcpy(entry_result, &var_4c, 0x40)
                return entry_result
            
            temp1_1 = edi_1
            edi_1 -= 1
        while (temp1_1 - 1 s>= 0)
    
    __builtin_memcpy(entry_result, arg3, 0x40)
    return entry_result
}
