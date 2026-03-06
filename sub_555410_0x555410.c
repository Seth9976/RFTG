// 函数名称: sub_555410
// 虚拟地址: 0x555410
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void** __convention("regparm")sub_555410(int32_t* arg1)
{
    // 第一条实际指令: void** esi = arg1[1]
    void** esi = arg1[1]
    void* ecx = esi[3]
    arg1[1] = ecx
    
    if (ecx == 0)
        *arg1 = 0
    else
        *(ecx + 8) = 0
    
    int32_t edx = esi[1]
    void* ecx_1 = *esi
    arg1[2] -= 1
    void** entry_result
    entry_result[1] = edx
    void* edx_1 = data_26a44e4
    *entry_result = ecx_1
    
    if (edx_1 == 0)
        sub_4f4250()
        edx_1 = data_26a44e4
    
    int32_t eax = 0
    void** edi_2
    
    while (true)
        if (1 << (eax.b + 4) s>= 0x10)
            edi_2 = edx_1 + eax * 0x14
            break
        
        eax += 1
        
        if (eax s>= 7)
            edi_2 = edx_1 + 0x8c
            break
    
    edi_2[3] -= 1
    
    if (sub_4f4210(edi_2, esi) != 0)
        *esi = *edi_2
        *edi_2 = esi
        return entry_result
    
    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x81, 
        "XAllocator::Free")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
