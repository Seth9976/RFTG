// 函数名称: sub_460fc0
// 虚拟地址: 0x460fc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_460fc0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69664c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    float var_fc
    int32_t eax_2 = __security_cookie ^ &var_fc
    int32_t __saved_edi
    int32_t var_10c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    float eax_5 = sub_426870(arg1, 0)
    float var_b0 = eax_5
    arg1[0x29] = eax_5
    char result = sub_445cd0(arg1)
    
    if (result == 0)
        float var_a0
        __builtin_memcpy(&var_a0, &arg1[3], 0x20)
        
        if (sub_42f6a0(arg1) == 0)
            if (sub_44a330(arg1) != 0)
                var_a0 = fconvert.s(fconvert.t(var_a0) * fconvert.t(1.1000000238418579))
        else
            var_fc = fconvert.s(fconvert.t(*data_27e7a40) * fconvert.t(6.0))
            int32_t mxcsr
            int16_t x87control
            var_fc = fconvert.s(sub_686ea0(mxcsr, x87control, fconvert.t(var_fc)))
            var_fc = fconvert.s(fconvert.t(var_fc) * fconvert.t(0.02500000037252903)
                + fconvert.t(1.1000000238418579))
            var_a0 = fconvert.s(fconvert.t(var_fc) * fconvert.t(var_a0))
        
        var_fc = sub_460910(arg1)
        sub_4dad50()
        int32_t* var_120_1
        int32_t var_11c_1
        float var_118_2
        int32_t* var_114_3
        float* var_110_3
        float var_60
        float var_54
        
        if (*arg1 != 1)
            int32_t* var_f8_3 = nullptr
            
            if (*(data_27e7a50 + 0x10) == 0)
                int32_t* eax_18 = sub_514ee0(data_307bd3c)
                int32_t* eax_19 = sub_514ee0(data_307bd40)
                var_f8_3 = eax_18
                
                if ((var_b0.b & 1) == 0)
                    var_f8_3 = eax_19
            
            long double x87_r7_15 = float.t(0)
            var_a0 = fconvert.s(x87_r7_15)
            float var_ac_4 = fconvert.s(x87_r7_15)
            float var_94_3 = fconvert.s(fconvert.t(2048f))
            float var_a8_2 = fconvert.s(fconvert.t(3238f))
            var_b0 = var_a0
            float var_a4_2 = var_94_3
            int32_t eax_22
            int80_t st0_3
            st0_3, eax_22 = sub_4fb1d0(&var_b0, &var_b0)
            __builtin_memcpy(&var_60, eax_22, 0x40)
            void* eax_23 = sub_4f4890(data_307c104)
            float edx_7 = *(eax_23 + 0xc)
            var_a0 = *(eax_23 + 8)
            float edx_8 = *(eax_23 + 0x14)
            var_b0 = fconvert.s(fconvert.t(*(eax_23 + 0x10)) - fconvert.t(var_a0))
            float var_ac_5 = fconvert.s(fconvert.t(edx_8) - fconvert.t(edx_7))
            var_a0 = fconvert.s(fneg(fconvert.t(var_b0)))
            float var_9c_5 = fconvert.s(fneg(fconvert.t(var_ac_5)))
            long double x87_r5_5 = fconvert.t(0.5)
            var_b0 = fconvert.s(fconvert.t(var_a0) * x87_r5_5)
            float var_ac_6 = fconvert.s(x87_r5_5 * fconvert.t(var_9c_5))
            long double x87_r5_7 = fconvert.t(var_54)
            var_a0 = fconvert.s(fconvert.t(var_b0) * x87_r5_7)
            var_60 = var_a0
            float var_5c_2 = fconvert.s(x87_r5_7 * fconvert.t(var_ac_6))
            
            if ((data_31661d8 & 2) == 0)
                data_31661d8.d |= 2
                int32_t var_c_3 = 1
                data_31661d0 = sub_4f5220(data_307c104, "CardHighlight")
                int32_t var_c_4 = 0xffffffff
            
            var_110_3 = &var_fc
            var_114_3 = var_f8_3
            int32_t* var_118_3 = var_f8_3
            var_118_2 = fconvert.s(float.t(1))
            var_11c_1 = data_31661d0
            var_120_1 = data_307c104
        else
            if ((data_31661d8 & 1) == 0)
                data_31661d8.d |= 1
                int32_t var_c_1 = 0
                data_31661d4 = sub_4f5220(data_307c208, "CardHighlight")
                int32_t var_c_2 = 0xffffffff
            
            long double x87_r7_11 = float.t(0)
            var_a0 = fconvert.s(x87_r7_11)
            float var_ac_1 = fconvert.s(x87_r7_11)
            float var_94_1 = fconvert.s(fconvert.t(2048f))
            float var_a8_1 = fconvert.s(fconvert.t(3238f))
            var_b0 = var_a0
            float var_a4_1 = var_94_1
            int32_t eax_14
            int80_t st0_2
            st0_2, eax_14 = sub_4fb1d0(&var_b0, &var_b0)
            __builtin_memcpy(&var_60, eax_14, 0x40)
            void* eax_15 = sub_4f4890(data_307c104)
            float edx_3 = *(eax_15 + 0xc)
            var_a0 = *(eax_15 + 8)
            float edx_4 = *(eax_15 + 0x14)
            var_b0 = fconvert.s(fconvert.t(*(eax_15 + 0x10)) - fconvert.t(var_a0))
            var_110_3 = &var_fc
            var_114_3 = nullptr
            float var_f4_1 =
                fconvert.s(fneg(fconvert.t(fconvert.s(fconvert.t(edx_4) - fconvert.t(edx_3)))))
            long double x87_r5_1 = fconvert.t(0.5)
            var_b0 = fconvert.s(fconvert.t(fconvert.s(fneg(fconvert.t(var_b0)))) * x87_r5_1)
            float var_ac_3 = fconvert.s(x87_r5_1 * fconvert.t(var_f4_1))
            long double x87_r5_3 = fconvert.t(var_54)
            var_60 = fconvert.s(fconvert.t(var_b0) * x87_r5_3)
            float var_f4_2 = fconvert.s(x87_r5_3 * fconvert.t(var_ac_3))
            float var_118_1 = var_f4_2
            var_118_2 = fconvert.s(float.t(1))
            float var_5c_1 = var_f4_2
            var_11c_1 = data_31661d4
            var_120_1 = data_307c208
        sub_4f4b00(var_120_1, var_11c_1, var_118_2, var_114_3, var_110_3)
        void* eax_27 = data_27e7fe4
        __builtin_memcpy(eax_27 + 0x9c, 0x83faf8, 0x40)
        *(eax_27 + 0xdc) = 0
        result = sub_4e2080()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_fc)
    return result
}
