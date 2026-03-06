// 函数名称: sub_508560
// 虚拟地址: 0x508560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_508560()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t result = __security_cookie ^ &__saved_ebp
    int32_t result_1 = result
    int32_t* ecx = data_26a4500
    
    if (ecx != 0)
        (*(*ecx + 0x24))(1)
        data_26a4604 = 0
        data_26a4608 = 0
        data_26a460c = 0
        data_26a4610 = 0x3f800000
        sub_507ee0()
        long double x87_r6_2 = fneg(fconvert.t(data_26a4604))
        float edx_2 = data_26a4608
        float eax_2 = data_26a460c
        float var_1c = data_26a4604
        var_1c = fconvert.s(x87_r6_2)
        int32_t eax_3 = data_26a4610
        float var_18_2 = fconvert.s(fneg(fconvert.t(edx_2)))
        float var_3c = var_1c
        float var_14_2 = fconvert.s(fneg(fconvert.t(eax_2)))
        float var_38 = var_18_2
        int32_t var_30_1 = eax_3
        float var_74
        sub_405ee0(&var_74, &data_26a4584, &var_3c)
        float var_70
        float ecx_5 = var_70
        var_1c = var_74
        float var_18_3 = ecx_5
        int32_t var_68
        int32_t var_10_1 = var_68
        int32_t var_6c
        int32_t var_14_3 = var_6c
        sub_405900(&var_3c, var_6c, &var_1c)
        float edx_6 = var_38
        float var_80 = var_3c
        sub_465a20(&var_74, edx_6, &var_1c)
        float var_34_2 = var_70
        long double x87_r6_7 = fconvert.t(0f)
        var_38 = var_74
        long double x87_r4_1 = fconvert.t(edx_6)
        float var_2c = 0f
        int32_t var_30_2 = var_6c
        long double x87_r3_2 = fconvert.t(var_2c)
        long double x87_r1_1 = fconvert.t(var_80)
        long double x87_r1_3 = fconvert.t(1f)
        long double x87_r1_5 = fconvert.t(fconvert.s(x87_r3_2 * x87_r1_1 + x87_r6_7 * x87_r4_1
            + x87_r1_3 * fconvert.t(var_14_2)))
        var_2c = fconvert.s(x87_r3_2 * x87_r1_5)
        float var_28_1 = fconvert.s(x87_r6_7 * x87_r1_5)
        float var_24_1 = fconvert.s(x87_r1_3 * x87_r1_5)
        var_74 = fconvert.s(x87_r1_1 - fconvert.t(var_2c))
        var_2c = var_74
        var_70 = fconvert.s(x87_r4_1 - fconvert.t(var_28_1))
        float var_28_2 = var_70
        float var_24_2 = fconvert.s(fconvert.t(var_14_2) - fconvert.t(var_24_1))
        float* eax_11 = sub_4131a0(&var_2c, &var_1c)
        int32_t edx_9 = eax_11[1]
        int32_t eax_12 = eax_11[2]
        var_70 = *eax_11
        int32_t var_6c_2 = edx_9
        int32_t var_68_1 = eax_12
        float var_60[0x9]
        sub_413450(&var_38, &data_8409cc, &var_80, &var_70, &var_60)
        float* eax_14 = sub_413580(&var_60, &var_3c)
        float ecx_13 = eax_14[1]
        var_1c = *eax_14
        float edx_11 = eax_14[2]
        result = eax_14[3]
        var_1c = fconvert.s(fneg(fconvert.t(var_1c)))
        float var_18_5 = fconvert.s(fneg(fconvert.t(ecx_13)))
        data_26a4604 = var_1c
        float var_14_5 = fconvert.s(fneg(fconvert.t(edx_11)))
        data_26a4608 = var_18_5
        data_26a460c = var_14_5
        data_26a4610 = result
    
    sub_5a6aba(result_1 ^ &__saved_ebp)
    return result
}
