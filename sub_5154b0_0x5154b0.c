// 函数名称: sub_5154b0
// 虚拟地址: 0x5154b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5154b0(void* arg1, int32_t arg2, void** arg3)
{
    // 第一条实际指令: void** var_4 = arg3
    void** var_4 = arg3
    void* ecx = data_27e7fcc
    
    if (ecx == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void** edi = *(ecx + 8)
    
    if (arg3[8] == 2)
        *(arg1 + arg3[0xa] * 0xc + 0x20) = 0
        *(arg1 + (*(arg1 + 0x88) << 2) + 0x8c) = arg3[0xa]
        *(arg1 + 0x88) += 1
    
    char result = sub_5184c0(edi, arg3)
    
    if (result != 0)
        void* edx_1 = *edi
        edi[3] -= 1
        *arg3 = edx_1
        *edi = arg3
        return result
    
    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x10c, 
        "XTypedAllocator<struct AnimSet>::Free")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
