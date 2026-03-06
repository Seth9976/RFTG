// 函数名称: sub_4db440
// 虚拟地址: 0x4db440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4db440(int32_t* arg1)
{
    // 第一条实际指令: void** esi = *arg1
    void** esi = *arg1
    void* ecx = esi[1]
    *arg1 = ecx
    
    if (ecx == 0)
        arg1[1] = 0
    else
        *(ecx + 8) = 0
    
    void* result = *esi
    void* edx = data_26a44e4
    arg1[2] -= 1
    
    if (edx == 0)
        sub_4f4250()
        edx = data_26a44e4
    
    int32_t eax = 0
    void** edi_2
    
    while (true)
        if (1 << (eax.b + 4) s>= 0xc)
            edi_2 = edx + eax * 0x14
            break
        
        eax += 1
        
        if (eax s>= 7)
            edi_2 = edx + 0x8c
            break
    
    edi_2[3] -= 1
    
    if (sub_4f4210(edi_2, esi) != 0)
        *esi = *edi_2
        *edi_2 = esi
        return result
    
    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x81, 
        "XAllocator::Free")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
