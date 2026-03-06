// 函数名称: sub_4f95b0
// 虚拟地址: 0x4f95b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_4f95b0(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4 @ esi, void* arg5, void* arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$??0UMSThreadProxy@details@Concurrency@@QAE@PAUIThreadProxyFactory@12@PAXI@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_98 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    float arg_4
    float eax_3 = arg_4
    float var_1c = fconvert.s(fconvert.t(*(eax_3 i+ 0xc)))
    float var_58 = fconvert.s(fconvert.t(*(arg4 + 0xc)) + fconvert.t(*(arg4 + 0xf4)))
    long double x87_r7_3 = fconvert.t(*(arg4 + 0x10))
    float var_48 = var_58
    float var_44 = fconvert.s(x87_r7_3 + fconvert.t(*(arg4 + 0xf8)))
    float var_40 = fconvert.s(fconvert.t(*(arg4 + 0x14)) + fconvert.t(*(arg4 + 0xf4)))
    float var_4c = fconvert.s(fconvert.t(*(arg4 + 0x18)) + fconvert.t(*(arg4 + 0xf8)))
    float var_3c = var_4c
    int32_t* eax_5 = sub_4f4990(&var_58, var_4c, arg4 + 0x1c, &var_58, eax_3)
    float edx_2 = eax_5[1]
    var_48 = *eax_5
    float ecx_4 = eax_5[2]
    float* edx_3 = eax_5[3]
    float var_3c_1 = edx_3
    float var_28
    float var_24
    
    if (arg3[0x57].b != 0)
        float eax_6
        int32_t edx_4
        eax_6, edx_4 = sub_40af40(&var_48)
        long double x87_r7_10 = fconvert.t(ecx_4) - fconvert.t(var_48)
        arg3[0x5c] = eax_6
        arg3[0x5d] = edx_4
        var_28 = fconvert.s(x87_r7_10)
        arg3[0x5e] = var_28
        var_24 = fconvert.s(fconvert.t(var_3c_1) - fconvert.t(edx_2))
        arg3[0x5f] = var_24
        float ecx_7 = arg_4
        arg3[0x60] = 0
        arg3[0x61] = 0
        arg3[0x66] = fconvert.s(fconvert.t(*(arg4 + 0xc0)) * fconvert.t(*(ecx_7 i+ 0xc)))
        arg3[0x6b] = fconvert.s(fconvert.t(*(arg4 + 0xd8)))
        struct _EXCEPTION_REGISTRATION_RECORD** eax_8 = sub_506a30(&arg3[0x58])
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_8
    
    void* eax_9 = data_27e7fd0
    float var_30
    float var_20
    char* eax_11
    
    if (*(eax_9 + 0x27) == 0 && *(eax_9 + 0x35) == 0)
        var_20 = fconvert.s(float.t(*(eax_9 + 0x14)))
        float var_18_1 = fconvert.s(float.t(*(eax_9 + 0x18)))
        long double x87_r7_18 = float.t(0)
        var_58 = fconvert.s(x87_r7_18)
        float var_54_1 = fconvert.s(x87_r7_18)
        float var_50_1 = fconvert.s(fconvert.t(var_20))
        float var_38 = var_58
        float var_4c_1 = fconvert.s(fconvert.t(var_18_1))
        var_30 = var_50_1
        float var_2c_1 = var_4c_1
        edx_3 = &var_48
        float var_34_1 = var_54_1
        eax_11 = sub_4fc7d0(&var_38, edx_3)
    
    if (*(eax_9 + 0x27) != 0 || *(eax_9 + 0x35) != 0 || eax_11.b != 0)
        void* ecx_13
        eax_11, ecx_13 = sub_4f9540(arg4, edx_3, arg3)
        
        if (*eax_11 != 0)
            void* var_18_2
            
            if (arg5 != 0)
                var_18_2 = arg5
            else if (arg3[0x1b] s<= *arg3)
                var_18_2 = arg4 + 0xb8
            else
                ecx_13 = &arg3[0x1c]
                var_18_2 = ecx_13
            
            void* edi_2
            
            if (arg6 != 0)
                edi_2 = arg6
            else if (arg3[0x1d] s<= *arg3)
                edi_2 = arg4 + 0xbc
            else
                edi_2 = &arg3[0x1e]
            
            void* eax_17
            
            if (data_26a44e8 != 0)
                eax_17, ecx_13 = sub_5a9450(eax_11, 0x7b)
            
            if (data_26a44e8 == 0 || eax_17 == 0)
                if (*(arg4 + 0xc8) == 0)
                    void* eax_31
                    eax_31, ecx_13 = sub_5a9450(eax_11, 0xd)
                    
                    if (eax_31 == 0)
                        void* var_9c_8 = ecx_13
                        var_24 = sub_4f4b70(edi_2, fconvert.s(fconvert.t(*(arg_4 i+ 8))))
                        float eax_36 = sub_4f4b70(var_18_2, fconvert.s(fconvert.t(*(arg_4 i+ 8))))
                        long double x87_r7_38 = fconvert.t(*(arg4 + 0xc0)) * fconvert.t(var_1c)
                        var_20 = eax_36
                        int32_t eax_37 = *(arg4 + 0xb4)
                        arg_4 = fconvert.s(x87_r7_38)
                        int32_t eax_39
                        int80_t st0
                        st0, eax_39 = sub_4caf10(*(arg4 + 0xc4), &var_20, &var_48, eax_11, eax_37, 
                            &var_20, &var_24, fconvert.s(fconvert.t(arg_4)))
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_39
                
                void* var_9c_12 = ecx_13
                int32_t* eax_41 = sub_4f4b70(edi_2, fconvert.s(fconvert.t(*(arg_4 i+ 8))))
                float eax_43
                int32_t edx_20
                eax_43, edx_20 = sub_4f4b70(var_18_2, fconvert.s(fconvert.t(*(arg_4 i+ 8))))
                var_20 = eax_43
                sub_4c4330(eax_11, edx_20, &arg_4)
                int32_t var_8_2 = 1
                float eax_45 = *(arg4 + 0xc4)
                int32_t edx_21 = *(arg4 + 0xb4)
                float* var_9c_15 = &arg_4
                float ecx_28 = var_20
                var_24 = fconvert.s(fconvert.t(*(arg4 + 0xc0)) * fconvert.t(var_1c))
                float var_9c_16 = fconvert.s(fconvert.t(var_24))
                sub_4cc5a0(&var_48, edx_21, ecx_28, eax_41, eax_45)
            else
                float ecx_14 = var_48
                float var_50_2 = ecx_4
                var_20 = fconvert.s(fconvert.t(*(arg4 + 0xc0)) * fconvert.t(var_1c))
                var_58 = ecx_14
                long double x87_r7_23 = fconvert.t(9.99999975e-06f)
                long double temp0_1 = fconvert.t(var_20)
                x87_r7_23 - temp0_1
                float var_54_2 = edx_2
                float var_4c_2 = var_3c_1
                float eax_18
                eax_18.w = (x87_r7_23 < temp0_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_23, temp0_1) ? 1 : 0) << 0xa
                    | (x87_r7_23 == temp0_1 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x5}
                
                if (not(p_1))
                    float eax_19
                    int32_t edx_9
                    eax_19, edx_9 = sub_4fc8c0(&var_48)
                    long double x87_r7_24 = fconvert.t(var_20)
                    var_30 = eax_19
                    float* var_9c_2 = &var_48
                    int32_t var_2c_2 = edx_9
                    float eax_21
                    float edx_10
                    eax_21, edx_10 = sub_466250(&var_30, fconvert.s(x87_r7_24))
                    var_30 = eax_21
                    float eax_22
                    float edx_11
                    eax_22, edx_11 = sub_40af40(&var_48)
                    long double x87_r7_25 = fconvert.t(var_20)
                    var_28 = eax_22
                    float* var_9c_4 = &var_48
                    var_24 = edx_11
                    float eax_24
                    float edx_12
                    eax_24, edx_12 = sub_466250(&var_28, fconvert.s(x87_r7_25))
                    var_28 = eax_24
                    var_48 = fconvert.s(fconvert.t(var_28))
                    var_24 = edx_12
                    float var_44_2 = fconvert.s(fconvert.t(var_24))
                    long double x87_r7_28 = fconvert.t(var_30)
                    var_58 = var_48
                    float var_54_3 = var_44_2
                    float var_50_3 = fconvert.s(x87_r7_28)
                    float var_4c_3 = fconvert.s(fconvert.t(edx_10))
                
                void var_8c
                sub_5abfc0(&var_8c, 0, 0x34)
                float var_70_1 = fconvert.s(float.t(1))
                int32_t edx_15 = *var_18_2
                int32_t var_74_1 = *edi_2
                int32_t eax_27 = *(arg4 + 0xc4)
                var_24 = *(arg4 + 0xb4)
                int32_t var_78_1 = edx_15
                int32_t var_7c_1 = eax_27
                float* var_88_1 = &var_24
                int32_t eax_28
                int32_t edx_16
                eax_28, edx_16 = sub_4f4b70(&data_840b50, fconvert.s(fconvert.t(*(arg_4 i+ 8))))
                sub_4c4330(eax_11, edx_16, &arg_4)
                int32_t var_8_1 = 0
                int32_t* eax_30 = data_26a44e8
                var_20 = fconvert.s(fconvert.t(*(arg4 + 0xc0)) * fconvert.t(var_1c))
                void** var_a4_2 = &arg_4
                sub_4cca00(&var_58, eax_30, fconvert.s(fconvert.t(var_20)), eax_28, &var_8c)
            
            int32_t var_8_3 = 0xffffffff
            eax_11 = sub_4c43d0(&arg_4)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_11
}
