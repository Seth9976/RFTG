// 函数名称: sub_418560
// 虚拟地址: 0x418560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __convention("regparm")sub_418560(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax_1 = *sub_466320(arg1)
    int32_t* eax_1 = *sub_466320(arg1)
    long double x87_r7 = float.t(*eax_1)
    
    if (*eax_1 s< 0)
        x87_r7 = x87_r7 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_1 = float.t(eax_1[1])
    
    if (eax_1[1] s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(eax_1[2])))
    float var_c_1 = fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7_1)))
    return fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7)))
}
