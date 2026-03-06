// 函数名称: sub_5170a0
// 虚拟地址: 0x5170a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5170a0(void* arg1)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x2c)
    void* ebx = *(arg1 + 0x2c)
    
    if (ebx == 0)
        return 
    
    void** i = *(ebx + 4)
    
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
        arg1 = ecx_1[8]
        i = i[1]
        int32_t edx
        
        if (arg1 != 2 && arg1 != 4)
            arg1, edx = sub_4e7520(ebx + 4, sub_5154b0(ebx, edx, ecx_1), i_1)
}
