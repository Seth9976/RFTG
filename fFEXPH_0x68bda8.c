// 函数名称: fFEXPH
// 虚拟地址: 0x68bda8
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tfFEXPH(void* arg1 @ ebp, long double arg2 @ st0, long double arg3 @ st1, long double arg4 @ st2)
{
    // 第一条实际指令: int16_t ecx
    int16_t ecx
    char edx = __ffexpm1(ecx, arg1, 
        arg2 * (fconvert.t(1.4426950407214463) + fconvert.t(1.675171316223821e-10)))
    int32_t ebx
    ebx.b = 0xff
    *(arg1 - 0x9f)
    
    if ((edx & 0x40) == 0)
        ebx:1.b = 0xff
        __fscale(arg3 + float.t(1), arg4)
    
    return sub_688678() __tailcall
}
