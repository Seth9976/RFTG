// 函数名称: sub_4d9650
// 虚拟地址: 0x4d9650
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __convention("regparm")sub_4d9650(int32_t arg1, float* arg2, int32_t* arg3 @ esi, int32_t* arg4 @ edi, float arg5)
{
    // 第一条实际指令: int32_t* ecx = arg5
    int32_t* ecx = arg5
    *arg4 = *arg3
    arg4[1] = arg3[1]
    arg4[2] = arg3[2]
    arg4[3] = arg3[3]
    int32_t* entry_ebx
    *entry_ebx = *ecx
    entry_ebx[1] = ecx[1]
    entry_ebx[2] = ecx[2]
    entry_ebx[3] = ecx[3]
    float result = arg2[4]
    arg5 = result
    
    if ((result.b & 1) == 0)
    label_4d96e8:
        
        if ((arg5.b & 2) == 0)
        label_4d973b:
            
            if ((arg5.b & 4) == 0)
            label_4d979b:
                
                if ((arg5.b & 8) == 0)
                label_4d97fb:
                    long double x87_r7_49 = fconvert.t(*arg4)
                    long double x87_r6_29 = fconvert.t(arg4[2])
                    x87_r6_29 - x87_r7_49
                    result.w = (x87_r6_29 < x87_r7_49 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_29, x87_r7_49) ? 1 : 0) << 0xa
                        | (x87_r6_29 == x87_r7_49 ? 1 : 0) << 0xe
                    bool p_5 = unimplemented  {test ah, 0x5}
                    
                    if (p_5)
                        long double x87_r7_50 = fconvert.t(arg4[1])
                        long double x87_r6_30 = fconvert.t(arg4[3])
                        x87_r6_30 - x87_r7_50
                        result.w = (x87_r6_30 < x87_r7_50 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_30, x87_r7_50) ? 1 : 0) << 0xa
                            | (x87_r6_30 == x87_r7_50 ? 1 : 0) << 0xe
                        bool p_6 = unimplemented  {test ah, 0x5}
                        
                        if (p_6)
                            result.b = 1
                            return result
                else
                    long double x87_r7_37 = fconvert.t(ecx[1])
                    long double x87_r6_22 = fconvert.t(arg2[3])
                    x87_r6_22 - x87_r7_37
                    result.w = (x87_r6_22 < x87_r7_37 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_22, x87_r7_37) ? 1 : 0) << 0xa
                        | (x87_r6_22 == x87_r7_37 ? 1 : 0) << 0xe
                    bool p_3 = unimplemented  {test ah, 0x5}
                    
                    if (p_3)
                        long double x87_r7_38 = fconvert.t(ecx[3])
                        long double x87_r6_23 = fconvert.t(arg2[3])
                        x87_r6_23 - x87_r7_38
                        result.w = (x87_r6_23 < x87_r7_38 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_23, x87_r7_38) ? 1 : 0) << 0xa
                            | (x87_r6_23 == x87_r7_38 ? 1 : 0) << 0xe
                        bool p_4 = unimplemented  {test ah, 0x5}
                        
                        if (not(p_4))
                            long double x87_r6_24 = fconvert.t(fconvert.s(fconvert.t(ecx[1])))
                            long double x87_r6_26 = fconvert.t(fconvert.s(fconvert.t(arg3[1])))
                            arg4[3] = fconvert.s(x87_r6_26 + (fconvert.t(arg3[3]) - x87_r6_26) *
                                fconvert.t(fconvert.s((fconvert.t(arg2[3]) - x87_r6_24)
                                / (fconvert.t(ecx[3]) - x87_r6_24))))
                            entry_ebx[3] = fconvert.s(fconvert.t(arg2[3]))
                        
                        goto label_4d97fb
            else
                long double x87_r7_25 = fconvert.t(ecx[3])
                long double x87_r6_15 = fconvert.t(arg2[1])
                x87_r6_15 - x87_r7_25
                result.w = (x87_r6_15 < x87_r7_25 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_15, x87_r7_25) ? 1 : 0) << 0xa
                    | (x87_r6_15 == x87_r7_25 ? 1 : 0) << 0xe
                
                if ((result:1.b & 0x41) != 0)
                    long double x87_r7_26 = fconvert.t(ecx[1])
                    long double x87_r6_16 = fconvert.t(arg2[1])
                    x87_r6_16 - x87_r7_26
                    result.w = (x87_r6_16 < x87_r7_26 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_16, x87_r7_26) ? 1 : 0) << 0xa
                        | (x87_r6_16 == x87_r7_26 ? 1 : 0) << 0xe
                    
                    if ((result:1.b & 0x41) == 0)
                        long double x87_r6_17 = fconvert.t(fconvert.s(fconvert.t(ecx[1])))
                        long double x87_r6_19 = fconvert.t(fconvert.s(fconvert.t(arg3[1])))
                        arg4[1] = fconvert.s(x87_r6_19 + (fconvert.t(arg3[3]) - x87_r6_19) * fconvert.t(
                            fconvert.s((fconvert.t(arg2[1]) - x87_r6_17)
                            / (fconvert.t(ecx[3]) - x87_r6_17))))
                        entry_ebx[1] = fconvert.s(fconvert.t(arg2[1]))
                    
                    goto label_4d979b
        else
            long double x87_r7_13 = fconvert.t(ecx[2])
            long double x87_r6_8 = fconvert.t(*arg2)
            x87_r6_8 - x87_r7_13
            result.w = (x87_r6_8 < x87_r7_13 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_8, x87_r7_13) ? 1 : 0) << 0xa
                | (x87_r6_8 == x87_r7_13 ? 1 : 0) << 0xe
            
            if ((result:1.b & 0x41) != 0)
                long double x87_r7_14 = fconvert.t(*ecx)
                long double x87_r6_9 = fconvert.t(*arg2)
                x87_r6_9 - x87_r7_14
                result.w = (x87_r6_9 < x87_r7_14 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_9, x87_r7_14) ? 1 : 0) << 0xa
                    | (x87_r6_9 == x87_r7_14 ? 1 : 0) << 0xe
                
                if ((result:1.b & 0x41) == 0)
                    long double x87_r6_10 = fconvert.t(fconvert.s(fconvert.t(*ecx)))
                    long double x87_r6_12 = fconvert.t(fconvert.s(fconvert.t(*arg3)))
                    *arg4 = fconvert.s(x87_r6_12 + (fconvert.t(arg3[2]) - x87_r6_12) * fconvert.t(
                        fconvert.s((fconvert.t(*arg2) - x87_r6_10) / (fconvert.t(ecx[2]) - x87_r6_10))))
                    *entry_ebx = fconvert.s(fconvert.t(*arg2))
                
                goto label_4d973b
    else
        long double x87_r7_1 = fconvert.t(*ecx)
        long double x87_r6_1 = fconvert.t(arg2[2])
        x87_r6_1 - x87_r7_1
        result.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (p_1)
            long double x87_r7_2 = fconvert.t(ecx[2])
            long double x87_r6_2 = fconvert.t(arg2[2])
            x87_r6_2 - x87_r7_2
            result.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
            bool p_2 = unimplemented  {test ah, 0x5}
            
            if (not(p_2))
                long double x87_r6_3 = fconvert.t(fconvert.s(fconvert.t(*ecx)))
                long double x87_r6_5 = fconvert.t(fconvert.s(fconvert.t(*arg3)))
                arg4[2] = fconvert.s(x87_r6_5 + (fconvert.t(arg3[2]) - x87_r6_5) * fconvert.t(fconvert
                    .s((fconvert.t(arg2[2]) - x87_r6_3) / (fconvert.t(ecx[2]) - x87_r6_3))))
                entry_ebx[2] = fconvert.s(fconvert.t(arg2[2]))
            
            goto label_4d96e8
    
    result.b = 0
    return result
}
