// 函数名称: __ftol2_sse_excpt
// 虚拟地址: 0x685f5c
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t__ftol2_sse_excpt(int32_t arg1 @ ebp, void arg2 @ x87control, long double arg3 @ st0)
{
    // 第一条实际指令: if (data_3166fe0 == 0)
    if (data_3166fe0 == 0)
        return __ftol2(arg3) __tailcall
    
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg2)
    
    if ((temp0 & 0x7f) != 0x7f)
        return __ftol2(arg3) __tailcall
    
    int16_t var_4
    var_4.d = arg1
    return int.d(fconvert.t(fconvert.d(arg3)))
}
