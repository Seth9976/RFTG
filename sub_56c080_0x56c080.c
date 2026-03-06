// 函数名称: sub_56c080
// 虚拟地址: 0x56c080
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_56c080(int32_t arg1, int32_t arg2, int128_t** arg3, int16_t arg4 @ x87control, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f920
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4fe7d0(arg3, data_30d7364)
    sub_5abfc0(&arg3[9], 0, 0x34)
    int32_t* esi = arg5
    sub_4fedb0(*esi, arg3)
    char* edi_1 = esi[5]
    int32_t ecx_2
    void* edx_3
    
    if (*edi_1 == 0)
        char** eax_18
        eax_18, ecx_2, edx_3 = sub_509140(5, "sys/NoTex.material")
        arg3[0x16] = eax_18
    else
        char* var_20
        sub_535280(edi_1, &var_20)
        int32_t var_8_1 = 0
        char* const edx = var_20
        
        if (edx == 0)
            edx = &data_83f3d3
        
        char* var_1c
        sub_509d90(&var_1c, edx, 3, &var_1c)
        var_8_1.b = 1
        char* const edx_1 = var_1c
        
        if (edx_1 == 0)
            edx_1 = &data_83f3d3
        
        char** eax_5
        int32_t ecx_1
        void* edx_2
        eax_5, ecx_1, edx_2 = sub_509140(3, edx_1)
        char** var_54_3 = eax_5
        int32_t var_58_1 = 0x53
        sub_530b60(&arg3[0x17], edx_2, ecx_1, &data_8bd334)
        char** eax_7
        eax_7, ecx_2, edx_3 = sub_509140(5, "sys/SingleTex.material")
        arg3[0x16] = eax_7
        var_8_1.b = 0
        char* eax_8 = var_1c
        
        if (eax_8 != 0 && *eax_8 != 0)
            void* eax_10 = sub_4c4060(&var_1c)
            int32_t temp1_1 = *(eax_10 + 4)
            *(eax_10 + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t esi_2 = *(eax_10 + 0xc) + 0x10
                ecx_2, edx_3 = sub_4f4430(eax_10, sub_4f4380(esi_2), esi_2)
                esi = arg5
        
        int32_t var_8_2 = 0xffffffff
        char* eax_13 = var_20
        
        if (eax_13 != 0 && *eax_13 != 0)
            void* eax_15 = sub_4c4060(&var_20)
            int32_t temp4_1 = *(eax_15 + 4)
            *(eax_15 + 4) -= 1
            
            if (temp4_1 == 1)
                int32_t esi_4 = *(eax_15 + 0xc) + 0x10
                ecx_2, edx_3 = sub_4f4430(eax_15, sub_4f4380(esi_4), esi_4)
                esi = arg5
    
    int32_t var_54_6 = 1
    int32_t var_58_2 = 5
    sub_530b60(&arg3[0x17], edx_3, ecx_2, &data_8bd334)
    int32_t eax_20 = esi[1]
    arg3[3] = eax_20
    int32_t eax_23 = eax_20 * 0x24
    arg3[4] = eax_23
    int32_t eax_24
    
    if (eax_23 != 0)
        eax_24 = sub_4cce80(eax_23)
    else
        eax_24 = 0
    
    arg3[5] = eax_24
    arg3[2] = 4
    int32_t i_1 = 0
    
    if (arg3[3] s> 0)
        long double x87_r7_1 = fconvert.t(0.99900001287460327)
        int32_t var_28_1 = 0
        long double x87_r6_1 = fconvert.t(0.00100000005f)
        int32_t var_24_1 = 0
        long double x87_r5_1 = fconvert.t(255.0)
        long double x87_r4_1 = fconvert.t(0.5)
        int32_t i
        
        do
            int32_t* ecx_6 = esi[2] + var_24_1
            int32_t* edx_5 = arg3[5] + var_28_1
            *edx_5 = *ecx_6
            edx_5[1] = ecx_6[1]
            edx_5[2] = ecx_6[2]
            edx_5[3] = ecx_6[3]
            edx_5[4] = ecx_6[4]
            edx_5[5] = ecx_6[5]
            long double x87_r3_1 = fconvert.t(ecx_6[8])
            float eax_32 = ecx_6[9]
            x87_r3_1 - x87_r7_1
            float eax_33 = ecx_6[0xa]
            float var_34_1 = ecx_6[0xb]
            float eax_34
            eax_34.w = (x87_r3_1 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r3_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r3_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x1800
            char var_18_1
            
            if ((eax_34:1.b & 0x41) != 0)
                x87_r3_1 - x87_r6_1
                eax_34.w = (x87_r3_1 < x87_r6_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r3_1, x87_r6_1) ? 1 : 0) << 0xa
                    | (x87_r3_1 == x87_r6_1 ? 1 : 0) << 0xe | 0x1800
                bool p_1 = unimplemented  {test ah, 0x5}
                
                if (p_1)
                    int16_t x87status_1
                    int16_t temp0_1
                    temp0_1, x87status_1 = __fnstcw_memmem16(arg4)
                    int16_t x87control
                    int16_t x87status_2
                    x87control, x87status_2 = __fldcw_memmem16((zx.d(temp0_1) | 0xc00).w)
                    eax_34.b = (int.d(x87_r3_1 * x87_r5_1 + x87_r4_1)).b
                    var_18_1 = eax_34.b
                    int16_t x87status_3
                    arg4, x87status_3 = __fldcw_memmem16(temp0_1)
                else
                    x87_r4_1 = x87_r3_1
                    var_18_1 = 0
            else
                x87_r4_1 = x87_r3_1
                var_18_1 = 0xff
            
            long double x87_r3_4 = fconvert.t(eax_32)
            x87_r3_4 - x87_r7_1
            eax_34.w = (x87_r3_4 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r3_4, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r3_4 == x87_r7_1 ? 1 : 0) << 0xe | 0x1800
            
            if ((eax_34:1.b & 0x41) != 0)
                x87_r3_4 - x87_r6_1
                eax_34.w = (x87_r3_4 < x87_r6_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r3_4, x87_r6_1) ? 1 : 0) << 0xa
                    | (x87_r3_4 == x87_r6_1 ? 1 : 0) << 0xe | 0x1800
                bool p_2 = unimplemented  {test ah, 0x5}
                
                if (p_2)
                    int16_t x87status_4
                    int16_t temp0_2
                    temp0_2, x87status_4 = __fnstcw_memmem16(arg4)
                    int16_t x87control_1
                    int16_t x87status_5
                    x87control_1, x87status_5 = __fldcw_memmem16((zx.d(temp0_2) | 0xc00).w)
                    eax_34.b = (int.d(x87_r3_4 * x87_r5_1 + x87_r4_1)).b
                    char var_17_3 = eax_34.b
                    int16_t x87status_6
                    arg4, x87status_6 = __fldcw_memmem16(temp0_2)
                else
                    x87_r4_1 = x87_r3_4
                    char var_17_2 = 0
            else
                x87_r4_1 = x87_r3_4
                char var_17_1 = 0xff
            
            long double x87_r3_7 = fconvert.t(eax_33)
            x87_r3_7 - x87_r7_1
            eax_34.w = (x87_r3_7 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r3_7, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r3_7 == x87_r7_1 ? 1 : 0) << 0xe | 0x1800
            
            if ((eax_34:1.b & 0x41) != 0)
                x87_r3_7 - x87_r6_1
                eax_34.w = (x87_r3_7 < x87_r6_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r3_7, x87_r6_1) ? 1 : 0) << 0xa
                    | (x87_r3_7 == x87_r6_1 ? 1 : 0) << 0xe | 0x1800
                bool p_3 = unimplemented  {test ah, 0x5}
                
                if (p_3)
                    int16_t x87status_7
                    int16_t temp0_3
                    temp0_3, x87status_7 = __fnstcw_memmem16(arg4)
                    int16_t x87control_2
                    int16_t x87status_8
                    x87control_2, x87status_8 = __fldcw_memmem16((zx.d(temp0_3) | 0xc00).w)
                    eax_34.b = (int.d(x87_r3_7 * x87_r5_1 + x87_r4_1)).b
                    char var_16_3 = eax_34.b
                    int16_t x87status_9
                    arg4, x87status_9 = __fldcw_memmem16(temp0_3)
                else
                    x87_r4_1 = x87_r3_7
                    char var_16_2 = 0
            else
                x87_r4_1 = x87_r3_7
                char var_16_1 = 0xff
            
            long double x87_r3_10 = fconvert.t(var_34_1)
            x87_r3_10 - x87_r7_1
            eax_34.w = (x87_r3_10 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r3_10, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r3_10 == x87_r7_1 ? 1 : 0) << 0xe | 0x1800
            
            if ((eax_34:1.b & 0x41) != 0)
                x87_r3_10 - x87_r6_1
                eax_34.w = (x87_r3_10 < x87_r6_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r3_10, x87_r6_1) ? 1 : 0) << 0xa
                    | (x87_r3_10 == x87_r6_1 ? 1 : 0) << 0xe | 0x1800
                bool p_4 = unimplemented  {test ah, 0x5}
                
                if (p_4)
                    int16_t x87status_10
                    int16_t temp0_4
                    temp0_4, x87status_10 = __fnstcw_memmem16(arg4)
                    int16_t x87control_3
                    int16_t x87status_11
                    x87control_3, x87status_11 = __fldcw_memmem16(temp0_4 | 0xc00)
                    int16_t eax_39
                    eax_39.b = (int.d(x87_r3_10 * x87_r5_1 + x87_r4_1)).b
                    char var_15_3 = eax_39.b
                    int16_t x87status_12
                    arg4, x87status_12 = __fldcw_memmem16(temp0_4)
                else
                    x87_r4_1 = x87_r3_10
                    char var_15_2 = 0
            else
                x87_r4_1 = x87_r3_10
                char var_15_1 = 0xff
            
            int32_t esi_5 = var_18_1.d
            var_24_1 += 0x30
            var_28_1 += 0x24
            esi = arg5
            edx_5[6] = (((((esi_5 u>> 0x18 << 8) + zx.d(var_18_1)) << 8) + zx.d((esi_5 u>> 8).b)) << 8)
                + zx.d((esi_5 u>> 0x10).b)
            edx_5[7] = ecx_6[6]
            i = i_1 + 1
            edx_5[8] = ecx_6[7]
            i_1 = i
        while (i s< arg3[3])
    
    int32_t eax_50 = esi[3]
    
    if (eax_50 != 0)
        arg3[6] = eax_50
        int32_t eax_51 = esi[3]
        int32_t eax_52 = eax_51 * 2
        arg3[7] = eax_52
        int128_t* eax_53
        
        if (eax_51 != neg.d(eax_51))
            eax_53 = sub_4cce80(eax_52)
        else
            eax_53 = nullptr
        
        void* edx_6 = arg3[7]
        arg3[8] = eax_53
        sub_5ab990(eax_53, esi[4], edx_6, eax_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
}
