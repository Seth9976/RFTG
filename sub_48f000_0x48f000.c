// 函数名称: sub_48f000
// 虚拟地址: 0x48f000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_48f000()
{
    // 第一条实际指令: int32_t ecx_1
    int32_t ecx_1
    void* eax_1
    
    if (data_27e7a88 != 0)
        ecx_1 = data_27e7a90
        
        if (ecx_1 == 0x4000)
            void* esi_1 = data_27e7a8c
            eax_1 = *(esi_1 + 0x60000)
            
            if (eax_1 == 0)
                eax_1 = __execvp(0x60008, 0x10)
                
                if (eax_1 == 0)
                    sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                *(eax_1 + 0x60000) = 0
                *(esi_1 + 0x60000) = eax_1
            
            data_27e7a8c = eax_1
            ecx_1 = 0
    else
        eax_1 = __execvp(0x60008, 0x10)
        
        if (eax_1 == 0)
            sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *(eax_1 + 0x60000) = 0
        data_27e7a88 = eax_1
        data_27e7a8c = eax_1
        ecx_1 = 0
    int32_t result = data_27e7a8c + ecx_1 * 0x18
    data_27e7a90 = ecx_1 + 1
    return result
}
