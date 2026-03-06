// 函数名称: sub_517120
// 虚拟地址: 0x517120
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_517120(void* arg1)
{
    // 第一条实际指令: void* result = arg1
    void* result = arg1
    void* edi = *(result + 0x2c)
    
    if (edi != 0)
        void** i = *(edi + 4)
        
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
            int32_t edx
            result, edx = sub_4e7520(edi + 4, sub_5154b0(edi, edx, ecx_1), i_1)
    
    *(*(arg1 + 0x2c) + 0x310) = 0
    return result
}
