// 函数名称: sub_679730
// 虚拟地址: 0x679730
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_679730(void* arg1 @ esi)
{
    // 第一条实际指令: if (*(arg1 + 0x14) != 0xcc)
    if (*(arg1 + 0x14) != 0xcc)
        (**(arg1 + 0x1a4))(arg1)
        *(arg1 + 0x8c) = 0
        *(arg1 + 0x14) = 0xcc
    
    while (*(*(arg1 + 0x1a4) + 8) != 0)
        int32_t i = *(arg1 + 0x8c)
        
        while (i u< *(arg1 + 0x74))
            void* ecx_2 = *(arg1 + 8)
            
            if (ecx_2 != 0)
                *(ecx_2 + 4) = i
                *(*(arg1 + 8) + 8) = *(arg1 + 0x74)
                (**(arg1 + 8))(arg1)
            
            int32_t ebx_1 = *(arg1 + 0x8c)
            (*(*(arg1 + 0x1a8) + 4))(arg1, 0, arg1 + 0x8c, 0)
            i = *(arg1 + 0x8c)
            
            if (i == ebx_1)
                return 0
        
        (*(*(arg1 + 0x1a4) + 4))(arg1)
        (**(arg1 + 0x1a4))(arg1)
        *(arg1 + 0x8c) = 0
    
    int32_t ecx_6
    ecx_6.b = *(arg1 + 0x44) != 0
    *(arg1 + 0x14) = ecx_6 + 0xcd
    return 1
}
