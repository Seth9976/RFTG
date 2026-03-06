// 函数名称: sub_4b6880
// 虚拟地址: 0x4b6880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4b6880(void* arg1)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    void* entry_ebx
    
    if (*(arg1 + 0x1dc) != 2)
        char const* const var_10_1 = "**game name**"
        int32_t var_14_1 = *(arg1 + 0x1d4)
        void* var_18_1 = entry_ebx + 0x10
        int32_t var_1c_1 = *(entry_ebx + 4)
        return sub_4c57f0("SERVER: player (%d, %s) ack forfeited inactive game (%d, %s)")
    
    int32_t edx = *(arg1 + 0x140)
    int32_t eax = 0
    
    if (edx s> 0)
        void* edi_1 = arg1 + 0x30
        
        while (true)
            int32_t esi_1 = *edi_1
            
            if (esi_1 != 2 && esi_1 != 6)
                eax += 1
                edi_1 += 0x50
                
                if (eax s>= edx)
                    break
                
                continue
            
            int32_t eax_3 = 0
            void* eax_4
            
            if (edx s<= 0)
            label_4b68f0:
                eax_4 = nullptr
            else
                void* esi_2 = arg1
                
                while (*esi_2 != *(entry_ebx + 4))
                    eax_3 += 1
                    esi_2 += 0x50
                    
                    if (eax_3 s>= edx)
                        goto label_4b68f0
                
                eax_4 = eax_3 * 0x50 + arg1
            
            *(eax_4 + 0x30) = 5
            int32_t edx_2 = *(arg1 + 0x140)
            int32_t eax_5 = 0
            
            if (edx_2 s> 0)
                void* esi_3 = arg1 + 0x30
                
                while (*esi_3 != 0)
                    eax_5 += 1
                    esi_3 += 0x50
                    
                    if (eax_5 s>= edx_2)
                        break
            
            return sub_4b6cc0(arg1)
    
    char const* const var_10 = "**game name**"
    int32_t var_14 = *(arg1 + 0x1d4)
    void* var_18 = entry_ebx + 0x10
    int32_t var_1c = *(entry_ebx + 4)
    return sub_4c57f0("SERVER: player (%d, %s) ack forfeited unforfeited game game (%d, %s)")
}
