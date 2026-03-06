// 函数名称: sub_4c8240
// 虚拟地址: 0x4c8240
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4c8240()
{
    // 第一条实际指令: void* var_c
    void* var_c
    int32_t* entry_ebx
    
    if (entry_ebx[0xe] != 0)
        int32_t* eax_1 = entry_ebx[0xd]
        
        if (eax_1 == 0)
            sub_4c5870("mpTail != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x5a, 
                "XList<struct NetBuffer *>::GetTail")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* eax_3 = *eax_1
        
        if (0xfde8 - *(eax_3 + 0xfdec) - *(eax_3 + 0xfde8) s< 1)
            var_c = sub_4c6760()
            sub_518190(&entry_ebx[0xc], &var_c)
    else
        var_c = sub_4c6760()
        sub_518190(&entry_ebx[0xc], &var_c)
    
    int32_t* eax_5 = entry_ebx[0xd]
    
    if (eax_5 != 0)
        while (true)
            void* edi_1 = *eax_5
            int32_t ecx_3 = *(edi_1 + 0xfdec)
            void* edx_1 = *(edi_1 + 0xfde8)
            void* esi_2 = 0xfde8 - edx_1 - ecx_3
            
            if (entry_ebx[5] != 3)
                int32_t eax_9 = (*(*data_27e7bb4 + 0x30))(entry_ebx[4], edx_1 + ecx_3 + edi_1, esi_2)
                
                if (eax_9 == 0xffffffff)
                    return sub_4c6970(entry_ebx)
                
                if (eax_9 != 0)
                    if (eax_9 s<= 0)
                        sub_4c5870("len > 0", &data_83f3d3, "Network.cpp", 0x4b4, "NetLocTCPReceive")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    *(edi_1 + 0xfdec) += eax_9
                    
                    if (eax_9 s>= esi_2)
                        void* eax_10 = data_27e7bb8
                        
                        if (eax_10 == 0)
                            sub_4c5870("gNetwork", &data_83f3d3, "Network.cpp", 0xfa, "NetBufferAlloc")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        void* eax_12
                        
                        if (*(eax_10 + 0x4c) == 0)
                            eax_12 = __execvp(0xfe10, 0x10)
                            
                            if (eax_12 == 0)
                                sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                        else
                            eax_12 = sub_4c9050(eax_10 + 0x44)
                        
                        *(eax_12 + 0xfdf8) = fconvert.s(float.t(0))
                        *(eax_12 + 0xfde8) = 0
                        *(eax_12 + 0xfdec) = 0
                        *(eax_12 + 0xfdf0) = 0
                        *(eax_12 + 0xfdf4) = 0
                        var_c = eax_12
                        sub_518190(&entry_ebx[0xc], &var_c)
                        eax_5 = entry_ebx[0xd]
                        
                        if (eax_5 == 0)
                            break
                        
                        continue
            
            int32_t* result = entry_ebx[0xd]
            
            if (result != 0)
                if (*(*result + 0xfdec) != 0)
                    return result
                
                void* eax_18 = sub_4c9050(&entry_ebx[0xc])
                void* edi_3 = data_27e7bb8
                var_c = eax_18
                return sub_518190(edi_3 + 0x44, &var_c)
            
            sub_4c5870("mpTail != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x5a, 
                "XList<struct NetBuffer *>::GetTail")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    sub_4c5870("mpTail != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x5a, 
        "XList<struct NetBuffer *>::GetTail")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
