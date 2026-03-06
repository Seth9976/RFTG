// 函数名称: sub_4b7950
// 虚拟地址: 0x4b7950
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4b7950()
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    int32_t ecx = entry_ebx[0x6d]
    
    if (ecx != 0)
        void* edx_1 = data_27e7a44
        uint32_t eax = zx.d(ecx.w)
        
        if (eax u< *(edx_1 + 4))
            eax = eax * 0x1f8 + *edx_1
            
            if (*(eax + 0x1f0) == ecx)
                int32_t var_10_1 = ecx
                char const* const var_18_1
                
                if (*eax != 0)
                    void* var_14_2 = &entry_ebx[4]
                    var_18_1 = "player left game %s %d"
                else
                    void* var_14_1 = &entry_ebx[4]
                    var_18_1 = "player left game (lobby) %s %d"
                
                sub_4c57f0(var_18_1)
                int32_t i = 0
                void* ecx_2 = eax + 0x24
                
                do
                    if (*(ecx_2 + 4) == entry_ebx[1])
                        *(ecx_2 + 4) = 0
                        *(ecx_2 + 8) = 0
                        break
                    
                    i += 1
                    ecx_2 += 0x70
                while (i s< 4)
                
                void* eax_3 = *(eax + 0x1e8)
                void** edx_3 = *(eax_3 + 0x518)
                void** ecx_3 = edx_3
                
                if (edx_3 == 0)
                label_4b7a0d:
                    sub_4c5870("Halt", &data_83f3d3, "NetSync.cpp", 0x155, "FindClientData")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                while (true)
                    bool cond:1_1 = *edx_3 == *entry_ebx
                    edx_3 = edx_3[4]
                    
                    if (cond:1_1)
                        if (ecx_3 != 0)
                            sub_4d2a30(eax_3 + 0x518, edx_3, ecx_3)
                            break
                        
                        sub_4c5870("listIter", &data_83f3d3, "NetSync.cpp", 0x16e, 
                            "NetSync::HostRemoveClientWithoutDisconnecting")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    ecx_3 = edx_3
                    
                    if (edx_3 == 0)
                        goto label_4b7a0d
    
    entry_ebx[0x6d] = 0
}
