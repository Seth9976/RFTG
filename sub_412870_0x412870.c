// 函数名称: sub_412870
// 虚拟地址: 0x412870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_412870()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AAVios_base@2@AAHAA_N@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_cc = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool cond:0 = *(data_27e7fd0 + 0x27) == 0
    void var_84
    void arg_4
    __builtin_memcpy(&var_84, &arg_4, 0x40)
    int32_t* esi = data_307c4fc
    int32_t* var_98 = esi
    
    if (not(cond:0))
        int32_t* ecx_1 = data_307ca38
        var_98 = ecx_1
        esi = ecx_1
    
    void* ecx_2 = data_27e7a70
    int32_t eax_4 = *(ecx_2 + 0x60)
    long double x87_r7
    
    if (eax_4 != 0)
        x87_r7 = float.t(1) - float.t(*(ecx_2 + 0x5c)) / float.t(eax_4)
    else
        x87_r7 = float.t(0)
    
    float var_88_1 = fconvert.s(x87_r7)
    long double x87_r7_3 = float.t(1)
    
    if (*(ecx_2 + 0x64) == 7)
        var_88_1 = fconvert.s(x87_r7_3)
    
    void* var_d0 = ecx_2
    int32_t edx
    int80_t st0
    st0, edx = sub_4f5f30(esi, &var_84, 1, fconvert.s(x87_r7_3))
    void* result = data_27e7a70
    
    if (*(result + 0x64) s> 1)
        if ((data_316648c & 1) == 0)
            data_316648c.d |= 1
            int32_t var_8_1 = 0
            int32_t eax_5
            eax_5, edx = sub_4f5220(esi, "FillTile")
            data_3166488 = eax_5
            int32_t var_8_2 = 0xffffffff
        
        if ((data_316648c & 2) == 0)
            data_316648c.d |= 2
            int32_t var_8_3 = 1
            int32_t eax_6
            eax_6, edx = sub_4f5220(esi, "FillTile")
            data_3166484 = eax_6
            int32_t var_8_4 = 0xffffffff
        
        if ((data_316648c & 4) == 0)
            data_316648c.d |= 4
            int32_t var_8_5 = 2
            int32_t eax_7
            eax_7, edx = sub_4f5220(esi, "FillCap")
            data_3166480 = eax_7
            int32_t var_8_6 = 0xffffffff
        
        int32_t* eax_9 = sub_4f5350(data_3166488, edx, esi, &var_84)
        int32_t ecx_4 = eax_9[1]
        float var_34 = *eax_9
        float edx_2 = eax_9[2]
        int32_t eax_10 = eax_9[3]
        var_34 = fconvert.s(fconvert.t(var_34) - fconvert.t(1.0))
        float var_24 = var_34
        long double x87_r5_1 = fconvert.t(var_34)
        float var_1c_1 = edx_2
        int32_t var_20_1 = ecx_4
        int32_t var_18_1 = eax_10
        float var_1c_2 = fconvert.s((fconvert.t(edx_2) - x87_r5_1) * fconvert.t(var_88_1) + x87_r5_1)
        void var_ac
        int32_t* eax_11 = sub_413110(&var_24, &var_ac)
        float edx_3 = eax_11[1]
        var_34 = *eax_11
        float ecx_6 = eax_11[2]
        int32_t edx_4 = eax_11[3]
        int32_t var_28_1 = edx_4
        int32_t* eax_13 = sub_4f5350(data_3166480, edx_4, var_98, &var_84)
        int32_t edx_5 = eax_13[1]
        float var_44 = *eax_13
        int32_t var_40_1 = edx_5
        int32_t edx_6 = eax_13[3]
        float var_3c = eax_13[2]
        int32_t var_38_1 = edx_6
        void var_bc
        int32_t* eax_14 = sub_413110(&var_44, &var_bc)
        float edx_7 = eax_14[1]
        var_24 = *eax_14
        long double x87_r6_12 = fconvert.t(ecx_6)
        long double x87_r5_4 = fconvert.t(edx_3)
        float var_18_3 =
            fconvert.s(x87_r5_4 + fconvert.t(fconvert.s(fconvert.t(eax_14[3]) - fconvert.t(edx_7))))
        float var_90_1 = fconvert.s(x87_r5_4)
        long double x87_r5_7 = fconvert.t(fconvert.s(x87_r6_12
            + fconvert.t(fconvert.s(fconvert.t(eax_14[2]) - fconvert.t(var_24)))))
        var_24 = fconvert.s(x87_r6_12)
        float var_8c_2 = fconvert.s(x87_r5_7)
        long double x87_r5_9 = float.t(1)
        float var_d0_4 = var_90_1
        float var_20_3 = var_90_1
        float var_18_4 = fconvert.s(fconvert.t(var_18_3))
        var_24 = fconvert.s(x87_r6_12 - x87_r5_9)
        float var_1c_6 = fconvert.s(fconvert.t(var_8c_2) - x87_r5_9)
        sub_4f5f30(var_98, &var_84, 2, fconvert.s(float.t(1)))
        long double x87_r5_11 = fconvert.t(0.5f)
        var_44 = fconvert.s(x87_r5_11)
        float var_40_2 = fconvert.s(float.t(0))
        int32_t eax_18 = data_3166484
        float var_88_4 = fconvert.s(float.t(1))
        var_3c = fconvert.s(x87_r5_11)
        float var_38_2 = var_88_4
        float eax_19 = sub_4f53f0(eax_18, var_88_4, var_98)
        void* ecx_15 = data_27e7fe0
        int32_t* var_88_5 = eax_19
        int32_t* esi_5 = &var_44
        float* edx_12
        int80_t st0_2
        
        if (*(ecx_15 + 0x38) == 0)
            st0_2, edx_12 = sub_4d9830(eax_19, &data_be4aac, eax_19, esi_5, &var_34, nullptr)
        else
            edx_12 = ecx_15 + 0x28
            eax_19 = sub_4d9650(&var_34, edx_12, esi_5, &var_bc, &var_34)
            
            if (eax_19.b != 0)
                st0_2, edx_12 = sub_4d9830(eax_19, &data_be4aac, var_88_5, &var_bc, &var_ac, nullptr)
        float eax_22 = sub_4f53f0(data_3166480, edx_12, var_98)
        void* ecx_18 = data_27e7fe0
        int32_t* var_88_6 = eax_22
        int32_t ecx_19
        int80_t st0_3
        
        if (*(ecx_18 + 0x38) == 0)
            st0_3, ecx_19 = sub_4d9830(eax_22, &data_be4aac, eax_22, &data_84076c, &var_24, nullptr)
        else
            eax_22, ecx_19 = sub_4d9650(eax_22, ecx_18 + 0x28, &data_84076c, &var_ac, &var_24)
            
            if (eax_22.b != 0)
                st0_3, ecx_19 = sub_4d9830(eax_22, &data_be4aac, var_88_6, &var_ac, &var_bc, nullptr)
        int32_t var_d0_8 = ecx_19
        int80_t st0_4
        st0_4, result = sub_4f5f30(var_98, &var_84, 0x10, fconvert.s(float.t(1)))
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
