// 函数名称: sub_526930
// 虚拟地址: 0x526930
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_526930(int32_t arg1, int32_t arg2, float arg3 @ ecx, char* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69283b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_13c
    int32_t eax_2 = __security_cookie ^ &var_13c
    int32_t __saved_edi
    int32_t var_14c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const var_138 = arg4
    int32_t* result = *(arg3 i+ 0x14c0)
    float var_134
    
    if (result == 3 && *(arg3 i+ 0x1580) != 0)
        int32_t edx = *(arg3 i+ 0x14ec)
        int32_t eax_6 = *(arg3 i+ 0x1590)
        *(arg3 i+ 0x1490) = *(arg3 i+ 0x1564)
        *(arg3 i+ 0x14b4) = edx
        *(arg3 i+ 0x14a8) = eax_6
        float eax_7
        int32_t edx_1
        eax_7, edx_1 = sub_40af40(arg3 i+ 8)
        *(arg3 i+ 0x1470) = eax_7
        *(arg3 i+ 0x1474) = edx_1
        var_138.b = 0
        var_138:1.w = 0
        long double x87_r7_4 = fconvert.t(*(arg3 i+ 0x14)) - fconvert.t(*(arg3 i+ 0xc))
        *(arg3 i+ 0x1478) = fconvert.s(fconvert.t(*(arg3 i+ 0x10)) - fconvert.t(*(arg3 i+ 8)))
        long double x87_r7_5 = fconvert.t(*(arg3 i+ 0x24))
        *(arg3 i+ 0x147c) = fconvert.s(x87_r7_4)
        long double x87_r6_1 = fconvert.t(fconvert.s(x87_r7_5))
        float var_130_2 = fconvert.s(fconvert.t(*(arg3 i+ 0x1568)) * x87_r6_1)
        long double x87_r7_9 = x87_r6_1 * fconvert.t(*(arg3 i+ 0x156c))
        *(arg3 i+ 0x1494) = *(arg3 i+ 0x1570)
        float var_12c_2 = fconvert.s(x87_r7_9)
        long double x87_r7_11 = fconvert.t(fconvert.s(fconvert.t(*(arg3 i+ 0x14f4))))
        *(arg3 i+ 0x1480) = fconvert.s(x87_r7_11 * fconvert.t(var_130_2))
        *(arg3 i+ 0x149c) = *(arg3 i+ 0x1574)
        result.b = 0xff
        var_138:3.b = 0xff
        long double x87_r7_14 = fconvert.t(*(arg3 i+ 0x14f4)) * fconvert.t(*(arg3 i+ 0x24))
        *(arg3 i+ 0x1484) = fconvert.s(x87_r7_11 * fconvert.t(var_12c_2))
        char* ecx_4 = var_138
        var_138.b = 0xff
        var_138:1.w = 0xffff
        *(arg3 i+ 0x1498) = fconvert.s(x87_r7_14)
        var_138:3.b = 0xff
        char* const edx_4 = var_138
        *(arg3 i+ 0x14a4) = ecx_4
        *(arg3 i+ 0x14a0) = edx_4
        
        if (*(arg3 i+ 0x14b0) == 0)
            int32_t* result_2 = nullptr
            long double x87_r7_16 = fconvert.t(data_8c4d34) + fconvert.t(*(arg3 i+ 0x1468))
            
            while (true)
                *(arg3 i+ 0x1468) = fconvert.s(x87_r7_16)
                
                while (true)
                    if (result_2 != 0)
                        result = result_2[8]
                    else
                        result = *data_27e7fdc
                    
                    if (result == 0)
                        goto label_5270ec
                    
                    int32_t* result_1
                    
                    while (true)
                        result_1 = result
                        result = result[8]
                        
                        if (result_1[7].b == 0)
                            break
                        
                        if (result == 0)
                            goto label_5270ec
                    
                    float edx_5 = result_1[4]
                    float ebx = result_1[5]
                    long double x87_r7_17 = fconvert.t(edx_5)
                    long double x87_r6_5 = fconvert.t(*(arg3 i+ 0x1470))
                    result_2 = result_1
                    x87_r6_5 - x87_r7_17
                    char var_139_1 = 0
                    result.w = (x87_r6_5 < x87_r7_17 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_5, x87_r7_17) ? 1 : 0) << 0xa
                        | (x87_r6_5 == x87_r7_17 ? 1 : 0) << 0xe | 0x3800
                    bool p_1 = unimplemented  {test ah, 0x41}
                    
                    if (not(p_1))
                        long double x87_r6_7 =
                            fconvert.t(*(arg3 i+ 0x1478)) + fconvert.t(*(arg3 i+ 0x1470))
                        x87_r6_7 - x87_r7_17
                        result.w = (x87_r6_7 < x87_r7_17 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_7, x87_r7_17) ? 1 : 0) << 0xa
                            | (x87_r6_7 == x87_r7_17 ? 1 : 0) << 0xe
                        
                        if ((result:1.b & 0x41) == 0)
                            x87_r7_17 = fconvert.t(ebx)
                            long double x87_r6_8 = fconvert.t(*(arg3 i+ 0x1474))
                            x87_r6_8 - x87_r7_17
                            result.w = (x87_r6_8 < x87_r7_17 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_8, x87_r7_17) ? 1 : 0) << 0xa
                                | (x87_r6_8 == x87_r7_17 ? 1 : 0) << 0xe | 0x3800
                            bool p_2 = unimplemented  {test ah, 0x41}
                            
                            if (not(p_2))
                                long double x87_r6_10 =
                                    fconvert.t(*(arg3 i+ 0x147c)) + fconvert.t(*(arg3 i+ 0x1474))
                                x87_r6_10 - x87_r7_17
                                result.w = (x87_r6_10 < x87_r7_17 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_10, x87_r7_17) ? 1 : 0) << 0xa
                                    | (x87_r6_10 == x87_r7_17 ? 1 : 0) << 0xe
                                
                                if ((result:1.b & 0x41) == 0)
                                    var_139_1 = 1
                    
                    int32_t eax_11 = *result_1
                    
                    if (eax_11 != 3 || var_139_1 == 0)
                        if (eax_11 != 4)
                            if (eax_11 == 1)
                                ecx_4 = result_1[1]
                                
                                if (ecx_4 == 0x56 && result_1[2] == 2 && *(arg3 i+ 0x14b1) != 0)
                                    var_138 = &data_83f3d3
                                    int32_t var_c_1 = 0
                                    
                                    if (sub_4c63c0(&var_138) != 0)
                                        sub_506300(&var_138, arg3 i+ 0x1460)
                                    
                                    result_1[7].b = 1
                                    int32_t var_c_2 = 0xffffffff
                                    ecx_4 = sub_4c43d0(&var_138)
                                    continue
                                
                                if (ecx_4 == 0x43 && result_1[2] == 2 && *(arg3 i+ 0x14b1) != 0)
                                    sub_506400(&var_134, edx_5, arg3 i+ 0x1460)
                                    
                                    if (sub_4c44c0(&var_134) != 0)
                                        sub_4c6360()
                                    
                                    result_1[7].b = 1
                                    ecx_4 = sub_4c43d0(&var_134)
                                    continue
                            
                            if (eax_11 == 0 && *(arg3 i+ 0x14b1) != eax_11.b
                                    && *(arg3 i+ 0x14b2) == eax_11.b)
                                int32_t eax_17 = result_1[2]
                                
                                if (eax_17 != 0 && eax_17 != 1)
                                    continue
                                
                                ecx_4 = sub_505e40(ecx_4, arg3 i+ 0x1460, result_1[1])
                                result_1[7].b = 1
                                continue
                            
                            if (eax_11 == 1 && *(arg3 i+ 0x14b1) != 0 && *(arg3 i+ 0x14b2) == 0)
                                ecx_4 = result_1[2]
                                
                                if (sub_506130(result_1[1], edx_5, ecx_4) == 0)
                                    continue
                                else
                                    result_1[7].b = 1
                                    continue
                            
                            if (eax_11 != 0x11 || result_1[1] != 0x100000 || var_139_1 == 0)
                                ecx_4 = 0x10
                                
                                if (eax_11 == 0x10 && result_1[1] == 0x100000)
                                    *(arg3 i+ 0x14b2) = 0
                                    continue
                                
                                if (eax_11 != 0xc || result_1[1] != 0x1000 || var_139_1 == 0)
                                    if (eax_11 == 0xb && result_1[1] == 0x1000)
                                        *(arg3 i+ 0x14b2) = 0
                                        continue
                                    
                                    if (eax_11 != 0xd || result_1[1] != 0x10)
                                        edx_5.b = var_139_1
                                    else
                                        edx_5.b = var_139_1
                                        
                                        if (edx_5.b != 0)
                                            ecx_4 = sub_505b50(arg3 i+ 0x1460, result_1[4], result_1[5])
                                            continue
                                    
                                    if (eax_11 == 0xe && result_1[1] == 0x10)
                                        *(arg3 i+ 0x14b2) = 0
                                        continue
                                    
                                    if (eax_11 == 0x15 && result_1[1] == 0x100 && edx_5.b != 0)
                                        ecx_4 = sub_505b50(arg3 i+ 0x1460, result_1[4], result_1[5])
                                        continue
                                    
                                    if (eax_11 == 0x13 && result_1[1] == 1 && edx_5.b != 0)
                                        ecx_4 = sub_505b50(arg3 i+ 0x1460, result_1[4], result_1[5])
                                        continue
                                    
                                    if (eax_11 == 0x14 && result_1[1] == 0x100)
                                        *(arg3 i+ 0x14b2) = 0
                                        continue
                                    
                                    if (eax_11 == 0x12 && result_1[1] == 1)
                                        *(arg3 i+ 0x14b2) = 0
                                        continue
                                    
                                    if (eax_11 == 0x15 && result_1[1] == 0x1000 && edx_5.b != 0)
                                        ecx_4 = sub_505b50(arg3 i+ 0x1460, result_1[4], result_1[5])
                                        continue
                                    
                                    if (eax_11 == 0x13 && result_1[1] == 0x10 && edx_5.b != 0)
                                        ecx_4 = sub_505b50(arg3 i+ 0x1460, result_1[4], result_1[5])
                                        continue
                                    
                                    if (eax_11 == 0x17 && result_1[1] == 1 && edx_5.b != 0)
                                        ecx_4 = sub_505b50(arg3 i+ 0x1460, result_1[4], result_1[5])
                                        continue
                                    
                                    if (eax_11 == 0x16 && result_1[1] == 1)
                                        *(arg3 i+ 0x14b2) = 0
                                        continue
                                    
                                    if (eax_11 == 0x14 && result_1[1] == 0x1000)
                                        *(arg3 i+ 0x14b2) = 0
                                        continue
                                    
                                    if (eax_11 != 0x12)
                                        continue
                                    else if (result_1[1] != 0x10)
                                        continue
                                    else
                                        *(arg3 i+ 0x14b2) = 0
                                        continue
                        else
                            *(arg3 i+ 0x14b2) = 0
                            continue
                    
                    float var_150_4 = ebx
                    *(arg3 i+ 0x14b2) = 1
                    int32_t eax_21
                    int80_t st0_1
                    st0_1, eax_21, ecx_4 = sub_505940(arg3 i+ 0x1460, edx_5)
                    x87_r7_16 = float.t(0)
                    *(arg3 i+ 0x1464) = eax_21
                    *(arg3 i+ 0x146c) = eax_21
                    break
    else
        int16_t top
        
        if (result != 2)
            void var_a0
            __builtin_memcpy(&var_a0, arg3 i+ 0x18, 0x40)
            int32_t i = 0
            
            if (*(arg3 i+ 0x19d0) s> 0)
                char* const edi_3 = var_138
                
                do
                    float eax_43 = sub_525900(i, arg2, arg3)
                    unimplemented  {fld st0, dword [ebp+0x10]}
                    int32_t* var_158_4 = arg5
                    int32_t ecx_20 = *(arg3 i+ 0x5c)
                    float var_158_5 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    unimplemented  {fld st0, dword [ebx+0x58]}
                    int32_t var_164_3 = ecx_20
                    float var_164_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    result, arg2 = sub_5271c0(eax_43, &var_a0, ecx_20, eax_43, arg3, &var_a0, 
                        var_164_4, ecx_20, *(arg3 i+ 0x145c), var_158_5, edi_3, arg5)
                    top -= 1
                    unimplemented  {call 0x5271c0}
                    i += 1
                while (i s< *(arg3 i+ 0x19d0))
        else
            result = *(arg3 i+ 0x1548) * *(arg3 i+ 0x1544)
            void var_60
            int32_t ecx_12 = __builtin_memcpy(&var_60, arg3 i+ 0x18, 0x40)
            float edi_2 = 0f
            var_134 = 0f
            
            if (result s> 0)
                while (true)
                    int32_t eax_28 = *(arg3 i+ 0x19d0)
                    
                    if (edi_2 s>= eax_28)
                        if (edi_2 == 0)
                            sub_4c5870("idx != 0", &data_83f3d3, "UI2.cpp", 0xaf3, "UI2UpdateChildren")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        if (eax_28 s<= 0)
                            sub_4c5870("i < ui.numChildren", &data_83f3d3, "UI2.cpp", 0x828, 
                                "UI2GetChild")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t edx_11 = *(arg3 i+ 0x15d0)
                        int32_t* eax_29 = sub_530500(ecx_12, edx_11)
                        
                        if (*(arg3 i+ 0x19d0) != edi_2)
                            sub_4c5870("ui.numChildren == idx", &data_83f3d3, "UI2.cpp", 0xaf6, 
                                "UI2UpdateChildren")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int128_t* eax_31 = sub_524c90(edi_2, edx_11, arg3)
                        char* const edx_12 = var_138
                        *(eax_31 + 0x1458) = 1
                        arg2 = sub_526840(eax_31, eax_29, edx_12, arg5)
                    
                    float ecx_15 = arg3
                    float eax_33
                    int32_t edx_13
                    eax_33, edx_13 = sub_525900(edi_2, arg2, ecx_15)
                    
                    if (*(arg3 i+ 0x19d0) s> 0)
                        ecx_15, edx_13 = sub_521460(*sub_530500(ecx_15, *(arg3 i+ 0x15d0)))
                    
                    float var_150_12 = edi_2
                    void var_120
                    void* var_154_10 = &var_120
                    int32_t eax_37 = sub_526310(&var_60, edx_13, ecx_15)
                    unimplemented  {fld st0, dword [ebp+0x10]}
                    char* const edx_15 = var_138
                    int32_t eax_38 = *(arg3 i+ 0x145c)
                    void var_e0
                    __builtin_memcpy(&var_e0, eax_37, 0x40)
                    float esi_11 = var_134
                    int32_t* var_158_2 = arg5
                    float var_158_3 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    unimplemented  {fld st0, dword [ebx+0x58]}
                    int32_t* var_164_1 = arg5
                    float var_164_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    ecx_12, arg2 = sub_5271c0(eax_38, eax_33, &var_e0, eax_33, arg3, &var_e0, 
                        var_164_2, esi_11, eax_38, var_158_3, edx_15, arg5)
                    top -= 1
                    unimplemented  {call 0x5271c0}
                    var_134 = esi_11 i+ 1
                    
                    if (esi_11 i+ 1 s>= result)
                        break
                    
                    edi_2 = var_134
            
            if (result s< *(arg3 i+ 0x19d0))
                *(arg3 i+ 0x19d0) = result
                
                if (*(arg3 i+ 0x19d4) s< result)
                    sub_4c5870("ui.numTotalChildren >= ui.numChildren", &data_83f3d3, "UI2.cpp", 0xb0d, 
                        "UI2UpdateChildren")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
    label_5270ec:
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_13c)
    return result
}
