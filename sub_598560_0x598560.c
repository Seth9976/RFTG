// 函数名称: sub_598560
// 虚拟地址: 0x598560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_598560(char* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t edi = arg3
    int32_t edi = arg3
    
    if (edi == 1)
        char ecx = *arg2
        arg1[1] = ecx
        *arg1 = ecx
        return arg1
    
    *arg1 = *arg2
    int32_t i = 1
    arg1[1] = ((zx.d(*arg2) * 3 + zx.d(arg2[1]) + 2) s>> 2).b
    
    if (edi - 1 s> 1)
        do
            uint32_t eax_6 = zx.d(arg2[i])
            arg1[i << 1] = ((zx.d(arg2[i - 1]) + eax_6 * 3 + 2) s>> 2).b
            arg1[(i << 1) + 1] = ((zx.d(arg2[i + 1]) + eax_6 * 3 + 2) s>> 2).b
            i += 1
        while (i s< edi - 1)
        
        edi = arg3
    
    arg1[i << 1] = ((zx.d(arg2[edi - 2]) * 3 + zx.d(arg2[edi - 1]) + 2) s>> 2).b
    void* eax_13
    eax_13.b = arg2[edi - 1]
    arg1[(i << 1) + 1] = eax_13.b
    return arg1
}
