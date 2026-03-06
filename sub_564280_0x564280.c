// 函数名称: sub_564280
// 虚拟地址: 0x564280
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_564280(int32_t* arg1)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    void** i = esi[3]
    
    while (i != 0)
        void** i_1 = i
        
        if (i == 0)
            sub_4c5870("iter != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x1a1, 
                "XList<struct Vec2I>::GetNextIter")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* ecx_1 = *i
        int32_t edx_1 = i[1]
        int32_t eax = esi[0x14]
        i = i[2]
        int32_t* edx_3 = *esi
        
        if (edx_3 != 0)
            while (true)
                int32_t* eax_2 = edx_3
                edx_3 = edx_3[4]
                
                if (*eax_2 s< eax + ecx_1 + 1 && eax_2[1] s< eax + edx_1 + 1 && eax_2[2] s> ecx_1
                        && eax_2[3] s> edx_1)
                    esi = arg1
                    sub_567f00(&esi[3], edx_3, i_1)
                    break
                
                if (edx_3 == 0)
                    esi = arg1
                    break
}
