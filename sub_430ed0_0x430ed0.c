// 函数名称: sub_430ed0
// 虚拟地址: 0x430ed0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_430ed0(float arg1)
{
    // 第一条实际指令: void var_78
    void var_78
    int32_t eax
    int80_t result
    result, eax = sub_40a930(&var_78)
    __builtin_memcpy(arg1, eax, 0x40)
    data_307c530
    void* eax_1 = sub_4f4900(data_c0215c)
    float var_28
    int32_t* eax_2 = sub_4f4990(eax_1, &var_28, eax_1 + 0x1c, &var_28, arg1)
    float edx_1 = eax_2[1]
    int32_t* esi_2 = data_307c584
    float var_38 = *eax_2
    float ecx_2 = eax_2[2]
    float edx_2 = eax_2[3]
    void* eax_3 = sub_4f4890(esi_2)
    float edx_3 = *(eax_3 + 0xc)
    var_28 = *(eax_3 + 8)
    float var_18 = fconvert.s(fconvert.t(*(eax_3 + 0x10)) - fconvert.t(var_28))
    float var_14 = fconvert.s(fconvert.t(*(eax_3 + 0x14)) - fconvert.t(edx_3))
    *(arg1 i+ 0xc)
    long double x87_r5 = float.t(1)
    long double x87_r5_1 = fconvert.t(fconvert.s(x87_r5 / x87_r5))
    float var_20_1 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(ecx_2) - fconvert.t(var_38))) * x87_r5_1)
    float var_1c_1 =
        fconvert.s(x87_r5_1 * fconvert.t(fconvert.s(fconvert.t(edx_2) - fconvert.t(edx_1))))
    float eax_4
    int32_t edx_5
    eax_4, edx_5 = sub_40af40(&var_38)
    long double x87_r6_14 = float.t(0)
    *arg1 = eax_4
    var_38 = fconvert.s(x87_r6_14)
    *(arg1 i+ 4) = edx_5
    float var_34_1 = fconvert.s(x87_r6_14)
    float var_30_1 = fconvert.s(fconvert.t(var_18))
    *(arg1 i+ 0x30) = var_38
    *(arg1 i+ 0x34) = var_34_1
    float var_2c_1 = fconvert.s(fconvert.t(var_14))
    *(arg1 i+ 0x38) = var_30_1
    var_38 = fconvert.s(x87_r6_14)
    float var_34_2 = fconvert.s(x87_r6_14)
    float var_30_2 = fconvert.s(fconvert.t(var_20_1))
    *(arg1 i+ 0x20) = var_38
    *(arg1 i+ 0x3c) = var_2c_1
    float var_2c_2 = fconvert.s(fconvert.t(var_1c_1))
    *(arg1 i+ 0x24) = var_34_2
    *(arg1 i+ 0x28) = var_30_2
    *(arg1 i+ 0x2c) = var_2c_2
    return result
}
