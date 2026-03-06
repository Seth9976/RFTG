// 函数名称: sub_4222a0
// 虚拟地址: 0x4222a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4222a0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* ecx_1 = *(data_27e7a40 + 0x548)
    long double x87_r7_2 = fconvert.t(fconvert.s(fconvert.t(*(ecx_1 + 0x2c0a8))
        - fconvert.t(fconvert.s(fconvert.t(data_8c4d34) * fconvert.t(5.0)))))
    *(ecx_1 + 0x2c0a8) = fconvert.s(x87_r7_2)
    long double x87_r6_2 = float.t(0)
    x87_r6_2 - x87_r7_2
    void* result
    result.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
    
    if ((result:1.b & 1) != 0)
        return result
    
    *(ecx_1 + 0x2c0a8) = fconvert.s(x87_r7_2)
    *(ecx_1 + 0x2c0a4) = 4
    return result
}
