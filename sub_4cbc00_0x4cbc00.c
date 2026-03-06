// 函数名称: sub_4cbc00
// 虚拟地址: 0x4cbc00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4cbc00(int32_t* arg1)
{
    // 第一条实际指令: void* entry_ebx
    void* entry_ebx
    
    if (*(entry_ebx + 0x1c) == 0)
        return 
    
    int32_t eax_1 = sub_4ccda0(entry_ebx + 0x3c, entry_ebx + 0x34)
    int32_t eax_2 = sub_4ccda0(entry_ebx + 0x3c, entry_ebx + 0x38)
    char* eax_4 = *arg1
    char* const var_8_1 = &data_83f3d3
    
    if (eax_4 != 0)
        var_8_1 = eax_4
    
    char** edi_3 = *(entry_ebx + 0x2c)
    long double x87_r7_2 = fconvert.t(fconvert.s(fconvert.t(*(entry_ebx + 0x28))))
    float var_38 = fconvert.s(x87_r7_2)
    long double x87_r6_1 = float.t(0)
    float var_2c_1 = fconvert.s(x87_r6_1)
    float var_20_1 = fconvert.s(x87_r6_1)
    float var_34_1 = fconvert.s(x87_r6_1)
    float var_1c_1 = fconvert.s(x87_r6_1)
    float var_28_1 = fconvert.s(x87_r7_2)
    float var_30_1 = fconvert.s(fconvert.t(*(entry_ebx + 0x20)) + fconvert.t(*(entry_ebx + 0xc)))
    float var_24_1 = fconvert.s(float.t(*(entry_ebx + 0x30)) + fconvert.t(*(entry_ebx + 0x24)))
    float var_18_1 = fconvert.s(float.t(1))
    float var_5c[0x9]
    sub_413350(&var_38, &var_5c, entry_ebx + 0x48)
    long double x87_r7_8 = float.t(1)
    var_38 = fconvert.s(x87_r7_8)
    long double x87_r6_2 = float.t(0)
    float var_2c_2 = fconvert.s(x87_r6_2)
    float var_20_2 = fconvert.s(x87_r6_2)
    float var_34_2 = fconvert.s(x87_r6_2)
    float var_1c_2 = fconvert.s(x87_r6_2)
    float var_28_2 = fconvert.s(x87_r7_8)
    float var_30_2 = fconvert.s(fconvert.t(0f))
    float var_24_2 = fconvert.s(fconvert.t(0f))
    float var_18_2 = fconvert.s(x87_r7_8)
    float var_80[0x9]
    sub_413350(&var_38, &var_80, &var_5c)
    int32_t eax
    int80_t st0_1
    st0_1, eax = sub_4ca330(eax_1, edi_3, var_8_1, &var_80, eax_1, eax_2)
}
