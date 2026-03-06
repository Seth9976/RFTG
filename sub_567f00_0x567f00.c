// 函数名称: sub_567f00
// 虚拟地址: 0x567f00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_567f00(int32_t* arg1, int32_t arg2, void** arg3)
{
    // 第一条实际指令: void* ecx = arg3[3]
    void* ecx = arg3[3]
    
    if (ecx == 0)
        *arg1 = arg3[2]
    else
        *(ecx + 8) = arg3[2]
    
    void* ecx_2 = arg3[2]
    
    if (ecx_2 == 0)
        arg1[1] = arg3[3]
    else
        *(ecx_2 + 0xc) = arg3[3]
    
    int32_t result = arg3[2]
    void* edx_2 = data_26a44e4
    arg1[2] -= 1
    
    if (edx_2 == 0)
        sub_4f4250()
        edx_2 = data_26a44e4
    
    int32_t eax = 0
    void** edi_2
    
    while (true)
        if (1 << (eax.b + 4) s>= 0x10)
            edi_2 = edx_2 + eax * 0x14
            break
        
        eax += 1
        
        if (eax s>= 7)
            edi_2 = edx_2 + 0x8c
            break
    
    edi_2[3] -= 1
    
    if (sub_4f4210(edi_2, arg3) != 0)
        *arg3 = *edi_2
        *edi_2 = arg3
        return result
    
    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x81, 
        "XAllocator::Free")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
