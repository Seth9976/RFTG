// 函数名称: sub_4eb650
// 虚拟地址: 0x4eb650
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4eb650()
{
    // 第一条实际指令: void* eax = data_27e7fcc
    void* eax = data_27e7fcc
    
    if (eax == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi = *(eax + 0x30)
    void* entry_ebx
    
    while (*(entry_ebx + 0x10) != 0)
        void* edi_1 = *(entry_ebx + 8)
        
        if (edi_1 == 0)
            sub_4c5870("mpHead != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x53, 
                "XList<struct ParticleEmitter>::GetHead")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* esi_1 = nullptr
        
        while (true)
            if (esi_1 != 0)
                esi_1 = *(esi_1 + 0x2fc)
            else
                esi_1 = *(edi_1 + 0x2d0)
            
            if (esi_1 == 0)
                break
            
            sub_4eb600(esi_1)
        
        sub_4f3590(edi_1 + 0x2d0)
        void* eax_3 = *(edi_1 + 0x2e4)
        *(eax_3 + 0x14) -= 1
        void var_308
        sub_4f3390(entry_ebx + 8, &var_308)
        void var_38
        sub_4f3590(&var_38)
    
    sub_4f3590(entry_ebx + 8)
    int32_t result = *(esi + 0xc)
    *(esi + 0xc) = zx.d(*(entry_ebx + 0x78))
    *(entry_ebx + 0x78) = result
    *(esi + 0x10) -= 1
    return result
}
