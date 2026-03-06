// 函数名称: sub_67b230
// 虚拟地址: 0x67b230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67b230(void** arg1)
{
    // 第一条实际指令: if (arg1[0x68] != 0)
    if (arg1[0x68] != 0)
    label_67b258:
        int32_t eax_4 = *(arg1[0x6e] + 0x14)
        
        if (arg1[0x68] == eax_4 + 0xd0)
            *(*arg1 + 0x14) = 0x62
            *(*arg1 + 0x18) = *(arg1[0x6e] + 0x14)
            (*(*arg1 + 4))(arg1, 3)
            arg1[0x68] = 0
        label_67b2aa:
            void* esi_1 = arg1[0x6e]
            *(esi_1 + 0x14) = (*(esi_1 + 0x14) + 1) & 7
            return 1
        
        if ((*(arg1[6] + 0x14))(arg1, eax_4) != 0)
            goto label_67b2aa
    else if (sub_67ac90(arg1) != 0)
        goto label_67b258
    
    return 0
}
