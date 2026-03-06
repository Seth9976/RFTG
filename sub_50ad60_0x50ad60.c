// 函数名称: sub_50ad60
// 虚拟地址: 0x50ad60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_50ad60()
{
    // 第一条实际指令: int16_t* eax_4 = data_30785dc
    int16_t* eax_4 = data_30785dc
    
    if (*eax_4 != 0)
        *(eax_4 + 1) = 1
        ReleaseSemaphore(*(eax_4 + 0x20), 1, nullptr)
        WaitForSingleObject(*(data_30785dc + 0x1c), 0xffffffff)
        DeleteCriticalSection(data_30785dc + 4)
        CloseHandle(*(data_30785dc + 0x20))
        CloseHandle(*(data_30785dc + 0x1c))
        eax_4 = data_30785dc
        *eax_4 = 0
    
    void* edx_3 = data_26a44e4
    
    if (edx_3 == 0)
        sub_4f4250()
        edx_3 = data_26a44e4
    
    int32_t eax_5 = 0
    int16_t** edi_2
    
    while (true)
        if (1 << (eax_5.b + 4) s>= 0x74)
            edi_2 = edx_3 + eax_5 * 0x14
            break
        
        eax_5 += 1
        
        if (eax_5 s>= 7)
            edi_2 = edx_3 + 0x8c
            break
    
    edi_2[3] -= 1
    char result = sub_4f4210(edi_2, eax_4)
    
    if (result != 0)
        *eax_4 = *edi_2
        *edi_2 = eax_4
        data_30785dc = 0
        return result
    
    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x81, 
        "XAllocator::Free")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
