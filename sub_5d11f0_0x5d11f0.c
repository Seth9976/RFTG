// 函数名称: sub_5d11f0
// 虚拟地址: 0x5d11f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d11f0(int32_t arg1 @ esi, int16_t arg2 @ x87control)
{
    // 第一条实际指令: int32_t result = 0x1505
    int32_t result = 0x1505
    int32_t i = 0
    int32_t edi
    int32_t var_14 = edi
    
    do
        long double x87_r7_1 = fconvert.t(*(arg1 + (i << 3)))
        int16_t x87status_1
        int16_t temp0_1
        temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
        i += 1
        int16_t x87control
        int16_t x87status_2
        x87control, x87status_2 = __fldcw_memmem16(temp0_1 | 0xc00)
        int16_t x87control_1
        int16_t x87status_3
        x87control_1, x87status_3 = __fldcw_memmem16(temp0_1)
        long double x87_r7_2 = fconvert.t(*(arg1 + (i << 3) - 4))
        int16_t x87status_4
        int16_t temp0_2
        temp0_2, x87status_4 = __fnstcw_memmem16(x87control_1)
        int16_t x87control_2
        int16_t x87status_5
        x87control_2, x87status_5 = __fldcw_memmem16(temp0_2 | 0xc00)
        result = ((int.q(x87_r7_1)).d + result * 0x21) * 0x21 + (int.q(x87_r7_2)).d
        int16_t x87status_6
        arg2, x87status_6 = __fldcw_memmem16(temp0_2)
    while (i s< 0x40)
    
    return result
}
