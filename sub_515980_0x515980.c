// 函数名称: sub_515980
// 虚拟地址: 0x515980
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_515980(void* arg1)
{
    // 第一条实际指令: void* result = arg1
    void* result = arg1
    void** i = *(result + 4)
    
    while (i != 0)
        void** i_1 = i
        
        if (i == 0)
            sub_4c5870("iter != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x1a1, 
                "XList<struct AnimSet *>::GetNextIter")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        float* edi_1 = *i
        i = i[1]
        result = sub_5157c0(edi_1)
        int16_t top = top - 1
        unimplemented  {call 0x5157c0}
        int32_t edx
        
        if (result.b == 0)
            result, edx = sub_4e7520(arg1 + 4, sub_5154b0(arg1, edx, edi_1), i_1)
    
    return result
}
