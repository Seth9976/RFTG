// 函数名称: sub_6732a0
// 虚拟地址: 0x6732a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6732a0(void* arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        void* eax_1 = *(arg1 + 0x1c)
        
        if (eax_1 != 0)
            int32_t edi = *(eax_1 + 4)
            
            if (edi != 0x2a && edi != 0x45 && edi != 0x49 && edi != 0x5b && edi != 0x67 && edi != 0x71
                    && edi != 0x29a)
                return 0xfffffffe
            
            int32_t eax_3 = *(eax_1 + 8)
            
            if (eax_3 != 0)
                (*(arg1 + 0x24))(*(arg1 + 0x28), eax_3)
            
            int32_t eax_5 = *(*(arg1 + 0x1c) + 0x44)
            
            if (eax_5 != 0)
                (*(arg1 + 0x24))(*(arg1 + 0x28), eax_5)
            
            int32_t eax_7 = *(*(arg1 + 0x1c) + 0x40)
            
            if (eax_7 != 0)
                (*(arg1 + 0x24))(*(arg1 + 0x28), eax_7)
            
            int32_t eax_9 = *(*(arg1 + 0x1c) + 0x38)
            
            if (eax_9 != 0)
                (*(arg1 + 0x24))(*(arg1 + 0x28), eax_9)
            
            (*(arg1 + 0x24))(*(arg1 + 0x28), *(arg1 + 0x1c))
            int32_t eax_12
            eax_12.b = edi != 0x71
            *(arg1 + 0x1c) = 0
            return (eax_12 - 1) & 0xfffffffd
    
    return 0xfffffffe
}
