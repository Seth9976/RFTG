// 函数名称: sub_5dd710
// 虚拟地址: 0x5dd710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dd710(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t eax_5
    int32_t eax_5
    void* ecx
    
    if (arg3 == 0)
        ecx = arg1
        eax_5 = *(ecx + 0x18)
    else if (arg3 == 1)
        ecx = arg1
        eax_5 = *(ecx + 0x1c)
    else
        if (arg3 != 2)
            sub_5cce60("Unknown value for 'whence'")
            return 0xffffffff
        
        ecx = arg1
        eax_5 = *(ecx + 0x20)
    
    int32_t eax_6 = eax_5 + arg2
    int32_t edx_1 = *(ecx + 0x18)
    
    if (eax_6 u< edx_1)
        eax_6 = edx_1
    
    int32_t esi = *(ecx + 0x20)
    
    if (eax_6 u> esi)
        eax_6 = esi
    
    *(ecx + 0x1c) = eax_6
    int32_t result
    int32_t edx_2
    edx_2:result = sx.q(eax_6 - edx_1)
    return result
}
