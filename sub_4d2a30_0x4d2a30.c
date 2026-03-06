// 函数名称: sub_4d2a30
// 虚拟地址: 0x4d2a30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4d2a30(int32_t* arg1, int32_t arg2, void** arg3)
{
    // 第一条实际指令: void* ecx = arg3[5]
    void* ecx = arg3[5]
    
    if (ecx == 0)
        *arg1 = arg3[4]
    else
        *(ecx + 0x10) = arg3[4]
    
    void* ecx_2 = arg3[4]
    
    if (ecx_2 == 0)
        arg1[1] = arg3[5]
    else
        *(ecx_2 + 0x14) = arg3[5]
    
    int32_t result = arg3[4]
    arg1[2] -= 1
    sub_5041e0(&arg3[1])
    void* edx_3 = data_26a44e4
    
    if (edx_3 == 0)
        sub_4f4250()
        edx_3 = data_26a44e4
    
    int32_t eax = 0
    void** edi_2
    
    while (true)
        if (1 << (eax.b + 4) s>= 0x18)
            edi_2 = edx_3 + eax * 0x14
            break
        
        eax += 1
        
        if (eax s>= 7)
            edi_2 = edx_3 + 0x8c
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
