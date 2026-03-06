// 函数名称: sub_64eea0
// 虚拟地址: 0x64eea0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_64eea0(float arg1, int32_t arg2)
{
    // 第一条实际指令: void* ecx = *(arg2 + 4)
    void* ecx = *(arg2 + 4)
    void* esi = *(ecx + 0x1c)
    int32_t eax_3
    int32_t edx
    edx:eax_3 = sx.q(*(esi + (*(arg2 + 0x28) << 2)))
    long double result = fconvert.t(-9999f)
    long double x87_r6 = fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(float.t((eax_3 - edx) s>> 1) / float.t(*(ecx + 8))))
        * fconvert.t(*(esi + 0xb78)) + fconvert.t(arg1)))
    x87_r6 - result
    int32_t eax_5
    eax_5.w = (x87_r6 < result ? 1 : 0) << 8 | (is_unordered.t(x87_r6, result) ? 1 : 0) << 0xa
        | (x87_r6 == result ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        return result
    
    return fconvert.t(fconvert.s(x87_r6))
}
