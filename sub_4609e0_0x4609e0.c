// 函数名称: sub_4609e0
// 虚拟地址: 0x4609e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4609e0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69669c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    float var_114
    int32_t eax_2 = __security_cookie ^ &var_114
    int32_t __saved_edi
    int32_t var_124 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_5 = sub_426870(arg1, 0)
    char var_104 = eax_5.b
    arg1[0x29] = eax_5
    char result = sub_445cd0(arg1)
    
    if (result == 0)
        float var_60
        __builtin_memcpy(&var_60, &arg1[3], 0x20)
        
        if (sub_42f6a0(arg1) == 0)
            if (sub_44a330(arg1) != 0)
                var_60 = fconvert.s(fconvert.t(var_60) * fconvert.t(1.1000000238418579))
        else
            var_114 = fconvert.s(fconvert.t(*data_27e7a40) * fconvert.t(6.0))
            int32_t mxcsr
            int16_t x87control
            var_114 = fconvert.s(sub_686ea0(mxcsr, x87control, fconvert.t(var_114)))
            var_114 = fconvert.s(fconvert.t(var_114) * fconvert.t(0.02500000037252903)
                + fconvert.t(1.1000000238418579))
            var_60 = fconvert.s(fconvert.t(var_114) * fconvert.t(var_60))
        
        float var_110_1 = 0f
        void* edx_1 = data_27e7a40
        void* eax_10 = *(edx_1 + 0x548)
        bool cond:0_1 = *(eax_10 + 0xbfe4) == 0
        var_114 = 0f
        
        if (not(cond:0_1) && *(eax_10 + 0x43898) == 0 && *(eax_10 + 0xbfe7) == 0
                && *(eax_10 + 0xbfe5) != 0)
            eax_10.b = *(eax_10 + 0xbfd0) == arg1[0x2b]
            
            if (eax_10.b != 0)
                void* eax_11 = *(edx_1 + 0x548)
                long double x87_r7_14 = fconvert.t(*(eax_11 + 0xbfe0)) - fconvert.t(*(eax_11 + 0xbfd8))
                var_114 = fconvert.s(fconvert.t(*(eax_11 + 0xbfdc)) - fconvert.t(*(eax_11 + 0xbfd4)))
                var_110_1 = fconvert.s(x87_r7_14)
        
        float var_4c
        long double x87_r7_16 = fconvert.t(var_4c) + fconvert.t(var_114)
        void var_80
        __builtin_memcpy(&var_80, &var_60, 0x20)
        float var_6c_1 = fconvert.s(x87_r7_16)
        float var_68
        float var_68_1 = fconvert.s(fconvert.t(var_68) + fconvert.t(var_110_1))
        float var_64
        float var_64_1 = fconvert.s(fconvert.t(var_64) + fconvert.t(0.0))
        float eax_13 = sub_460910(arg1)
        bool cond:1_1 = *arg1 != 1
        var_114 = eax_13
        int32_t* var_138_1
        int32_t var_134_1
        float var_130_2
        int32_t* var_12c_2
        float* var_128_3
        
        if (cond:1_1)
            int32_t* var_10c_2 = nullptr
            
            if (*(data_27e7a50 + 0x10) == 0)
                int32_t* eax_18 = sub_514ee0(data_307bd3c)
                int32_t* eax_19 = sub_514ee0(data_307bd40)
                var_10c_2 = eax_18
                
                if ((var_104 & 1) == 0)
                    var_10c_2 = eax_19
            
            int32_t eax_20
            int80_t st0_3
            st0_3, eax_20 = sub_431730(&var_80)
            __builtin_memcpy(&var_60, eax_20, 0x40)
            
            if ((data_31661e4 & 2) == 0)
                data_31661e4.d |= 2
                int32_t var_c_3 = 1
                data_31661dc = sub_4f5220(data_307c104, "CardHighlight")
                int32_t var_c_4 = 0xffffffff
            
            var_128_3 = &var_114
            var_12c_2 = var_10c_2
            float* var_130_3 = &var_114
            var_130_2 = fconvert.s(float.t(1))
            var_134_1 = data_31661dc
            var_138_1 = data_307c104
        else
            int32_t eax_14
            int80_t st0_2
            st0_2, eax_14 = sub_431730(&var_80)
            __builtin_memcpy(&var_60, eax_14, 0x40)
            
            if ((data_31661e4 & 1) == 0)
                data_31661e4.d |= 1
                int32_t var_c_1 = 0
                data_31661e0 = sub_4f5220(data_307c208, "CardHighlight")
                int32_t var_c_2 = 0xffffffff
            
            var_128_3 = &var_114
            var_12c_2 = nullptr
            float* var_130_1 = &var_114
            var_130_2 = fconvert.s(float.t(1))
            var_134_1 = data_31661e0
            var_138_1 = data_307c208
        
        result = sub_4f4b00(var_138_1, var_134_1, var_130_2, var_12c_2, var_128_3)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_114)
    return result
}
