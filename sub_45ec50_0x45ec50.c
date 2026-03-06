// 函数名称: sub_45ec50
// 虚拟地址: 0x45ec50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_45ec50(int32_t arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69877a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_140 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ecx = data_27e7a40
    void* esi = *(ecx + 0x548)
    void* var_144 = ecx
    float var_144_1 = fconvert.s(float.t(1))
    int32_t* result = sub_4f9fe0(arg3, arg2)
    
    if ((data_316672c & 1) == 0)
        data_316672c.d |= 1
        int32_t var_8_1 = 0
        result = sub_4f5220(data_307c108, "cards")
        data_3166728 = result
        int32_t var_8_2 = 0xffffffff
    
    int32_t ecx_1 = *(esi + 0x43880)
    
    if (ecx_1 s> 0)
        int32_t var_ac = ecx_1
        int32_t var_9c_1 = 0
        int32_t var_a8_1 = 1
        int32_t var_a0 = 0
        int32_t var_98
        int32_t eax_5
        int32_t edx
        int80_t st0_1
        st0_1, eax_5, edx = sub_40a930(&var_98)
        data_3166728
        int32_t var_144_3 = 0
        int32_t* var_148_2 = &var_ac
        int32_t var_130[0x10]
        int32_t var_58
        int32_t eax_7
        int80_t st0_2
        st0_2, eax_7 =
            sub_4fae30(arg3, edx, __builtin_memcpy(&var_58, eax_5, 0x40), &var_130, &var_58, &var_a0)
        int32_t eax_9 = *(esi + 0x43880)
        float var_f0
        __builtin_memcpy(&var_f0, eax_7, 0x40)
        int32_t var_9c_2 = 0
        var_a0 = eax_9 - 1
        int32_t eax_11
        int32_t edx_1
        int80_t st0_3
        st0_3, eax_11, edx_1 = sub_40a930(&var_130)
        data_3166728
        int32_t var_144_5 = 0
        int32_t* var_148_3 = &var_ac
        int32_t eax_13
        int80_t st0_4
        st0_4, eax_13 =
            sub_4fae30(arg3, edx_1, __builtin_memcpy(&var_58, eax_11, 0x40), &var_98, &var_58, &var_a0)
        float ebx_3 = 1f
        __builtin_memcpy(&var_58, eax_13, 0x40)
        var_ac = 0x3f800000
        int32_t eax_14 = *(esi + 0x43880)
        
        if (eax_14 s< 5)
            var_a0 = fconvert.s(float.t(eax_14) / fconvert.t(5.0))
            float var_9c_4 = fconvert.s(float.t(1))
            var_ac = var_a0
            long double x87_r2_1 = fconvert.t(0.0099999997764825821)
            ebx_3 = var_9c_4
            var_ac = fconvert.s(fconvert.t(var_a0) + x87_r2_1)
            
            if (eax_14 == 1)
                var_ac = fconvert.s(x87_r2_1 + fconvert.t(var_ac))
        
        if ((data_316672c & 2) == 0)
            data_316672c.d |= 2
            int32_t var_8_3 = 1
            data_3166724 = sub_4f5220(data_307c108, "imgBGRect")
            int32_t var_8_4 = 0xffffffff
        
        if ((data_316672c & 4) == 0)
            data_316672c.d |= 4
            int32_t var_8_5 = 2
            data_3166720 = sub_4f5220(data_307c108, "bg")
            int32_t var_8_6 = 0xffffffff
        
        int32_t* eax_19 = sub_4f6e90(data_3166724, sub_4fc3d0(&data_be1cb8, arg3), &data_83f3d3)
        int32_t edi_3 = data_3166720
        int32_t edx_4 = *eax_19 + 1
        eax_19[0x15] = var_ac
        eax_19[0x14] = edx_4
        eax_19[0x16] = ebx_3
        int32_t* eax_21 = sub_4f6e90(edi_3, sub_4fc3d0(&data_be1cb8, arg3), &data_83f3d3)
        int32_t edx_6 = *eax_21 + 1
        eax_21[0x15] = var_ac
        eax_21[0x16] = ebx_3
        eax_21[0x14] = edx_6
        result = *(esi + 0x43880)
        int32_t ebx_4 = 0
        int32_t var_9c_5 = 0
        
        if (result s> 0)
            void* var_a4_1 = esi + 0x43360
            
            do
                float var_ec
                long double x87_r3_9 = fconvert.t(var_ec)
                long double x87_r2_3 = fconvert.t(var_f0)
                int32_t ecx_10 = __builtin_memcpy(&var_98, &var_f0, 0x40)
                
                if (result s> 1)
                    long double x87_r0_1 =
                        fconvert.t(fconvert.s(float.t(var_9c_5) / float.t(result - 1)))
                    var_ac = fconvert.s(x87_r2_3 + (fconvert.t(var_58) - x87_r2_3) * x87_r0_1)
                    var_98 = var_ac
                    float var_54
                    result = fconvert.s(x87_r3_9 + x87_r0_1 * (fconvert.t(var_54) - x87_r3_9))
                    int32_t* result_1 = result
                
                int32_t var_150_3 = ecx_10
                sub_4294a0(result, *var_a4_1, &var_98, fconvert.s(float.t(1)), 0, 0, 0xffffffff)
                result = *(esi + 0x43880)
                var_a4_1 += 4
                ebx_4 += 1
                var_9c_5 = ebx_4
            while (ebx_4 s< result)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
