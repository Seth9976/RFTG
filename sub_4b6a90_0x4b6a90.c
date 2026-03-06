// 函数名称: sub_4b6a90
// 虚拟地址: 0x4b6a90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4b6a90(void* arg1, void* arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x18c) != 1)
    if (*(arg1 + 0x18c) != 1)
        return sub_4c57f0("accepting invitation to non-custom game")
    
    int32_t edx = *(arg1 + 0x140)
    int32_t eax_1 = 0
    void* eax_2
    
    if (edx s<= 0)
    label_4b6ad3:
        eax_2 = nullptr
    else
        void* ecx_2 = arg1
        
        while (*ecx_2 != *(arg2 + 4))
            eax_1 += 1
            ecx_2 += 0x50
            
            if (eax_1 s>= edx)
                goto label_4b6ad3
        
        eax_2 = eax_1 * 0x50 + arg1
    
    *(eax_2 + 0x30) = 0
    int32_t ecx_3 = *(arg1 + 0x140)
    int32_t eax_3 = 0
    
    if (ecx_3 s> 0)
        void* edx_1 = arg1 + 0x30
        
        do
            if (*edx_1 != 0)
                return sub_4b6cc0(arg1)
            
            eax_3 += 1
            edx_1 += 0x50
        while (eax_3 s< ecx_3)
    
    sub_469260()
    return sub_4b6cc0(arg1)
}
