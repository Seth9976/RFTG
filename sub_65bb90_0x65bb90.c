// 函数名称: sub_65bb90
// 虚拟地址: 0x65bb90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_65bb90(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) __pure
{
    // 第一条实际指令: int32_t ebx_1 = arg2 & 0x7fff
    int32_t ebx_1 = arg2 & 0x7fff
    int32_t eax_1 = (arg1 & 0x7fff) - ebx_1
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(eax_1)
    int32_t temp0 = divs.dp.d(sx.q(((eax_2 ^ edx) - edx) * (arg3 - arg4)), arg5 - arg4)
    
    if (eax_1 s>= 0)
        return temp0 + ebx_1
    
    return ebx_1 - temp0
}
