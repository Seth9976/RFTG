// 函数名称: sub_4c2e80
// 虚拟地址: 0x4c2e80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4c2e80(float arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69327a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_8c
    int32_t eax_2 = __security_cookie ^ &var_8c
    int32_t __saved_edi
    int32_t var_9c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = data_307c744
    int32_t edx
    
    if ((data_3165910 & 1) == 0)
        data_3165910.d |= 1
        int32_t var_c_1 = 0
        int32_t eax_5
        eax_5, edx = sub_4f5220(esi, "FillTile")
        data_316590c = eax_5
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3165910 & 2) == 0)
        data_3165910.d |= 2
        int32_t var_c_3 = 1
        int32_t eax_6
        eax_6, edx = sub_4f5220(esi, "FillTile")
        data_3165908 = eax_6
        int32_t var_c_4 = 0xffffffff
    
    if ((data_3165910 & 4) == 0)
        data_3165910.d |= 4
        int32_t var_c_5 = 2
        int32_t eax_7
        eax_7, edx = sub_4f5220(esi, "FillCap")
        data_3165904 = eax_7
        int32_t var_c_6 = 0xffffffff
    
    int32_t* eax_9 = sub_4f5350(data_316590c, edx, esi, arg1)
    float edx_1 = eax_9[2]
    float var_3c = *eax_9
    int32_t ecx_2 = eax_9[1]
    int32_t eax_10 = eax_9[3]
    var_3c = fconvert.s(fconvert.t(var_3c) - fconvert.t(1.0))
    float var_4c = var_3c
    long double x87_r6 = fconvert.t(var_3c)
    float var_44 = edx_1
    int32_t var_48 = ecx_2
    int32_t var_40 = eax_10
    float var_44_1 = fconvert.s((fconvert.t(edx_1) - x87_r6) * fconvert.t(data_27e7aa8) + x87_r6)
    void var_70
    int32_t* eax_11 = sub_413110(&var_4c, &var_70)
    float ecx_3 = eax_11[1]
    var_3c = *eax_11
    float edx_3 = eax_11[2]
    int32_t var_30 = eax_11[3]
    int32_t* eax_14 = sub_4f5350(data_3165904, edx_3, esi, arg1)
    int32_t ecx_6 = eax_14[1]
    float var_2c = *eax_14
    int32_t var_28 = ecx_6
    int32_t var_24 = eax_14[2]
    int32_t var_20 = eax_14[3]
    void var_60
    int32_t* eax_16 = sub_413110(&var_2c, &var_60)
    float edx_6 = eax_16[1]
    var_4c = *eax_16
    float var_84 = fconvert.s(fconvert.t(eax_16[3]) - fconvert.t(edx_6))
    long double x87_r7_10 = fconvert.t(edx_3)
    var_4c = fconvert.s(x87_r7_10 + fconvert.t(fconvert.s(fconvert.t(eax_16[2]) - fconvert.t(var_4c))))
    long double x87_r6_3 = fconvert.t(ecx_3)
    float var_48_2 = fconvert.s(x87_r6_3 + fconvert.t(var_84))
    float var_84_1 = fconvert.s(x87_r6_3)
    long double x87_r6_6 = fconvert.t(var_4c)
    var_4c = fconvert.s(x87_r7_10)
    float var_80 = fconvert.s(x87_r6_6)
    long double x87_r6_8 = float.t(1)
    float var_48_3 = var_84_1
    float var_40_2 = fconvert.s(fconvert.t(var_48_2))
    var_4c = fconvert.s(x87_r7_10 - x87_r6_8)
    float var_44_4 = fconvert.s(fconvert.t(var_80) - x87_r6_8)
    long double x87_r7_16 = fconvert.t(0.5f)
    var_2c = fconvert.s(x87_r7_16)
    float var_84_2 = fconvert.s(float.t(0))
    float var_28_1 = var_84_2
    float var_24_1 = fconvert.s(x87_r7_16)
    float var_20_1 = fconvert.s(float.t(1))
    float eax_21 = sub_4f53f0(data_3165908, var_84_2, esi)
    void* ecx_13 = data_27e7fe0
    float var_88_4 = eax_21
    int32_t* esi_4 = &var_2c
    float* edx_10
    int80_t st0_1
    
    if (*(ecx_13 + 0x38) == 0)
        st0_1, edx_10 = sub_4d9830(eax_21, &data_be4aac, eax_21, esi_4, &var_3c, nullptr)
    else
        edx_10 = ecx_13 + 0x28
        eax_21 = sub_4d9650(&var_3c, edx_10, esi_4, &var_60, &var_3c)
        
        if (eax_21.b != 0)
            st0_1, edx_10 = sub_4d9830(eax_21, &data_be4aac, var_88_4, &var_60, &var_70, nullptr)
    float eax_24 = sub_4f53f0(data_3165904, edx_10, esi)
    void* ecx_16 = data_27e7fe0
    int32_t* var_88_5 = eax_24
    
    if (*(ecx_16 + 0x38) == 0)
        sub_4d9830(eax_24, &data_be4aac, eax_24, &data_84076c, &var_4c, nullptr)
    else
        eax_24 = sub_4d9650(eax_24, ecx_16 + 0x28, &data_84076c, &var_70, &var_4c)
        
        if (eax_24.b != 0)
            sub_4d9830(eax_24, &data_be4aac, var_88_5, &var_70, &var_60, nullptr)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_8c)
}
