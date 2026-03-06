// 函数名称: sub_598fe0
// 虚拟地址: 0x598fe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_598fe0(int32_t arg1, void* arg2 @ edi)
{
    // 第一条实际指令: if (*(arg2 + 0x1c) == 0)
    if (*(arg2 + 0x1c) == 0)
        data_273ac1c = "output buffer limit"
        return 0
    
    int32_t eax_1 = *(arg2 + 0x14)
    int32_t ebx_1 = *(arg2 + 0x10) - eax_1
    uint32_t i
    
    for (i = *(arg2 + 0x18) - eax_1; arg1 + ebx_1 s> i; i *= 2)
    
    int32_t result = _realloc(eax_1, i)
    
    if (result == 0)
        data_273ac1c = "outofmem"
        return result
    
    *(arg2 + 0x14) = result
    *(arg2 + 0x18) = result + i
    *(arg2 + 0x10) = result + ebx_1
    return 1
}
