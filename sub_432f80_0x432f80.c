// 函数名称: sub_432f80
// 虚拟地址: 0x432f80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_432f80(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t* eax_2 = *sub_466320(data_307c39c)
    int32_t* eax_2 = *sub_466320(data_307c39c)
    long double x87_r7 = float.t(*eax_2)
    
    if (*eax_2 s< 0)
        x87_r7 = x87_r7 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_1 = float.t(eax_2[1])
    
    if (eax_2[1] s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(eax_2[2])))
    *arg1 = fconvert.s(fconvert.t(fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7)))))
    arg1[1] = fconvert.s(float.t(0))
    arg1[2] = fconvert.s(fconvert.t(fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7_1)))))
    return arg1
}
