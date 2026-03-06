// 函数名称: sub_461a70
// 虚拟地址: 0x461a70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_461a70(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float eax_2 = data_27e800c
    float ecx = data_27e8010
    float edx = data_27e8014
    float var_a4
    sub_405900(&var_a4, edx, &arg1[4])
    float var_40 = var_a4
    long double x87_r6 = float.t(0)
    float var_a0
    float var_3c = var_a0
    float var_9c
    float var_38 = var_9c
    long double x87_r7_4 = fconvert.t(fconvert.s(fconvert.t(var_40) * x87_r6 + fconvert.t(var_3c)
        + x87_r6 * fconvert.t(var_38)))
    long double temp1 = fconvert.t(0f)
    x87_r7_4 - temp1
    float eax_4
    eax_4.w = (x87_r7_4 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_4, temp1) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp1 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        var_40 = 0f
        var_3c = 1f
        var_38 = 0f
    
    int32_t eax_5 = arg1[0x17]
    
    if (eax_5 == 2)
        var_40 = 0f
        var_3c = 1f
        var_38 = 0f
    
    void var_94
    float var_80
    float var_7c
    float var_78
    void var_74
    float var_1c
    float var_18
    
    if (arg1[0x25] != 0)
        int32_t esi_1 = *(data_27e7a40 + 0x74)
        float eax_6
        
        if (esi_1 != 0xffffffff)
            eax_6 = *sub_46b2b0(esi_1)
        else
            eax_6 = eax_5 | esi_1
        
        int32_t ecx_5 = *(data_27e7a40 + 0x74)
        var_1c = eax_6
        var_18 = 1.96181785e-44f
        int32_t var_14 = 0xffffffff
        int32_t eax_9 = sub_436c20(&var_74, arg1, ecx_5, &var_74, &var_1c, 1)
        __builtin_memcpy(&var_94, eax_9, 0x20)
        float var_7c_1 = fconvert.s(fconvert.t(var_7c) + fconvert.t(0.0099999997764825821))
        var_1c = fconvert.s(fconvert.t(var_80) - fconvert.t(eax_2))
        *arg2 = 0xffffffff
        var_18 = fconvert.s(fconvert.t(var_7c_1) - fconvert.t(ecx))
        float var_30_1 = fconvert.s(fconvert.t(var_18) * fconvert.t(var_3c)
            + fconvert.t(var_1c) * fconvert.t(var_40)
            + fconvert.t(fconvert.s(fconvert.t(var_78) - fconvert.t(edx))) * fconvert.t(var_38))
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_9
    
    void var_c4
    float var_60
    float var_5c
    float var_58
    
    if ((eax_5 != 3 && eax_5 != 4) || arg1[0x16] == 0)
        __builtin_memcpy(&var_74, 
            sub_436c20(&var_c4, arg1, *(data_27e7a40 + 0x74), &var_c4, &arg1[0x16], 1), 0x20)
        var_1c = fconvert.s(fconvert.t(var_60) - fconvert.t(eax_2))
        var_18 = fconvert.s(fconvert.t(var_5c) - fconvert.t(ecx))
        float var_14_9 = fconvert.s(fconvert.t(var_58) - fconvert.t(edx))
        long double x87_r7_36 = fconvert.t(var_18) * fconvert.t(var_3c)
        long double x87_r6_17 = fconvert.t(var_1c) * fconvert.t(var_40)
        *arg2 = arg1[0x29]
        float var_14_10 = fconvert.s(x87_r7_36 + x87_r6_17 + fconvert.t(var_14_9) * fconvert.t(var_38))
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return arg2
    
    *arg2 = arg1[0x29]
    int32_t edi = arg1[0x16]
    var_18 = 8.40779079e-45f
    int32_t var_14_2 = 2
    int32_t eax_11
    
    if (edi != 0xffffffff)
        eax_11 = sub_46b360(edi)
    else
        eax_11 = 6 | edi
    
    int32_t var_d8 = 6
    int32_t eax_12
    int80_t st0
    st0, eax_12 = sub_432b90(eax_11, eax_11, &var_18, &var_74, &data_84074c)
    int32_t ebx_1 = arg1[0x16]
    __builtin_memcpy(&var_94, eax_12, 0x20)
    int32_t var_30_2 = 2
    int32_t var_34 = 6
    var_18 = 8.40779079e-45f
    int32_t var_14_3 = 0
    int32_t eax_13
    
    if (ebx_1 != 0xffffffff)
        eax_13 = sub_46b360(ebx_1)
    else
        eax_13 = 6 | ebx_1
    
    int32_t var_d8_1 = 6
    int32_t eax_14
    int80_t st0_1
    st0_1, eax_14 = sub_432b90(eax_13, eax_13, &var_34, &var_c4, &var_18)
    long double x87_r2 = fconvert.t(eax_2)
    __builtin_memcpy(&var_74, eax_14, 0x20)
    long double x87_r2_2 = fconvert.t(fconvert.s(fconvert.t(var_80) - x87_r2))
    var_1c = fconvert.s(x87_r2_2)
    long double x87_r0 = fconvert.t(ecx)
    float var_4c = fconvert.s(fconvert.t(var_7c) - x87_r0)
    var_18 = fconvert.s(fconvert.t(var_4c))
    long double x87_r7_19 = fconvert.t(edx)
    float var_50 = fconvert.s(fconvert.t(var_78) - x87_r7_19)
    float var_48 = fconvert.s(fconvert.t(var_60) - x87_r2)
    float var_44_1 = fconvert.s(fconvert.t(var_5c) - x87_r0)
    float var_30_4 = fconvert.s(fconvert.t(var_58) - x87_r7_19)
    long double x87_r1_7 = fconvert.t(var_3c)
    long double x87_r7_23 = fconvert.t(var_40)
    long double x87_r6_9 = fconvert.t(var_38)
    long double x87_r7_28 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_50))) * x87_r6_9
        + fconvert.t(var_1c) * x87_r7_23 + fconvert.t(var_18) * x87_r1_7))
    long double x87_r6_15 = fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(var_44_1))) * x87_r1_7
        + fconvert.t(fconvert.s(fconvert.t(var_48))) * x87_r7_23
        + fconvert.t(fconvert.s(fconvert.t(var_30_4))) * x87_r6_9))
    x87_r6_15 - x87_r7_28
    eax_14.w = (x87_r6_15 < x87_r7_28 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_15, x87_r7_28) ? 1 : 0) << 0xa
        | (x87_r6_15 == x87_r7_28 ? 1 : 0) << 0xe
    
    if ((eax_14:1.b & 0x41) != 0)
        float var_30_6 = fconvert.s(fconvert.t(fconvert.s(
            x87_r2_2 * fconvert.t(fconvert.s(fconvert.t(var_30_4)))
            + x87_r7_23 * fconvert.t(fconvert.s(fconvert.t(var_48)))
            + x87_r1_7 * fconvert.t(fconvert.s(fconvert.t(var_44_1))))))
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_14
    
    float var_30_5 = fconvert.s(fconvert.t(fconvert.s(
        x87_r6_9 * fconvert.t(fconvert.s(fconvert.t(var_50)))
        + x87_r7_23 * fconvert.t(fconvert.s(x87_r2_2))
        + x87_r1_7 * fconvert.t(fconvert.s(fconvert.t(var_4c))))))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_14
}
