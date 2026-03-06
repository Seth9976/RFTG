// 函数名称: sub_4f4b70
// 虚拟地址: 0x4f4b70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4f4b70(int32_t* arg1, float arg2)
{
    // 第一条实际指令: int32_t result_1 = *arg1
    int32_t result_1 = *arg1
    int32_t result = result_1
    long double x87_r7_2 = float.t(0)
    long double x87_r6 = fconvert.t(fconvert.s(float.t(result_1 u>> 0x18) * fconvert.t(arg2)))
    x87_r6 - x87_r7_2
    uint32_t eax
    eax.w = (x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        result:3.b = sub_685f40(x87_r7_2 + fconvert.t(0.5))
        return result
    
    result:3.b = sub_685f40(x87_r7_2 - fconvert.t(0.5))
    return result
}
