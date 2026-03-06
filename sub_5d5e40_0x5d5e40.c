// 函数名称: sub_5d5e40
// 虚拟地址: 0x5d5e40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d5e40(void* arg1, char arg2, char arg3, char arg4)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 0xffffffff
    
    *(*(arg1 + 0x34) + 0x4c) = arg2
    void* edx
    edx.b = arg3
    int32_t ebx
    ebx.b = arg4
    *(*(arg1 + 0x34) + 0x4d) = edx.b
    *(*(arg1 + 0x34) + 0x4e) = ebx.b
    int32_t esi_3 = *(*(arg1 + 0x34) + 0x44)
    
    if (arg2 != 0xff || edx.b != arg2 || ebx.b != arg2)
        void* ecx_2 = *(arg1 + 0x34)
        *(ecx_2 + 0x44) |= 1
    else
        void* ecx_1 = *(arg1 + 0x34)
        *(ecx_1 + 0x44) &= 0xfffffffe
    
    int32_t* eax_2 = *(arg1 + 0x34)
    
    if (eax_2[0x11] != esi_3)
        sub_5d8400(eax_2)
    
    return 0
}
