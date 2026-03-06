// 函数名称: sub_676a10
// 虚拟地址: 0x676a10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_676a10(void* arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        void* eax_1 = *(arg1 + 0x1c)
        
        if (eax_1 != 0)
            int32_t ecx_1 = *(arg1 + 0x24)
            
            if (ecx_1 != 0)
                int32_t eax_2 = *(eax_1 + 0x34)
                
                if (eax_2 != 0)
                    ecx_1(*(arg1 + 0x28), eax_2)
                
                (*(arg1 + 0x24))(*(arg1 + 0x28), *(arg1 + 0x1c))
                *(arg1 + 0x1c) = 0
                return 0
    
    return 0xfffffffe
}
