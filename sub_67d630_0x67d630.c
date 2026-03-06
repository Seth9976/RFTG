// 函数名称: sub_67d630
// 虚拟地址: 0x67d630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67d630(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x1a8)
    void* esi = *(arg1 + 0x1a8)
    
    if (*(esi + 0x30) != 0)
        goto label_67d665
    
    int32_t result = (*(*(arg1 + 0x1ac) + 0xc))(arg1, esi + 8)
    
    if (result != 0)
        *(esi + 0x30) = 1
    label_67d665:
        void* eax_2 = *(arg1 + 0x13c)
        result = (*(*(arg1 + 0x1b0) + 4))(arg1, esi + 8, esi + 0x34, eax_2, arg2, arg3, arg4)
        
        if (*(esi + 0x34) u>= eax_2)
            *(esi + 0x30) = 0
            *(esi + 0x34) = 0
    
    return result
}
