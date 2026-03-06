// 函数名称: sub_662df0
// 虚拟地址: 0x662df0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_662df0(long double arg1 @ st0, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t result = arg2
    
    if (result - 1 u<= 0xfd)
        long double x87_r7_1 = float.t(result)
        
        if (result s< 0)
            x87_r7_1 = x87_r7_1 + fconvert.t(4294967296.0)
        
        int32_t mxcsr
        int16_t x87control
        int16_t x87control_2
        int80_t st0_1
        st0_1, x87control_2 = sub_686950(mxcsr, 
            sub_686c10(mxcsr, x87control, float.t(arg3) * fconvert.t(1.0000000000000001e-05), 
                x87_r7_1 / fconvert.t(255.0)), 
            fconvert.d(arg1 * fconvert.t(255.0) + fconvert.t(0.5)))
        int16_t x87status_1
        int16_t temp0_1
        temp0_1, x87status_1 = __fnstcw_memmem16(x87control_2)
        arg2:2.w = temp0_1
        int16_t x87control_3
        int16_t x87status_2
        x87control_3, x87status_2 = __fldcw_memmem16((zx.d(arg2:2.w) | 0xc00).w)
        result.b = (int.d(st0_1)).b
        int16_t x87control_4
        int16_t x87status_3
        x87control_4, x87status_3 = __fldcw_memmem16(arg2:2.w)
    
    return result
}
