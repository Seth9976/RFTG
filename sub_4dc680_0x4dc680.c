// 函数名称: sub_4dc680
// 虚拟地址: 0x4dc680
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4dc680(float* arg1 @ edi, int16_t arg2 @ x87control, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    long double x87_r7 = float.t(1)
    int32_t* ecx = data_30d73a4
    int32_t* ebx = arg4
    long double temp1 = fconvert.t(ebx[3])
    x87_r7 - temp1
    int32_t eax_1
    eax_1.w = (x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe
    
    if ((eax_1:1.b & 0x41) == 0)
        ecx = data_30d73ac
    
    int32_t eax_2 = data_30d739c
    float var_74 = fconvert.s(fconvert.t(*arg1) + fconvert.t(arg1[0x15]))
    long double x87_r7_4 = fconvert.t(arg1[1]) + fconvert.t(arg1[0x16])
    int32_t var_38
    __builtin_memcpy(&var_38, 
        "\x01\x00\x03\x00\x00\x00\x02\x00\x04\x00\x06\x00\x05\x00\x07\x00\x02\x00\x06\x00\x00\x00\x04\x00\x"
    "01\x00\x05\x00\x03\x00\x07\x00\x00\x00\x04\x00\x01\x00\x05\x00\x03\x00\x07\x00\x02\x00\x06\x
            00", 
        0x30)
    long double x87_r6 = fconvert.t(0.5)
    sub_4dc540(fconvert.s(fconvert.t(var_74) * x87_r6), 
        fconvert.s(fconvert.t(fconvert.s(x87_r7_4)) * x87_r6), 
        fconvert.s(x87_r6 * fconvert.t(fconvert.s(fconvert.t(arg1[2]) + fconvert.t(arg1[0x17])))), 6, 
        eax_2, ecx)
    long double x87_r7_11 = fconvert.t(0.99900001287460327)
    int32_t ecx_3 = data_306856c
    long double x87_r6_4 = fconvert.t(0.00100000005f)
    long double x87_r5 = fconvert.t(255.0)
    int32_t* esi = arg3
    long double x87_r4 = fconvert.t(0.5f)
    long double x87_r3 = fconvert.t(0.5)
    int32_t edx_1 = 0
    data_306856c = ecx_3 + 6
    int32_t result_1 = 0
    void* ecx_5 = ecx_3 * 0xa0 + 0x2de8584
    int32_t var_60 = 0
    int32_t result
    
    while (true)
        int32_t eax_8 = sx.d(*(&var_38 + ((edx_1 + (result_1 << 2)) << 1))) * 3
        void* eax_9 = &arg1[eax_8]
        *(ecx_5 - 0x18) = arg1[eax_8]
        *(ecx_5 - 0x14) = *(eax_9 + 4)
        int32_t edx_5 = *esi
        *(ecx_5 - 0x10) = *(eax_9 + 8)
        int32_t eax_11 = esi[1]
        *(ecx_5 - 0xc) = edx_5
        int32_t edx_6 = esi[2]
        *(ecx_5 - 8) = eax_11
        *(ecx_5 - 4) = edx_6
        float edx_7 = ebx[1]
        long double x87_r2_1 = fconvert.t(*ebx)
        float var_54_1 = ebx[2]
        x87_r2_1 - x87_r7_11
        float var_50_1 = ebx[3]
        float eax_13
        eax_13.w = (x87_r2_1 < x87_r7_11 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_1, x87_r7_11) ? 1 : 0) << 0xa
            | (x87_r2_1 == x87_r7_11 ? 1 : 0) << 0xe | 0x1000
        float edx_8
        
        if ((eax_13:1.b & 0x41) != 0)
            x87_r2_1 - x87_r6_4
            eax_13.w = (x87_r2_1 < x87_r6_4 ? 1 : 0) << 8
                | (is_unordered.t(x87_r2_1, x87_r6_4) ? 1 : 0) << 0xa
                | (x87_r2_1 == x87_r6_4 ? 1 : 0) << 0xe | 0x1000
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (p_1)
                int16_t x87status_1
                int16_t temp0_3
                temp0_3, x87status_1 = __fnstcw_memmem16(arg2)
                int16_t x87control
                int16_t x87status_2
                x87control, x87status_2 = __fldcw_memmem16((zx.d(temp0_3) | 0xc00).w)
                edx_8.b = (int.d(x87_r2_1 * x87_r5 + x87_r3)).b
                int16_t x87status_3
                arg2, x87status_3 = __fldcw_memmem16(temp0_3)
            else
                x87_r3 = x87_r2_1
                edx_8.b = 0
        else
            x87_r3 = x87_r2_1
            edx_8.b = 0xff
        
        long double x87_r2_4 = fconvert.t(edx_7)
        x87_r2_4 - x87_r7_11
        eax_13.w = (x87_r2_4 < x87_r7_11 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_4, x87_r7_11) ? 1 : 0) << 0xa
            | (x87_r2_4 == x87_r7_11 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_13:1.b & 0x41) != 0)
            x87_r2_4 - x87_r6_4
            eax_13.w = (x87_r2_4 < x87_r6_4 ? 1 : 0) << 8
                | (is_unordered.t(x87_r2_4, x87_r6_4) ? 1 : 0) << 0xa
                | (x87_r2_4 == x87_r6_4 ? 1 : 0) << 0xe | 0x1000
            bool p_2 = unimplemented  {test ah, 0x5}
            
            if (p_2)
                int16_t x87status_4
                int16_t temp0_4
                temp0_4, x87status_4 = __fnstcw_memmem16(arg2)
                int16_t x87control_1
                int16_t x87status_5
                x87control_1, x87status_5 = __fldcw_memmem16((zx.d(temp0_4) | 0xc00).w)
                eax_13.b = (int.d(x87_r2_4 * x87_r5 + x87_r3)).b
                char var_43_3 = eax_13.b
                int16_t x87status_6
                arg2, x87status_6 = __fldcw_memmem16(temp0_4)
            else
                x87_r3 = x87_r2_4
                char var_43_2 = 0
        else
            x87_r3 = x87_r2_4
            char var_43_1 = 0xff
        
        long double x87_r2_7 = fconvert.t(var_54_1)
        x87_r2_7 - x87_r7_11
        eax_13.w = (x87_r2_7 < x87_r7_11 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_7, x87_r7_11) ? 1 : 0) << 0xa
            | (x87_r2_7 == x87_r7_11 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_13:1.b & 0x41) != 0)
            x87_r2_7 - x87_r6_4
            eax_13.w = (x87_r2_7 < x87_r6_4 ? 1 : 0) << 8
                | (is_unordered.t(x87_r2_7, x87_r6_4) ? 1 : 0) << 0xa
                | (x87_r2_7 == x87_r6_4 ? 1 : 0) << 0xe | 0x1000
            bool p_3 = unimplemented  {test ah, 0x5}
            
            if (p_3)
                int16_t x87status_7
                int16_t temp0_5
                temp0_5, x87status_7 = __fnstcw_memmem16(arg2)
                int16_t x87control_2
                int16_t x87status_8
                x87control_2, x87status_8 = __fldcw_memmem16((zx.d(temp0_5) | 0xc00).w)
                eax_13.b = (int.d(x87_r2_7 * x87_r5 + x87_r3)).b
                char var_42_3 = eax_13.b
                int16_t x87status_9
                arg2, x87status_9 = __fldcw_memmem16(temp0_5)
            else
                x87_r3 = x87_r2_7
                char var_42_2 = 0
        else
            x87_r3 = x87_r2_7
            char var_42_1 = 0xff
        
        long double x87_r2_10 = fconvert.t(var_50_1)
        x87_r2_10 - x87_r7_11
        eax_13.w = (x87_r2_10 < x87_r7_11 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_10, x87_r7_11) ? 1 : 0) << 0xa
            | (x87_r2_10 == x87_r7_11 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_13:1.b & 0x41) != 0)
            x87_r2_10 - x87_r6_4
            eax_13.w = (x87_r2_10 < x87_r6_4 ? 1 : 0) << 8
                | (is_unordered.t(x87_r2_10, x87_r6_4) ? 1 : 0) << 0xa
                | (x87_r2_10 == x87_r6_4 ? 1 : 0) << 0xe | 0x1000
            bool p_4 = unimplemented  {test ah, 0x5}
            
            if (p_4)
                int16_t x87status_10
                int16_t temp0_6
                temp0_6, x87status_10 = __fnstcw_memmem16(arg2)
                int16_t x87control_3
                int16_t x87status_11
                x87control_3, x87status_11 = __fldcw_memmem16(temp0_6 | 0xc00)
                int16_t eax_18
                eax_18.b = (int.d(x87_r2_10 * x87_r5 + x87_r3)).b
                char var_41_3 = eax_18.b
                int16_t x87status_12
                arg2, x87status_12 = __fldcw_memmem16(temp0_6)
            else
                x87_r3 = x87_r2_10
                char var_41_2 = 0
        else
            x87_r3 = x87_r2_10
            char var_41_1 = 0xff
        
        int32_t eax_19 = edx_8.b.d
        *(ecx_5 + 8) = fconvert.s(x87_r4)
        *(ecx_5 + 0xc) = fconvert.s(x87_r4)
        edx_1 = var_60 + 1
        *ecx_5 = (((((eax_19 u>> 0x18 << 8) + zx.d(edx_8.b)) << 8) + zx.d((eax_19 u>> 8).b)) << 8)
            + zx.d((eax_19 u>> 0x10).b)
        *(ecx_5 + 4) = 0
        ecx_5 += 0x28
        var_60 = edx_1
        
        if (edx_1 s< 4)
            ebx = arg4
        else
            result = result_1 + 1
            esi = &esi[3]
            result_1 = result
            
            if (result s>= 6)
                break
            
            ebx = arg4
            edx_1 = 0
            var_60 = 0
    
    sub_5a6aba(var_8 ^ &__saved_ebp)
    return result
}
