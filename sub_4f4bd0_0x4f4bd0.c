// 函数名称: sub_4f4bd0
// 虚拟地址: 0x4f4bd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_4f4bd0(int32_t arg1, int32_t arg2, float arg3 @ ecx, float* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_697030
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_98 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    float arg_4
    float esi = arg_4
    float var_18 = fconvert.s(fconvert.t(*(arg3 i+ 0xc)))
    float var_50 = fconvert.s(fconvert.t(*(esi i+ 0xc)) + fconvert.t(*(esi i+ 0xf4)))
    long double x87_r7_3 = fconvert.t(*(esi i+ 0x10))
    float var_40 = var_50
    float var_3c = fconvert.s(x87_r7_3 + fconvert.t(*(esi i+ 0xf8)))
    float var_38 = fconvert.s(fconvert.t(*(esi i+ 0x14)) + fconvert.t(*(esi i+ 0xf4)))
    float var_44 = fconvert.s(fconvert.t(*(esi i+ 0x18)) + fconvert.t(*(esi i+ 0xf8)))
    float var_34 = var_44
    int32_t* eax_5 = sub_4f4990(var_44, &var_50, esi i+ 0x1c, &var_50, arg3)
    int32_t edx_2 = eax_5[1]
    var_40 = *eax_5
    int32_t ecx_3 = eax_5[2]
    int32_t edx_3 = eax_5[3]
    int128_t* eax_6 = *(esi i+ 0xcc)
    float arg_8
    char* ecx_4 = arg_8
    char* ebx = ecx_4
    
    if (*eax_6 == 0)
        eax_6 = nullptr
    
    char arg_14
    
    if (arg_14 == 0)
        ebx = sub_4fd8f0(eax_6, edx_3, ecx_4, eax_6)
    
    void* eax_8
    
    if (data_26a44e8 != 0)
        eax_8 = sub_5a9450(ebx, 0x7b)
    
    float var_1c
    
    if (data_26a44e8 == 0 || eax_8 == 0)
        if (*(esi i+ 0xc8) == 0)
            void* eax_20
            int32_t ecx_13
            eax_20, ecx_13 = sub_5a9450(ebx, 0xd)
            
            if (eax_20 == 0)
                int32_t var_9c_4 = ecx_13
                float eax_22 = sub_4f4b70(arg5, fconvert.s(fconvert.t(*(arg3 i+ 8))))
                long double x87_r7_34 = fconvert.t(*(arg3 i+ 8))
                arg_4 = eax_22
                float eax_24 = sub_4f4b70(arg4, fconvert.s(x87_r7_34))
                long double x87_r7_36 = fconvert.t(*(esi i+ 0xc0)) * fconvert.t(var_18)
                int32_t edx_10 = *(esi i+ 0xb4)
                arg_8 = eax_24
                arg_14.d = fconvert.s(x87_r7_36)
                int32_t eax_26
                int80_t st0
                st0, eax_26 = sub_4caf10(*(esi i+ 0xc4), edx_10, &var_40, ebx, edx_10, &arg_8, &arg_4, 
                    fconvert.s(fconvert.t(arg_14.d)))
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_26
        
        float eax_28 = *arg5
        arg_8 = eax_28
        arg_14.d = eax_28 u>> 0x18
        arg_14.d = fconvert.s(float.t(arg_14.d) * fconvert.t(*(arg3 i+ 8)))
        long double x87_r7_41 = float.t(0)
        long double x87_r6_6 = fconvert.t(arg_14.d)
        x87_r6_6 - x87_r7_41
        uint32_t eax_29
        eax_29.w = (x87_r6_6 < x87_r7_41 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_6, x87_r7_41) ? 1 : 0) << 0xa
            | (x87_r6_6 == x87_r7_41 ? 1 : 0) << 0xe | 0x3000
        long double x87_r5_3 = fconvert.t(0.5)
        bool p_1 = unimplemented  {test ah, 0x5}
        long double x87_r6_7
        
        if (p_1)
            x87_r6_7 = x87_r6_6 + x87_r5_3
        else
            x87_r6_7 = x87_r6_6 - x87_r5_3
        
        arg_8:3.b = sub_685f40(x87_r6_7)
        float eax_31 = *arg4
        var_1c = eax_31
        arg_14.d = eax_31 u>> 0x18
        arg_14.d = fconvert.s(float.t(arg_14.d) * fconvert.t(*(arg3 i+ 8)))
        long double x87_r5_7 = fconvert.t(arg_14.d)
        x87_r5_7 - x87_r7_41
        uint32_t eax_32
        eax_32.w = (x87_r5_7 < x87_r7_41 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_7, x87_r7_41) ? 1 : 0) << 0xa
            | (x87_r5_7 == x87_r7_41 ? 1 : 0) << 0xe | 0x2800
        bool p_2 = unimplemented  {test ah, 0x5}
        long double x87_r7_42
        
        if (p_2)
            x87_r7_42 = x87_r7_41 + x87_r5_3
        else
            x87_r7_42 = x87_r7_41 - x87_r5_3
        
        char eax_33
        int32_t ecx_18
        eax_33, ecx_18 = sub_685f40(x87_r7_42)
        var_1c:3.b = eax_33
        
        if (ebx == 0)
            sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_4c42b0(&arg_14, ebx)
        int32_t var_8_2 = 1
        float eax_35 = arg_4
        float edx_11 = *(eax_35 i+ 0xc4)
        int32_t eax_36 = *(eax_35 i+ 0xb4)
        int32_t var_9c_8 = ecx_18
        float ecx_19 = arg_8
        arg_4 = fconvert.s(fconvert.t(*(eax_35 i+ 0xc0)) * fconvert.t(var_18))
        float var_9c_9 = fconvert.s(fconvert.t(arg_4))
        sub_4cc5a0(&var_40, eax_36, var_1c, ecx_19, edx_11)
    else
        long double x87_r7_10 = fconvert.t(*(esi i+ 0xc0)) * fconvert.t(var_18)
        var_50 = var_40
        arg_14.d = fconvert.s(x87_r7_10)
        long double x87_r7_11 = fconvert.t(9.99999975e-06f)
        int32_t var_44_1 = edx_3
        long double temp1_1 = fconvert.t(arg_14.d)
        x87_r7_11 - temp1_1
        int32_t var_4c_1 = edx_2
        int32_t var_48_1 = ecx_3
        int32_t eax_10
        eax_10.w = (x87_r7_11 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_11, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == temp1_1 ? 1 : 0) << 0xe
        bool p = unimplemented  {test ah, 0x5}
        
        if (not(p))
            float eax_11
            float edx_5
            eax_11, edx_5 = sub_4fc8c0(&var_40)
            long double x87_r6_1 = float.t(1)
            arg_14.d = fconvert.s(x87_r6_1 / x87_r6_1)
            arg_8 = fconvert.s(fconvert.t(arg_14.d))
            long double x87_r6_2 = fconvert.t(arg_8)
            float var_30_1 = fconvert.s(fconvert.t(eax_11) * x87_r6_2)
            float var_2c_1 = fconvert.s(x87_r6_2 * fconvert.t(edx_5))
            float eax_12
            float edx_6
            eax_12, edx_6 = sub_40af40(&var_40)
            arg_14.d = fconvert.s(fconvert.t(arg_14.d))
            long double x87_r6_4 = fconvert.t(arg_14.d)
            float var_20_1 = fconvert.s(fconvert.t(eax_12) * x87_r6_4)
            var_1c = fconvert.s(x87_r6_4 * fconvert.t(edx_6))
            var_40 = fconvert.s(fconvert.t(var_20_1))
            long double x87_r7_25 = fconvert.t(var_1c)
            var_50 = var_40
            float var_4c_2 = fconvert.s(x87_r7_25)
            float var_48_2 = fconvert.s(fconvert.t(var_30_1))
            float var_44_2 = fconvert.s(fconvert.t(var_2c_1))
        
        void var_84
        sub_5abfc0(&var_84, 0, 0x34)
        float var_68_1 = fconvert.s(float.t(1))
        float var_9c_2 = fconvert.s(fconvert.t(*(arg3 i+ 8)))
        int32_t var_6c_1 = *arg5
        float var_70_1 = *arg4
        int32_t var_74_1 = *(esi i+ 0xc4)
        var_1c = *(esi i+ 0xb4)
        float* var_80_1 = &var_1c
        arg_8 = sub_4f4b70(&data_840b50, var_9c_2)
        
        if (ebx == 0)
            sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_4c42b0(&arg_14, ebx)
        int32_t var_8_1 = 0
        float edx_9 = arg_8
        void* var_a4_1 = &var_84
        arg_4 = fconvert.s(fconvert.t(*(arg_4 i+ 0xc0)) * fconvert.t(var_18))
        sub_4cca00(&var_50, data_26a44e8, fconvert.s(fconvert.t(arg_4)), edx_9, &var_84)
    int32_t var_8_3 = 0xffffffff
    char* eax_37 = arg_14.d
    
    if (eax_37 != 0 && *eax_37 != 0)
        eax_37 = sub_4c4060(&arg_14)
        int32_t temp2_1 = *(eax_37 + 4)
        *(eax_37 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_4 = *(eax_37 + 0xc) + 0x10
            eax_37 = sub_4f4430(eax_37, sub_4f4380(esi_4), esi_4)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_37
}
