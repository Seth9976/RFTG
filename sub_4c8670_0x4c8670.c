// 函数名称: sub_4c8670
// 虚拟地址: 0x4c8670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4c8670()
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    
    if (entry_ebx[0x11] == 0)
        return 
    
    int32_t eax
    void* esi_1
    
    while (true)
        int32_t* eax_1 = entry_ebx[0xf]
        
        if (eax_1 == 0)
            sub_4c5870("mpHead != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x53, 
                "XList<struct NetBuffer *>::GetHead")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        esi_1 = *eax_1
        int32_t eax_2 = *(esi_1 + 0xfdec)
        
        if (eax_2 s<= 0)
            sub_4c5870("netBuffer->mDataSize > 0", &data_83f3d3, "Network.cpp", 0x511, "NetLocTCPSend")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (entry_ebx[5] != 3)
            eax = (*(*data_27e7bb4 + 0x2c))(entry_ebx[4], *(esi_1 + 0xfde8) + esi_1, eax_2)
            
            if (eax == 0xffffffff)
                sub_4c6970(entry_ebx)
                return 
        else
            eax = 0
        
        if (entry_ebx[0x11] s> 0x1388)
            sub_4c5680("Client stopped receiving data. closing.")
            (*(*data_27e7bb4 + 0x34))(entry_ebx[4])
            sub_4c6970(entry_ebx)
            return 
        
        if (eax s< *(esi_1 + 0xfdec))
            break
        
        void* eax_7 = sub_4db440(&entry_ebx[0xf])
        void* edi_1 = data_27e7bb8
        void* var_8 = eax_7
        sub_518190(edi_1 + 0x44, &var_8)
        
        if (entry_ebx[0x11] == 0)
            return 
    
    if (eax s< 0)
        sub_4c5870("sent >= 0", &data_83f3d3, "Network.cpp", 0x533, "NetLocTCPSend")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    *(esi_1 + 0xfde8) += eax
    *(esi_1 + 0xfdec) -= eax
}
