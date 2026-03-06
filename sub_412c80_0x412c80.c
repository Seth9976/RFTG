// 函数名称: sub_412c80
// 虚拟地址: 0x412c80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_412c80(int128_t* arg1 @ edi)
{
    // 第一条实际指令: void* eax = sub_4f4890(data_307c4fc)
    void* eax = sub_4f4890(data_307c4fc)
    float esi_1 = *(eax + 8)
    float ebx = *(eax + 0xc)
    float ecx = *(eax + 0x10)
    float edx = *(eax + 0x14)
    float var_2c = esi_1
    sub_5abfc0(arg1, 0, 0x40)
    long double x87_r7 = float.t(1)
    *(arg1 + 8) = fconvert.s(x87_r7)
    *(arg1 + 0xc) = fconvert.s(x87_r7)
    long double x87_r6 = fconvert.t(0.5)
    float var_c_1 = fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(ecx) - fconvert.t(var_2c))) * x87_r6)))
    float var_8_1 = fconvert.s(fconvert.t(fconvert.s(x87_r6
        * fconvert.t(fconvert.s(fconvert.t(edx) - fconvert.t(ebx))))))
    float eax_1
    float edx_1
    eax_1, edx_1 = sub_40af40(&var_2c)
    *arg1 = fconvert.s(fconvert.t(eax_1) - fconvert.t(var_c_1))
    long double x87_r7_15 = fconvert.t(*arg1)
    *(arg1 + 4) = fconvert.s(fconvert.t(edx_1) - fconvert.t(var_8_1))
    long double x87_r7_16 = float.t(0)
    long double x87_r6_2 = fconvert.t(fconvert.s(x87_r7_15))
    x87_r6_2 - x87_r7_16
    float eax_2
    eax_2.w = (x87_r6_2 < x87_r7_16 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7_16) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7_16 ? 1 : 0) << 0xe | 0x3000
    long double x87_r5 = fconvert.t(0.5)
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r6_3
    
    if (p)
        x87_r6_3 = x87_r6_2 + x87_r5
    else
        x87_r6_3 = x87_r6_2 - x87_r5
    
    *arg1 = fconvert.s(float.t(sub_685f40(x87_r6_3)))
    long double x87_r5_4 = fconvert.t(fconvert.s(fconvert.t(*(arg1 + 4))))
    x87_r5_4 - x87_r7_16
    int32_t eax_3
    eax_3.w = (x87_r5_4 < x87_r7_16 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_4, x87_r7_16) ? 1 : 0) << 0xa
        | (x87_r5_4 == x87_r7_16 ? 1 : 0) << 0xe | 0x2800
    bool p_1 = unimplemented  {test ah, 0x5}
    long double x87_r7_17
    
    if (p_1)
        x87_r7_17 = x87_r7_16 + x87_r5
    else
        x87_r7_17 = x87_r7_16 - x87_r5
    
    long double x87_r7_18 = float.t(sub_685f40(x87_r7_17))
    arg1[3].d = esi_1
    arg1[2].d = esi_1
    *(arg1 + 4) = fconvert.s(x87_r7_18)
    *(arg1 + 0x34) = ebx
    *(arg1 + 0x24) = ebx
    *(arg1 + 0x38) = ecx
    *(arg1 + 0x28) = ecx
    *(arg1 + 0x3c) = edx
    *(arg1 + 0x2c) = edx
    return arg1
}
