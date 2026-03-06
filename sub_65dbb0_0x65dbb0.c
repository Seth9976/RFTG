// 函数名称: sub_65dbb0
// 虚拟地址: 0x65dbb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65dbb0(float* arg1, float* arg2)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(*arg1)
    long double x87_r7 = fconvert.t(*arg1)
    long double x87_r6 = fconvert.t(*arg2)
    x87_r6 - x87_r7
    int32_t result
    
    if ((((x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
        result = 0
    else
        result = 1
    
    fconvert.t(*arg2) - fconvert.t(*arg1)
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        return result
    
    return result - 1
}
