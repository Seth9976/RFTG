// 函数名称: sub_521e80
// 虚拟地址: 0x521e80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_521e80(int32_t* arg1, float arg2, int32_t arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68ed78
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = arg2
    int32_t var_18 = 0
    int32_t* eax_11
    
    switch (*esi)
        case 0, 1, 2, 4
            sub_521c90(arg1, esi)
            fsbase->NtTib.ExceptionList = ExceptionList
            return 
        case 6
            void var_f0
            int32_t* eax_6 = sub_521e80(&var_f0, esi[4], arg3, arg4, arg5, eax_2)
            int32_t var_8_1 = 1
            void var_90
            int32_t* eax_8 = sub_521e80(&var_90, esi[3], arg3, arg4, arg5)
            long double x87_r7_1 = float.t(0)
            int32_t ecx_4 = *eax_6
            
            if (ecx_4 == 2)
                arg2 = fconvert.s(fconvert.t(eax_6[2]))
            else if (ecx_4 != 1)
                arg2 = fconvert.s(x87_r7_1)
            else
                arg2 = fconvert.s(float.t(eax_6[2]))
            
            int32_t ecx_5 = *eax_8
            
            if (ecx_5 == 2)
                x87_r7_1 = fconvert.t(eax_8[2])
            else if (ecx_5 == 1)
                x87_r7_1 = float.t(eax_8[2])
            
            sub_521c10(arg1, fconvert.s(fconvert.t(fconvert.s(x87_r7_1))), fconvert.s(fconvert.t(arg2)))
            int32_t var_18_2 = 1
            sub_521920(&var_90)
            var_8_1.b = 0
            eax_11 = &var_f0
        label_521fa1:
            sub_521920(eax_11)
            fsbase->NtTib.ExceptionList = ExceptionList
            return 
        case 7
            void var_78
            float eax_14 = sub_521e80(&var_78, esi[5], arg3, arg4, arg5, eax_2)
            int32_t var_8_2 = 2
            void var_120
            int32_t* eax_16 = sub_521e80(&var_120, esi[4], arg3, arg4, arg5)
            var_8_2.b = 3
            void var_c0
            int32_t* eax_18 = sub_521e80(&var_c0, esi[3], arg3, arg4, arg5)
            long double x87_r7_4 = float.t(0)
            int32_t ecx_8 = *eax_14
            
            if (ecx_8 == 2)
                arg2 = fconvert.s(fconvert.t(*(eax_14 i+ 8)))
            else if (ecx_8 != 1)
                arg2 = fconvert.s(x87_r7_4)
            else
                arg2 = fconvert.s(float.t(*(eax_14 i+ 8)))
            
            int32_t ecx_9 = *eax_16
            float var_18_3
            
            if (ecx_9 == 2)
                var_18_3 = fconvert.s(fconvert.t(eax_16[2]))
            else if (ecx_9 != 1)
                var_18_3 = fconvert.s(x87_r7_4)
            else
                var_18_3 = fconvert.s(float.t(eax_16[2]))
            
            int32_t ecx_10 = *eax_18
            
            if (ecx_10 == 2)
                x87_r7_4 = fconvert.t(eax_18[2])
            else if (ecx_10 == 1)
                x87_r7_4 = float.t(eax_18[2])
            
            sub_521c30(arg1, fconvert.s(fconvert.t(fconvert.s(x87_r7_4))), 
                fconvert.s(fconvert.t(var_18_3)), fconvert.s(fconvert.t(arg2)))
            int32_t var_18_4 = 1
            sub_521920(&var_c0)
            var_8_2.b = 2
            sub_521920(&var_120)
            var_8_2.b = 0
            eax_11 = &var_78
            goto label_521fa1
        case 8
            void var_138
            float eax_23 = sub_521e80(&var_138, esi[6], arg3, arg4, arg5, eax_2)
            int32_t var_8_3 = 4
            void var_108
            int32_t* eax_25 = sub_521e80(&var_108, esi[5], arg3, arg4, arg5)
            var_8_3.b = 5
            void var_d8
            int32_t* eax_27 = sub_521e80(&var_d8, esi[4], arg3, arg4, arg5)
            var_8_3.b = 6
            void var_a8
            int32_t* eax_29 = sub_521e80(&var_a8, esi[3], arg3, arg4, arg5)
            long double x87_r7_8 = float.t(0)
            int32_t ecx_11 = *eax_23
            
            if (ecx_11 == 2)
                arg2 = fconvert.s(fconvert.t(*(eax_23 i+ 8)))
            else if (ecx_11 != 1)
                arg2 = fconvert.s(x87_r7_8)
            else
                arg2 = fconvert.s(float.t(*(eax_23 i+ 8)))
            
            int32_t ecx_12 = *eax_25
            float var_1c_2
            
            if (ecx_12 == 2)
                var_1c_2 = fconvert.s(fconvert.t(eax_25[2]))
            else if (ecx_12 != 1)
                var_1c_2 = fconvert.s(x87_r7_8)
            else
                var_1c_2 = fconvert.s(float.t(eax_25[2]))
            
            int32_t ecx_13 = *eax_27
            float var_18_5
            
            if (ecx_13 == 2)
                var_18_5 = fconvert.s(fconvert.t(eax_27[2]))
            else if (ecx_13 != 1)
                var_18_5 = fconvert.s(x87_r7_8)
            else
                var_18_5 = fconvert.s(float.t(eax_27[2]))
            
            int32_t ecx_14 = *eax_29
            
            if (ecx_14 == 2)
                x87_r7_8 = fconvert.t(eax_29[2])
            else if (ecx_14 == 1)
                x87_r7_8 = float.t(eax_29[2])
            
            sub_521c60(arg1, fconvert.s(fconvert.t(fconvert.s(x87_r7_8))), 
                fconvert.s(fconvert.t(var_18_5)), fconvert.s(fconvert.t(var_1c_2)), 
                fconvert.s(fconvert.t(arg2)))
            int32_t var_18_6 = 1
            sub_521920(&var_a8)
            var_8_3.b = 5
            sub_521920(&var_d8)
            var_8_3.b = 4
            sub_521920(&var_108)
            var_8_3.b = 0
            eax_11 = &var_138
            goto label_521fa1
        case 9
            void var_30
            int32_t edx
            char* eax_36 = *sub_521ab0(&esi[1], edx, &var_30)
            
            if (eax_36 == 0)
                eax_36 = &data_83f3d3
            
            void* eax_37 = sub_521870(eax_36, arg3, arg4)
            sub_4c43d0(&var_30)
            
            if (eax_37 != 0)
                sub_521d90(eax_37, arg1)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 
            
            void* eax_40
            int32_t edx_16
            eax_40, edx_16 = sub_521870("editor", 0, arg4)
            
            if (eax_40 == 0)
                sub_5219d0(arg1, 0xbe1ea8)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 
            
            int32_t var_8_4 = 7
            void var_2c
            char* eax_43 = *sub_521ab0(&esi[1], edx_16, &var_2c)
            
            if (eax_43 == 0)
                eax_43 = &data_83f3d3
            
            char* var_14c_15 = eax_43
            var_8_4.b = 8
            void var_28
            sub_521960(arg1, sub_4c4a50(&var_28, "[%s]"))
            int32_t var_18_7 = 1
            var_8_4.b = 7
            sub_4c43d0(&var_28)
            var_8_4.b = 0
            sub_4c43d0(&var_2c)
            fsbase->NtTib.ExceptionList = ExceptionList
            return 
        case 0xa
            int32_t var_48
            sub_521e80(&var_48, esi[3], arg3, arg4, arg5, eax_2)
            int32_t var_8_5 = 9
            void var_60
            sub_521e80(&var_60, esi[4], arg3, arg4, arg5)
            var_8_5.b = 0xa
            int32_t eax_47 = var_48
            void* edi_5
            
            if (eax_47 == 9 || eax_47 == 0xa)
                edi_5 = &var_60
            else
                edi_5 = &var_48
            
            sub_5219d0(arg1, edi_5)
            int32_t var_18_8 = 1
            var_8_5.b = 9
            sub_521920(&var_60)
            var_8_5.b = 0
            eax_11 = &var_48
            goto label_521fa1
    
    sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x41e, "UI2ExpressionEval")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
