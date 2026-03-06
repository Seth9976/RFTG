// 函数名称: sub_4f3b20
// 虚拟地址: 0x4f3b20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4f3b20(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax_2 = (arg3 - arg1) s>> 3
    int32_t eax_2 = (arg3 - arg1) s>> 3
    int32_t edx
    
    if (eax_2 s<= 0x28)
        return sub_4f3bd0(eax_2, edx, arg4, arg2, arg1, arg4)
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(eax_2 + 1)
    int32_t edx_2 = edx_1 & 7
    int32_t eax_6 = (eax_4 + edx_2) s>> 3
    int32_t eax_9 = eax_6 * 8
    int32_t* esi = &arg1[eax_6 * 2]
    int32_t ecx_1 = eax_6 << 4
    int32_t result = sub_4f3bd0(arg4, 
        sub_4f3bd0(
            sub_4f3bd0(eax_9, sub_4f3bd0(arg4, edx_2, ecx_1, esi, arg1, arg4), arg4, arg2, 
                arg2 - eax_9, arg4), 
            arg4, arg4, arg3 - eax_9, arg3 - ecx_1, arg4), 
        arg4, arg2, esi, arg4)
    return result
}
