// 函数名称: sub_4c3840
// 虚拟地址: 0x4c3840
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4c3840(float arg1 @ eax, int32_t* arg2)
{
    // 第一条实际指令: long double x87_r7 = float.t(0)
    long double x87_r7 = float.t(0)
    float var_18 = fconvert.s(x87_r7)
    float var_14 = fconvert.s(x87_r7)
    long double x87_r7_1 = float.t(1)
    float var_10 = fconvert.s(x87_r7_1)
    float var_c = fconvert.s(x87_r7_1)
    float var_28 = var_18
    float var_1c = var_c
    float eax_2 = data_27e7fe0
    float var_24 = var_14
    float var_20 = var_10
    float* esi = &var_28
    
    if (*(eax_2 i+ 0x38) == 0)
        sub_4d9830(eax_2, &data_be4aac, arg2, esi, arg1, nullptr)
        return 
    
    eax_2 = sub_4d9650(eax_2, eax_2 i+ 0x28, esi, &var_18, arg1)
    void var_38
    
    if (eax_2.b != 0)
        sub_4d9830(eax_2, &data_be4aac, arg2, &var_18, &var_38, nullptr)
}
