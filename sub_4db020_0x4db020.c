// 函数名称: sub_4db020
// 虚拟地址: 0x4db020
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4db020(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx = data_3161128
    float var_70
    float var_58
    float var_2c
    
    if ((ebx.b & 1) == 0)
        long double x87_r7_1 = fconvert.t(-0f)
        ebx |= 1
        var_2c = fconvert.s(x87_r7_1)
        float var_28_1 = fconvert.s(fconvert.t(-1f))
        float var_24_1 = fconvert.s(x87_r7_1)
        data_3161128 = ebx
        sub_413450(&data_840734, &var_2c, 0x840740, &data_8409b4, &var_58)
        float* eax_3 = sub_413580(&var_58, &var_70)
        data_3161118 = *eax_3
        data_316111c = eax_3[1]
        data_3161120 = eax_3[2]
        data_3161124 = eax_3[3]
    
    float var_30
    
    if ((ebx.b & 2) == 0)
        ebx |= 2
        data_3161128 = ebx
        sub_413450(&data_840734, &data_8409b4, 0x840740, &data_8409c0, &var_58)
        float* eax_4 = sub_413580(&var_58, &var_30)
        data_3161108 = *eax_4
        data_316110c = eax_4[1]
        data_3161110 = eax_4[2]
        data_3161114 = eax_4[3]
    
    void* eax_7 = data_27e7fd0
    
    if ((ebx.b & 4) == 0)
        ebx |= 4
        bool cond:0_1 = *(eax_7 + 0x2f) != 0
        data_3161128 = ebx
        int32_t* ecx_6 = &data_3161108
        
        if (not(cond:0_1))
            ecx_6 = &data_3161118
        
        data_31610f8 = *ecx_6
        data_31610fc = ecx_6[1]
        int32_t ecx_7 = ecx_6[3]
        data_3161100 = ecx_6[2]
        data_3161104 = ecx_7
    
    if ((ebx.b & 8) == 0)
        ebx |= 8
        data_3161128 = ebx
        data_31610f4 = 0xffffffff
    
    if ((ebx.b & 0x10) == 0)
        bool cond:1_1 = *(eax_7 + 0x2f) == 0
        data_3161128 = ebx | 0x10
        int32_t edx_10
        edx_10.b = cond:1_1
        data_31610f0 = edx_10 * 2 - 1
    
    if (*(eax_7 + 0x27) == 0)
        goto label_4db1f4
    
    float var_1c_3
    float var_18_3
    int32_t esi_3
    
    if ((*(sub_4c98a0() + 0x3c) & 0x200) != 0 || data_27e7bc1 != 0)
        esi_3 = 0x27e8090
        long double x87_r6_2 = fconvert.t(0.25)
        var_1c_3 = fconvert.s(fconvert.t(fconvert.s(float.t(data_26a452c))) * x87_r6_2)
        var_18_3 = fconvert.s(x87_r6_2 * fconvert.t(fconvert.s(float.t(data_26a4530))))
    else
        eax_7 = data_27e7fd0
    label_4db1f4:
        esi_3 = 0x27e8074
        var_1c_3 = fconvert.s(float.t(*(eax_7 + 0x14)))
        var_18_3 = fconvert.s(float.t(*(eax_7 + 0x18)))
    
    long double x87_r7_10 = fconvert.t(var_18_3)
    long double x87_r5 = fconvert.t(0.5)
    float var_50
    __builtin_memcpy(&var_50, esi_3, 0x1c)
    float var_5c_2 = fconvert.s(fconvert.t(data_27e7fe8) / (x87_r7_10 * x87_r5))
    long double x87_r4 = fconvert.t(var_5c_2)
    var_2c = fconvert.s(float.t(data_31610f4) * fconvert.t(var_1c_3) * x87_r5 * x87_r4)
    float var_28_2 = fconvert.s(float.t(1))
    float var_24_2 = fconvert.s(x87_r5 * x87_r7_10 * float.t(data_31610f0) * x87_r4)
    sub_405970(&var_70, &var_2c, &var_50)
    float var_6c
    float edx_15 = var_6c
    float var_40
    var_30 = fconvert.s(fconvert.t(var_70) + fconvert.t(var_40))
    float var_3c
    var_2c = fconvert.s(fconvert.t(edx_15) + fconvert.t(var_3c))
    float var_68
    float var_38
    float var_28_3 = fconvert.s(fconvert.t(var_68) + fconvert.t(var_38))
    sub_405ee0(&var_70, &data_31610f8, &var_50)
    float ecx_13 = var_70
    float edx_16 = var_6c
    var_58 = fconvert.s(fconvert.t(var_5c_2))
    float var_54 = ecx_13
    var_50 = edx_16
    float var_4c = var_68
    float var_44 = var_30
    int32_t var_64
    int32_t var_48 = var_64
    float var_40_1 = var_2c
    float var_3c_1 = var_28_3
    __builtin_memcpy(arg1, &var_58, 0x20)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg1
}
