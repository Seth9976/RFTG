// 函数名称: sub_689335
// 虚拟地址: 0x689335
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_689335(int16_t arg1 @ x87control, int16_t arg2 @ x87status, int16_t arg3 @ x87tag, long double arg4 @ st0, long double arg5 @ st1)
{
    // 第一条实际指令: int16_t x87control
    int16_t x87control
    int16_t x87status
    int16_t x87tag
    uint864_t temp0
    temp0, x87control, x87tag, x87status = __fnsave_memmem108(arg1, arg3, arg2)
    double var_78
    int32_t eax
    int80_t st0
    st0, eax = sub_689f3a(fconvert.d(arg5), fconvert.d(arg4), &var_78)
    __frstor_memmem108(temp0)
    
    if (eax == 0)
        return fconvert.t(var_78)
    
    void* ebp
    return sub_688739(ebp) __tailcall
}
