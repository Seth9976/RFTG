// 函数名称: sub_603810
// 虚拟地址: 0x603810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_603810(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, void* arg5)
{
    // 第一条实际指令: int32_t* ebx = arg4
    int32_t* ebx = arg4
    int32_t i = arg3
    int32_t ecx = 0
    int32_t result = divs.dp.d(sx.q(arg1 << 0x10), i)
    int32_t edi = 0x10000
    
    while (i s> 0)
        if (edi s>= 0x10000)
            uint32_t j_1 = edi u>> 0x10
            edi += j_1 * 0xffff0000
            uint32_t j
            
            do
                ecx = *ebx
                ebx = &ebx[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        int32_t* edx_3 = arg5
        *edx_3 = ecx
        i -= 1
        edi += result
        arg5 = &edx_3[1]
    
    return result
}
