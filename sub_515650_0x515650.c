// 函数名称: sub_515650
// 虚拟地址: 0x515650
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_515650(int32_t* arg1)
{
    // 第一条实际指令: int32_t* i = arg1[1]
    int32_t* i = arg1[1]
    
    while (i != 0)
        void** i_1 = i
        
        if (i == 0)
            sub_4c5870("iter != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x1a1, 
                "XList<struct AnimSet *>::GetNextIter")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void** ecx_1 = *i
        i = i[1]
        int32_t edx = sub_4e7520(&arg1[1], sub_5154b0(arg1, edx, ecx_1), i_1)
    
    void* eax_2 = data_27e7fcc
    
    if (eax_2 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* edi = *(eax_2 + 8)
    
    if (sub_518580(edi + 0x10, arg1) != 0)
        *(edi + 0x1c) -= 1
        sub_5182d0(arg1)
        int32_t result = *(edi + 0x10)
        *arg1 = result
        *(edi + 0x10) = arg1
        return result
    
    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x10c, 
        "XTypedAllocator<struct StructureAnim>::Free")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
