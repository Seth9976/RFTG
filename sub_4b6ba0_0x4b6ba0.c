// 函数名称: sub_4b6ba0
// 虚拟地址: 0x4b6ba0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4b6ba0(void* arg1)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    void* entry_ebx
    
    if (*(arg1 + 0x1dc) != 2)
        char const* const var_10_1 = "**game name**"
        int32_t var_14_1 = *(arg1 + 0x1d4)
        void* var_18_1 = entry_ebx + 0x10
        int32_t var_1c_1 = *(entry_ebx + 4)
        return sub_4c57f0("player (%d, %s) forfeited inactive game (%d, %s)")
    
    int32_t edx = *(arg1 + 0x140)
    int32_t eax = 0
    
    if (edx s> 0)
        void* edi_1 = arg1 + 0x30
        
        do
            int32_t esi_1 = *edi_1
            
            if (esi_1 == 2 || esi_1 == 6)
                char const* const var_10 = "**game name**"
                int32_t var_14 = *(arg1 + 0x1d4)
                void* var_18 = entry_ebx + 0x10
                int32_t var_1c = *(entry_ebx + 4)
                return sub_4c57f0("player (%d, %s) forfeited already forfeited game (%d, %s)")
            
            eax += 1
            edi_1 += 0x50
        while (eax s< edx)
    
    int32_t eax_1 = 0
    
    if (edx s> 0)
        void* esi_2 = arg1
        
        do
            if (*esi_2 == *(entry_ebx + 4))
                *(eax_1 * 0x50 + arg1 + 0x30) = 2
                return sub_4b6cc0(arg1)
            
            eax_1 += 1
            esi_2 += 0x50
        while (eax_1 s< edx)
    
    *0x30 = 2
    return sub_4b6cc0(arg1)
}
