// 函数名称: sub_47cd90
// 虚拟地址: 0x47cd90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_47cd90(int32_t* arg1)
{
    // 第一条实际指令: int32_t* esi = *arg1
    int32_t* esi = *arg1
    float* edi = data_27e7a50
    arg1 = esi
    long double x87_r6_2 = float.t(0)
    long double x87_r5 = fconvert.t(fconvert.s(fconvert.t(*edi) * fconvert.t(9.0)))
    x87_r5 - x87_r6_2
    int32_t* eax
    eax.w = (x87_r5 < x87_r6_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r6_2) ? 1 : 0) << 0xa
        | (x87_r5 == x87_r6_2 ? 1 : 0) << 0xe | 0x2800
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r6_3
    
    if (p)
        x87_r6_3 = x87_r6_2 + fconvert.t(0.5)
    else
        x87_r6_3 = x87_r6_2 - fconvert.t(0.5)
    
    if (sub_685f40(x87_r6_3) s<= esi || esi != 0)
        arg1 = esi + 1
    
    *edi = fconvert.s(float.t(arg1) / x87_r5)
    sub_408ca0()
    sub_408a40()
    return 0
}
