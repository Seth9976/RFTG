// 函数名称: sub_406ce0
// 虚拟地址: 0x406ce0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_406ce0(void** arg1)
{
    // 第一条实际指令: CloseHandle(arg1[5])
    CloseHandle(arg1[5])
    CloseHandle(arg1[3])
    CloseHandle(arg1[4])
    void* edx_1 = data_26a44e4
    
    if (edx_1 == 0)
        sub_4f4250()
        edx_1 = data_26a44e4
    
    int32_t eax_1 = 0
    void** edi_2
    
    while (true)
        if (1 << (eax_1.b + 4) s>= 0x18)
            edi_2 = edx_1 + eax_1 * 0x14
            break
        
        eax_1 += 1
        
        if (eax_1 s>= 7)
            edi_2 = edx_1 + 0x8c
            break
    
    edi_2[3] -= 1
    char result = sub_4f4210(edi_2, arg1)
    
    if (result != 0)
        *arg1 = *edi_2
        *edi_2 = arg1
        return result
    
    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x81, 
        "XAllocator::Free")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
