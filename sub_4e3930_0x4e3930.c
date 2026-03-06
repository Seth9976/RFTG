// 函数名称: sub_4e3930
// 虚拟地址: 0x4e3930
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4e3930(int16_t arg1 @ x87control, float arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    long double x87_r7 = fconvert.t(arg2)
    long double temp1 = fconvert.t(0.99900001287460327)
    x87_r7 - temp1
    int16_t eax = (x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe | 0x3800
    
    if ((eax:1.b & 0x41) == 0)
        eax.b |= 0xff
        return eax
    
    long double x87_r6 = fconvert.t(0.00100000005f)
    x87_r6 - x87_r7
    
    if ((((x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) == 0)
        eax.b = 0
        return eax
    
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg1)
    arg2:2.w = temp0
    int16_t x87control
    int16_t x87status_1
    x87control, x87status_1 = __fldcw_memmem16(arg2:2.w | 0xc00)
    int16_t eax_2
    eax_2.b = (int.d(x87_r7 * fconvert.t(255.0) + fconvert.t(0.5))).b
    int16_t x87control_1
    int16_t x87status_2
    x87control_1, x87status_2 = __fldcw_memmem16(arg2:2.w)
    return eax_2
}
