// 函数名称: sub_4deaf0
// 虚拟地址: 0x4deaf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_4deaf0(int32_t arg1, int32_t* arg2, float* arg3, float* arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r6 = fconvert.t(0.5)
    uint32_t result = sub_4de380(arg4, arg2, arg3, arg4, arg2, 0, 
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(*arg3) + fconvert.t(arg3[9]))) * x87_r6), 
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg3[1]) + fconvert.t(arg3[0xa]))) * x87_r6), 
        fconvert.s(x87_r6 * fconvert.t(fconvert.s(fconvert.t(arg3[2]) + fconvert.t(arg3[0xb])))), arg5, 
        arg6)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
