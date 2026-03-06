// 函数名称: sub_5d5ff0
// 虚拟地址: 0x5d5ff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d5ff0(int32_t* arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* ecx = arg1[0xd]
    int32_t* ecx = arg1[0xd]
    
    if (*ecx != arg3)
    label_5d6028:
        
        if (sub_5d8450(arg1, arg3) s< 0)
            return 0xffffffff
    else
        void* eax_2 = *(*(arg3 + 4) + 4)
        
        if (eax_2 != 0 && ecx[0x14] != *(eax_2 + 8))
            goto label_5d6028
        
        void* eax_4 = *(arg1[1] + 4)
        
        if (eax_4 != 0 && ecx[0x15] != *(eax_4 + 8))
            goto label_5d6028
    
    return (*(arg1[0xd] + 8))(arg1, arg2, arg3, arg4)
}
